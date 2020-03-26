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

Bodybuilding::Bodybuilding(int eid, BodyPart bodyPart, float caloriesBurned, Movement move, int sets)
    :Exercise(eid, bodyPart, caloriesBurned), move(move), sets(sets)
{

}

QJsonObject Bodybuilding::toJson(){

    QJsonObject res;
    res.insert("eid", getEid());
    res.insert("bodyPart", static_cast<int>(getBodyPart()));
    res.insert("caloriesBurned", getCaloriesBurned());
    res.insert("move", static_cast<int>(move));
    res.insert("sets", sets);
    return res;
}
