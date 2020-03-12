#ifndef BODYBUILDING_H
#define BODYBUILDING_H

#include "exercise.h"
#include "movement.h"

class Bodybuilding : Exercise
{
private:
    Movement move;
    int sets;
public:
    Bodybuilding();
};

#endif // BODYBUILDING_H
