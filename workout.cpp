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

}

Workout::Workout(int wid, QDate date):wid(wid), date(date)
{

}

QJsonObject Workout::toJson(){
    QJsonObject res;
    res.insert("wid", wid);
    res.insert("date", date.toString("dd.MM.yyyy"));
    res.insert("caloriesBurned", static_cast<double>(caloriesBurned));
    QJsonArray exos();
    /*foreach (Exercise x, exercises) {
        exos.insert(x.toJson());
    }*/
    res.insert("exercises", exos);
    return res;
}
