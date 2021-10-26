#include "openimagefile.h"
#include <QApplication>
#include <QtWidgets>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

using namespace cv;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OpenImageFile w;
    w.show();

    return a.exec();
}
