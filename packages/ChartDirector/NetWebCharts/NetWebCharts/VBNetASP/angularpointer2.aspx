<%@ Page Language="VB" Debug="true" %>
<%@ Import Namespace="ChartDirector" %>
<%@ Register TagPrefix="chart" Namespace="ChartDirector" Assembly="netchartdir" %>

<!DOCTYPE html>

<script runat="server">

'
' Page Load event handler
'
Protected Sub Page_Load(ByVal sender As System.Object, ByVal e As System.EventArgs)

    ' Create an AngularMeter object of size 300 x 300 pixels with transparent background
    Dim m As AngularMeter = New AngularMeter(300, 300, Chart.Transparent)

    ' Set the default text and line colors to white (0xffffff)
    m.setColor(Chart.TextColor, &Hffffff)
    m.setColor(Chart.LineColor, &Hffffff)

    ' Center at (150, 150), scale radius = 125 pixels, scale angle 0 to 360 degrees
    m.setMeter(150, 150, 125, 0, 360)

    ' Add a black (0x000000) circle with radius 148 pixels as background
    m.addRing(0, 148, &H000000)

    ' Add a ring between radii 139 and 147 pixels using the silver color with a light grey
    ' (0xcccccc) edge as border
    m.addRing(139, 147, Chart.silverColor(), &Hcccccc)

    ' Meter scale is 0 - 100, with major/minor/micro ticks every 10/5/1 units
    m.setScale(0, 100, 10, 5, 1)

    ' Set the scale label style to 16pt Arial Italic. Set the major/minor/micro tick lengths to
    ' 13/10/7 pixels pointing inwards, and their widths to 2/1/1 pixels.
    m.setLabelStyle("Arial Italic", 16)
    m.setTickLength(-13, -10, -7)
    m.setLineWidth(0, 2, 1, 1)

    ' Add a default red (0xff0000) pointer
    m.addPointer2(25, &Hff0000)

    ' Add a semi-transparent green (0x3f00ff00) line style pointer
    m.addPointer2(9, &H3f00ff00, -1, Chart.LinePointer2)

    ' Add a semi-transparent blue (0x7f66aaff) triangular pointer floating between 60% and 85% of
    ' the scale radius with the pointer width 5 times the default
    m.addPointer2(52, &H7f66aaff, &H66aaff, Chart.TriangularPointer2, 0.6, 0.85, 5)

    ' Add a semi-transparent yellow (0x7fffff66) triangular pointer floating between 80% and 90% of
    ' the scale radius with the pointer width 5 times the default
    m.addPointer2(65, &H7fffff66, &Hffff66, Chart.TriangularPointer2, 0.8, 0.9, 5)

    ' Add two red (0xff0000) triangular pointer at 72 and 94. The pointers float between 110% and
    ' 100% of the scale radius with widths 3 times the default
    m.addPointer2(72, &Hff0000, -1, Chart.TriangularPointer2, 1.1, 1.0, 3)
    m.addPointer2(94, &Hff0000, -1, Chart.TriangularPointer2, 1.1, 1.0, 3)

    ' Add a red (0xcc0000) zone spanning from 72 to 94, and between the radii 112 and 125
    m.addZone(72, 94, 125, 112, &Hcc0000)

    ' Output the chart
    WebChartViewer1.Image = m.makeWebImage(Chart.PNG)

End Sub

</script>

<html>
<head>
    <title>Angular Meter Pointers (2)</title>
</head>
<body style="margin:5px 0px 0px 5px">
    <div style="font:bold 18pt verdana">
        Angular Meter Pointers (2)
    </div>
    <hr style="border:solid 1px #000080" />
    <div style="font:10pt verdana; margin-bottom:1.5em">
        <a href='viewsource.aspx?file=<%=Request("SCRIPT_NAME")%>'>View Source Code</a>
    </div>
    <chart:WebChartViewer id="WebChartViewer1" runat="server" />
</body>
</html>

