#include "maindashboard.h"
#include "ui_maindashboard.h"

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QHorizontalBarSeries>
#include <QtCharts/QHorizontalPercentBarSeries>

using namespace QtCharts;

mainDashboard::mainDashboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainDashboard)
{
    ui->setupUi(this);
    {
        //Monthly Budget BEGIN
        m_set0 = new QBarSet("Budget");
        m_set1 = new QBarSet("Spendings");
        m_set2 = new QBarSet("Savings");

        m_set0->append(5);
        m_set1->append(7);
        m_set2->append(8);

        m_set0->setLabel("Budget");
        m_set1->setLabel("Spendings");
        m_set2->setLabel("Savings");

        QHorizontalPercentBarSeries *series = new QHorizontalPercentBarSeries();
        series->append(m_set0);
        series->append(m_set1);
        series->append(m_set2);

        QChart *spendSaveChart = new QChart();
        spendSaveChart->addSeries(series);
        spendSaveChart->setTitle("Spendings vs. Savings");
        spendSaveChart->setAnimationOptions(QChart::SeriesAnimations);

        QStringList categories;
        categories << "Month";
        QBarCategoryAxis *axis = new QBarCategoryAxis();
        axis->append(categories);
        spendSaveChart->createDefaultAxes();
        spendSaveChart->setAxisY(axis, series);

        spendSaveChart->legend()->setVisible(true);
        spendSaveChart->legend()->setAlignment(Qt::AlignBottom);

        QChartView *spendSaveChartView = new QChartView(spendSaveChart);
        spendSaveChartView->setRenderHint(QPainter::Antialiasing);
        spendSaveChartView->setParent(this);
        spendSaveChartView->setGeometry(ui->spendSaveChartPlaceholder->geometry());
        spendSaveChartView->showNormal();

        //BEGIN SPENDING CHART
        m_pieSeries = new QPieSeries();
        m_pieSeries->setHoleSize(0.35);
        m_pieSeries->append("Protein 4.2%", 4.2);
        QPieSlice *slice = m_pieSeries->append("Fat 15.6%", 15.6);
        slice->setExploded();
        slice->setLabelVisible();
        m_pieSeries->append("Other 23.8%", 23.8);
        m_pieSeries->append("Carbs 56.4%", 56.4);

        QChart *chart2 = new QChart();
        chart2->addSeries(m_pieSeries);
        chart2->setTitle("Expenses");
        chart2->legend()->hide();

        QChartView *chartView2 = new QChartView(chart2);
        chartView2->setRenderHint(QPainter::Antialiasing);
        chartView2->chart()->setTitle("Monthly Spending");
        chartView2->chart()->addSeries(m_pieSeries);
        chartView2->chart()->legend()->setAlignment(Qt::AlignBottom);
        chartView2->chart()->setTheme(QChart::ChartThemeBlueCerulean);
        chartView2->chart()->legend()->setFont(QFont("Arial", 7));
        chartView2->setParent(this);
        chartView2->setGeometry(ui->spendingChartPlaceholder->geometry());
        chartView2->showNormal();
        //END SPENDING CHART

        //start monthly budget
//        QBarSet *set1 = new QBarSet("Jane");

//        *set1 << 1 << 2 << 3 << 4 << 5 << 6;

//        QHorizontalPercentBarSeries *series3 = new QHorizontalPercentBarSeries();
//        series3->append(set1);

//        QChart *chart3 = new QChart();
//        chart3->addSeries(series3);
//        chart3->setTitle("Monthly Budget");
//        chart3->setAnimationOptions(QChart::SeriesAnimations);

//        QStringList categories3;
//        categories3 << "Jan";
//        QBarCategoryAxis *axis3 = new QBarCategoryAxis();
//        axis3->append(categories3);
//        chart3->createDefaultAxes();
//        chart3->setAxisY(axis3, series3);

//        chart3->legend()->setVisible(true);
//        chart3->legend()->setAlignment(Qt::AlignBottom);

//        QChartView *chartView3 = new QChartView(chart3);
//        chartView3->setRenderHint(QPainter::Antialiasing);
//        chartView3->setParent(this);
//        chartView3->setGeometry(ui->monthlyBudgetChartPlaceholder->geometry());
//        chartView3->showNormal();
    }
}

mainDashboard::~mainDashboard()
{
    delete ui;
}

void mainDashboard::updateUi()
{

    // lets get the account
    Account *pCurrentAcount = Account::Instance();

    m_set0->replace(0, pCurrentAcount->getBudget());
    m_set1->replace(0, 250);
    //m_set1->replace(0, pCurrentAcount->getSpendings());
    // we got rid of spendings, we can use getTotalSpendingsFromAllCategories()
    // but we need to add transactions to our categories first or we could hardcode something


    m_set2->replace(0, pCurrentAcount->getSavings());

    // Now we will call methods in Account and update the series
    // First lets clear the series
//    m_pieSeries->clear();
//    int numExpenses = pCurrentAcount->getNumExpenses();
//    for(int i=0; i<numExpenses; ++i)
//    {
//        Expense *pExpense = pCurrentAcount->getExpense(i);
//        m_pieSeries->add(pCurrentAcount->getFirstExpense());
//        m_pieSeries->append(pExpense->getCategoryName(), pExpense->getTotalExpense());
//    }

    // Now lets do the same for the series


}
