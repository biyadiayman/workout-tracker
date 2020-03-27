#ifndef WORKOUT_H
#define WORKOUT_H

#include <QDate>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>

#include "exercise.h"

class Workout : public QObject
{
    Q_OBJECT
private:
    int wid;
    QDate date;
    float caloriesBurned;
    QVector<Exercise> exercises;

public:
    Workout();
    Workout(int, QDate);
    void setCaloriesBurned(); // sum of each exercise's calories
    float getCaloriesBurned();
    void addExercise(Exercise);
    QJsonObject toJson();

    int getWid() const;
    void setWid(int value);
    QDate getDate() const;
    void setDate(const QDate &value);
    QVector<Exercise> getExercises() const;
    void setExercises(const QVector<Exercise> &value);
    QString toSting();
};

#endif // WORKOUT_H
