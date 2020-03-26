#include "user.h"

int User::getUid() const
{
    return uid;
}

void User::setUid(int value)
{
    uid = value;
}

std::string User::getName() const
{
    return name;
}

void User::setName(const std::string &value)
{
    name = value;
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

User::User()
{

}

User::User(int uid, std::string name, QDate birthday, bool gender):uid(uid),name(name),birthday(birthday),gender(gender)
{
    qDebug() << "uid: " << this->uid << "name: " << QString::fromStdString(this->name) << "birthday: " << this->birthday << "gender: " << this->gender;
}
