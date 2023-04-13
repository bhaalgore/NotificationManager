#include "database.h"

DataBase::DataBase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./notifyInfoDB");

    if(!db.tables().contains("notifyInfo"))
    {
        QSqlQuery createInfo;
        createInfo.exec("CREATE TABLE NotificationInfo(Type INT, Title TEXT, Description TEXT)");
    }
}

DataBase::~DataBase()
{
    db.close();
}
