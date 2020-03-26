#ifndef WORKOUT_H
#define WORKOUT_H

#include <QDate>
#include <QJsonObject>
#include <QJsonArray>

#include "exercise.h"

class Workout
{
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
    QJsonObject toJson();

    int getWid() const;
    void setWid(int value);
    QDate getDate() const;
    void setDate(const QDate &value);
    QVector<Exercise> getExercises() const;
    void setExercises(const QVector<Exercise> &value);
};

#endif // WORKOUT_H
