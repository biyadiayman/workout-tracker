#ifndef JSONSAVE_H
#define JSONSAVE_H

#include<QJsonDocument>
#include<QFile>
#include<QDate>

#include"user.h"
#include"workout.h"
#include"exercise.h"
#include"bodypart.h"
#include"yoga.h"
#include"position.h"
#include"walking.h"
#include"bodybuilding.h"
#include"runing.h"
#include"movement.h"
#include"weightloss.h"
#include"characteristic.h"
#include"buildmuscle.h"
#include"stressrelief.h"


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

Characteristic jsonToCharacteristic(QJsonObject o){
    return Characteristic(o["cid"].toInt(), o["height"].toInt(), o["weight"].toDouble(), QDate::fromString(o["date"].toString(), "dd.MM.yyyy"));
}

Goal jsonToGoal(QJsonObject o){
    Goal g(o["gid"].toInt(), QDate::fromString(o["deadline"].toString(), "dd.MM.yyyy"), o["motivation"].toString());

    if (o["targetWeight"] != QJsonValue::Null) {//WeightLoss
        return WeightLoss(g.getGid(), g.getDeadline(), g.getMotivation(), o["targetWeight"].toDouble());
    } else if (o["freeTime"] != QJsonValue::Null) {//StressRelief
        return StressRelief(g.getGid(), g.getDeadline(), g.getMotivation(), o["freeTime"].toDouble());
    } else if (o["bodyPart"] != QJsonValue::Null) {//BuildMuscle
        return BuildMuscle(g.getGid(), g.getDeadline(), g.getMotivation(), static_cast<BodyPart>(o["bodyPart"].toInt()));
    }else {
        return g;
    }
}

Exercise jsonToExercise(QJsonObject o)
{
    Exercise x(o["eid"].toInt(), static_cast<BodyPart>(o["bodyPart"].toInt()), o["caloriesBurned"].toDouble());
    if (o["pose"] != QJsonValue::Null) { //YOGA
        return Yoga(x.getEid(), x.getBodyPart(), x.getCaloriesBurned(), static_cast<Position>(o["pose"].toInt()), o["duration"].toDouble());
    } else if (o["steps"] != QJsonValue::Null) { //WALKING
        return Walking(x.getEid(), x.getBodyPart(), x.getCaloriesBurned(), o["steps"].toDouble());
    } else if (o["distance"] != QJsonValue::Null) { //RUNNING
        return Runing(x.getEid(), x.getBodyPart(), x.getCaloriesBurned(), o["distance"].toDouble(), o["duration"].toDouble());
    } else if (o["sets"] != QJsonValue::Null) { //BODYBUILDING
        return Bodybuilding(x.getEid(), x.getBodyPart(), x.getCaloriesBurned(), static_cast<Movement>(o["move"].toInt()), o["sets"].toInt());
    } else {
        return x;
    }
}

Workout jsonToWorkout(QJsonObject o){
    Workout w(o["wid"].toInt(), QDate::fromString(o["date"].toString(), "dd.MM.yyyy"));
    QJsonArray exs = o["exercises"].toArray();
    foreach (QJsonValue x, exs) {
        w.addExercise(jsonToExercise(x.toObject()));
    }
    return w;
}

User jsonToUser(QJsonDocument doc)
{
    QJsonObject o = doc.object();
    User u(o["uid"].toInt(), o["name"].toString(), QDate::fromString(o["birthday"].toString(), "dd.MM.yyyy"), o["gender"].toBool());

    // Adding the workouts
    QJsonArray wos = o["workouts"].toArray();
    foreach (QJsonValue w, wos) {
        u.addWorkout(jsonToWorkout(w.toObject()));
    }
    // Adding the characteristics
    QJsonArray chs = o["characteristics"].toArray();
    foreach (QJsonValue c, chs) {
        u.addCharacteristic(jsonToCharacteristic(c.toObject()));
    }
    // Adding the goals
    QJsonArray gls = o["goals"].toArray();
    foreach (QJsonValue g, gls) {
        u.addGoal(jsonToGoal(g.toObject()));
    }

    return u;
}

#endif // JSONSAVE_H
