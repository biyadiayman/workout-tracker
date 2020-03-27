#include "workout.h"

int Workout::getWid() const
{
    return wid;
}

void Workout::setWid(int value)
{
    wid = value;
}

QDate Workout::getDate() const
{
    return date;
}

void Workout::setDate(const QDate &value)
{
    date = value;
}

QVector<Exercise> Workout::getExercises() const
{
    return exercises;
}

void Workout::setExercises(const QVector<Exercise> &value)
{
    exercises = value;
}

Workout::Workout()
{
    caloriesBurned = 0.0;
}

Workout::Workout(int wid, QDate date):wid(wid), date(date)
{
    caloriesBurned = 0.0;
}

void Workout::setCaloriesBurned()
{
    caloriesBurned = 0.0;
    foreach (Exercise x, exercises) {
        caloriesBurned += x.getCaloriesBurned();
    }
}

float Workout::getCaloriesBurned()
{
    setCaloriesBurned();
    return caloriesBurned;
}

void Workout::addExercise(Exercise x)
{
    exercises.append(x);
    setCaloriesBurned();
}

QJsonObject Workout::toJson(){
    QJsonObject res;
    res.insert("wid", wid);
    res.insert("date", date.toString("dd.MM.yyyy"));
    res.insert("caloriesBurned", caloriesBurned);
    QJsonArray exos;
    foreach (Exercise x, exercises) {
        exos.append(x.getJo());
    }
    res.insert("exercises", exos);
    return res;
}

QString Workout::toSting(){
    return "wid";
}
