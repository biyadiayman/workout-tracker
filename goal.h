#ifndef GOAL_H
#define GOAL_H

#include<QDate>
#include<string>

class Goal
{
private:
    QDate deadline;
    std::string motivation;

public:
    Goal();
    Goal(QDate, std::string);
    QDate getDeadline() const;
    void setDeadline(const QDate &value);
    std::string getMotivation() const;
    void setMotivation(const std::string &value);
};

#endif // GOAL_H
