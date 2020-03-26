#ifndef BODYBUILDING_H
#define BODYBUILDING_H

#include "exercise.h"
#include "movement.h"

class Bodybuilding : public Exercise
{
private:
    Movement move;
    int sets;
public:
    Bodybuilding();
    Movement getMove() const;
    void setMove(const Movement &value);
    int getSets() const;
    void setSets(int value);
};

#endif // BODYBUILDING_H
