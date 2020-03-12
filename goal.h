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
};

#endif // GOAL_H
