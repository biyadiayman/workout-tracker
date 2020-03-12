#ifndef USER_H
#define USER_H

#include<string>
#include<QDate>

class User
{
private:
    int uid;
    std::string name;
    QDate birthday;
    bool gender;

public:
    User();
    User(int, std::string, QDate, bool);
};

#endif // USER_H
