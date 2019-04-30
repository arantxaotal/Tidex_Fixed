using System;
using ChartDirector;

namespace CSharpWPFCharts
{
    public class threedanglepie : DemoModule
    {
        //Name of demo module
        public string getName() { return "3D Angle"; }

        //Number of charts produced in this demo module
        public int getNoOfCharts() { return 7; }

        //Main code for creating charts
        public void createChart(WPFChartViewer viewer, int chartIndex)
        {
            // the tilt angle of the pie
            int angle = chartIndex * 15;

            // The data for the pie chart
            double[] data = {25, 18, 15, 12, 8, 30, 35};

            // The labels for the pie chart
            string[] labels = {"Labor", "Licenses", "Taxes", "Legal", "Insurance", "Facilities",
                "Production"};

            // Create a PieChart object of size 100 x 110 pixels
            PieChart c = new PieChart(100, 110);

            // Set the center of the pie at (50, 55) and the radius to 38 pixels
            c.setPieSize(50, 55, 38);

            // Set the depth and tilt angle of the 3D pie (-1 means auto depth)
            c.set3D(-1, angle);

            // Add a title showing the tilt angle
            c.addTitle("Tilt = " + angle + " deg", "Arial", 8);

            // Set the pie data
            c.setData(data, labels);

            // Disable the sector labels by setting the color to Transparent
            c.setLabelStyle("", 8, Chart.Transparent);

            // Output the chart
            viewer.Chart = c;

            //include tool tip for the chart
            viewer.ImageMap = c.getHTMLImageMap("clickable", "",
                "title='{label}: US${value}K ({percent}%)'");
        }
    }
}

