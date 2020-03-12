#include "testclass.h"

#include<QDebug>

testClass::testClass():id(7),name("empty")
{
    qDebug()<<name<<" "<<id;
}

testClass::testClass(int id, QString name):id(id),name(name)
{
    qDebug()<<name<<" "<<id;
}
