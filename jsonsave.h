#ifndef JSONSAVE_H
#define JSONSAVE_H

#include<QJsonDocument>
#include<QFile>
#include<QDate>
#include"user.h"


QJsonDocument loadJson(QString fileName) {
    QFile jsonFile(fileName);
    jsonFile.open(QFile::ReadOnly);
    return QJsonDocument().fromJson(jsonFile.readAll());
}

void saveJson(QJsonDocument document, QString fileName) {
    QFile jsonFile(fileName);
    jsonFile.open(QFile::WriteOnly);
    jsonFile.write(document.toJson());
}

User jsonToUser(QJsonDocument doc)
{
    QJsonObject o = doc.object();
    User u(o["uid"].toInt(), o["name"].toString(), QDate::fromString(o["birthday"].toString(), "dd.MM.yyyy"), o["gender"].toBool());

    return u;
}

#endif // JSONSAVE_H
