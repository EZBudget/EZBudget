/*
 * Author: Alex Shershnov
 * Date last edited: 3/30/2018
 * Type: Implementation file
 * Implements all ideas listed in the header of this class
 */

#include "databasereaderwriter.h"
#include <QVariant>
DatabaseReaderWriter* DatabaseReaderWriter::_instance = 0;

DatabaseReaderWriter* DatabaseReaderWriter::Instance()
{
    if(_instance == 0)
        _instance = new DatabaseReaderWriter();
    return _instance;
}

DatabaseReaderWriter::DatabaseReaderWriter()
{
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/sqlite2/QtEzBudget.db");
}

bool DatabaseReaderWriter::databaseLoginCheck(QString username, QString password)
{
    int count = 0;
    QSqlQuery qry;
    user = username;
    if(qry.exec("select * from users where name='"+username + "' and password='"+password +"'"))
     {
        while(qry.next())
        {
            count++;
        }
        if(count != 1)
            return false;
        else
            return true;
     }
    return false;
}
//Function that verifies that you're connected to the database
bool DatabaseReaderWriter::checkConnection()
{
    if(!mydb.open())
        return false;
    else
        return true;
}
//Run queries and populate the account's variables
void DatabaseReaderWriter::loadProfile()
{
    int income, budget, savings;
    QSqlQuery qry1, qry2;
    qry1.exec("select * from users where name='"+user + "'");
    {
        while(qry1.next())
        {
           income = qry1.value(2).toString().toInt();
           budget = qry1.value(3).toString().toInt();
           savings = qry1.value(4).toString().toInt();
        }
    }
    c_account -> setBudget(budget);
    c_account ->setIncome(income);
    c_account ->setSavings(savings);

    //Temp variables
    QString category, name, date, type;
    //int amount;

    //Query for getting information about transactions

    qry2.exec("select * from transactions where userID='"+user +"'");
    {
        while(qry2.next())
        {
            category = qry2.value(0).toString();
            name = qry2.value(1).toString();
            date = qry2.value(2).toString();
            type = qry2.value(3).toString();
        }
    }
    mainDash = new mainDashboard();
    mainDash->show();
    mainDash->updateUi(c_account);

}