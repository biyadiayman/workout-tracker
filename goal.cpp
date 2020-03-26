#include "goal.h"

QDate Goal::getDeadline() const
{
    return deadline;
}

void Goal::setDeadline(const QDate &value)
{
    deadline = value;
}

std::string Goal::getMotivation() const
{
    return motivation;
}

void Goal::setMotivation(const std::string &value)
{
    motivation = value;
}

Goal::Goal()
{
    
}
