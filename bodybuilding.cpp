#include "bodybuilding.h"

Movement Bodybuilding::getMove() const
{
    return move;
}

void Bodybuilding::setMove(const Movement &value)
{
    move = value;
}

int Bodybuilding::getSets() const
{
    return sets;
}

void Bodybuilding::setSets(int value)
{
    sets = value;
}

Bodybuilding::Bodybuilding()
{
    
}
