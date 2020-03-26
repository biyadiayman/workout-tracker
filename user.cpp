#include "user.h"

int User::getUid() const
{
    return uid;
}

void User::setUid(int value)
{
    uid = value;
}

QDate User::getBirthday() const
{
    return birthday;
}

void User::setBirthday(const QDate &value)
{
    birthday = value;
}

bool User::getGender() const
{
    return gender;
}

void User::setGender(bool value)
{
    gender = value;
}

QVector<Workout> User::getWorkouts() const
{
    return workouts;
}

void User::setWorkouts(const QVector<Workout> &value)
{
    workouts = value;
}

QVector<Goal> User::getGoals() const
{
    return goals;
}

void User::setGoals(const QVector<Goal> &value)
{
    goals = value;
}

QVector<Characteristic> User::getCharacteristics() const
{
    return characteristics;
}

void User::setCharacteristics(const QVector<Characteristic> &value)
{
    characteristics = value;
}

QJsonObject User::toJson()
{
    QJsonObject res;
    res.insert("uid", uid);
    res.insert("name", name);
    res.insert("birthday", birthday.toString("dd.MM.yyyy"));
    res.insert("gender", gender);

    QJsonArray gls;// Goals
    foreach (Goal g, goals) {
        gls.append(g.getJo());
    }
    res.insert("goals", gls);

    QJsonArray chs; //Characteristics
    foreach (Characteristic c, characteristics) {
        chs.append(c.toJson());
    }
    res.insert("characteristics", chs);

    QJsonArray wos;//Workouts
    foreach (Workout w, workouts) {
        wos.append(w.toJson());
    }
    res.insert("workouts", wos);


    return res;
}

QString User::getName() const
{
    return name;
}

void User::setName(const QString &value)
{
    name = value;
}

void User::addWorkout(Workout w)
{
    workouts.append(w);
}

void User::addCharacteristic(Characteristic c)
{
    characteristics.append(c);
}

void User::addGoal(Goal g)
{
    goals.append(g);
}

User::User()
{

}

User::User(int uid, QString name, QDate birthday, bool gender):uid(uid),name(name),birthday(birthday),gender(gender)
{
    qDebug() << "uid: " << this->uid << "name: " << this->name << "birthday: " << this->birthday << "gender: " << this->gender;
}
