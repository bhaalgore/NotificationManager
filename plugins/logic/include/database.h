#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QList>
#include <QSqlQuery>

class DataBase
{
public:
    DataBase();
    ~DataBase();

private:
    QSqlDatabase db;
};

#endif // DATABASE_H
