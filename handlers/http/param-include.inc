<?xml version="1.0" encoding="utf-8"?>
<rde-dm:attribute mode="write" attribute="request:rdeResponseMimetype" op="set" value="text/xml"/>
<rde-dm:attribute mode="write" attribute="response:Expires" op="set" value="No.No..getDateHeaderValue(1440)"/>
<rde-dm:attribute mode="write" attribute="response:Date" op="set" value="No.No..getDateHeaderValue(0)"/>
<rde-dm:attribute mode="write" attribute="response:Pragma" op="set" value=""/>
<rde-dm:attribute mode="write" attribute="response:Cache-Control" op="set" value=""/>
<param-include xmlns:fo="http://www.w3.org/1999/XSL/Format" xmlns:rde="http://www.reddot.de/rde/ns" xmlns:rde-dm="http://www.reddot.de/rde/ns/dm" xmlns:rde-fdl="http://www.reddot.de/rde/ns/fdl" xmlns:rde-idea="http://www.reddot.de/rde/ns/idea" xmlns:rde-rd="http://www.reddot.de/2000/rde/rd" xmlns:rde-rdf="http://www.reddot.de/rde/ns/rdf" xmlns:rde-xmaps="http://www.reddot.de/rde/ns/xmaps" xmlns:rdf="http://www.w3.org/TR/REC-rdf-syntax/" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:xsl-template="http://www.reddot.de/rde/ns/template">
	<rde-dm:attribute mode="write" attribute="request:params2" value="[#request:params#]" value-separator="|" />
	<rde-dm:attribute mode="write" attribute="request:lt" value="&lt;" />
	<rde-dm:attribute attribute="request:params2" mode="for-each" alias="param" tag="notag">
	#RDE-REQUEST:lt/#<rde-dm:attribute mode="read" attribute="context:dnestarttag" default="rde-dm:param name=&quot;" tag="notag" inline-function="convertEntitiesToText()"/><rde-dm:attribute mode="read" attribute="context:param" inline-function="split('=',1)" tag="notag"/><rde-dm:attribute mode="read" attribute="context:dnestarttag-ender" default="&quot;" tag="notag" inline-function="convertEntitiesToText()"/>><rde-dm:attribute mode="read" attribute="context:param" inline-function="split('=',2)"  tag="notag"/>#RDE-REQUEST:lt/#<rde-dm:attribute mode="read" attribute="context:dneendtag" default="/rde-dm:param" inline-function="convertEntitiesToText()" tag="notag"/>>
	</rde-dm:attribute>

</param-include>