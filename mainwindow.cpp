#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "testclass.h"

#include"user.h"
#include"workout.h"
#include"exercise.h"
#include"bodypart.h"
#include"yoga.h"
#include"position.h"
#include"walking.h"
#include"bodybuilding.h"
#include"runing.h"
#include"movement.h"
#include"weightloss.h"
#include"characteristic.h"
#include"buildmuscle.h"
#include"stressrelief.h"

#include"jsonsave.h"

/*#include<QJsonDocument>
#include<QFile>

QJsonDocument loadJson(QString fileName) {
    QFile jsonFile(fileName);
    jsonFile.open(QFile::ReadOnly);
    return QJsonDocument().fromJson(jsonFile.readAll());
}

void saveJson(QJsonDocument document, QString fileName) {
    QFile jsonFile(fileName);
    jsonFile.open(QFile::WriteOnly);
    jsonFile.write(document.toJson());
}*/

void testInit(){

    User me(1, "Sherlock", QDate(1998, 2, 4), 1);

    Yoga yo1(1, BodyPart::Arms, 50.0, Position::Catcow, 60.0);
    Yoga yo2(2, BodyPart::Chest, 60.0, Position::DownwardDog, 120.0);
    Walking wlk1(3, BodyPart::FullBody, 80.0, 9000);
    Runing run1(4, BodyPart::LowerBody, 200.0, 50.0, 70.0);
    Bodybuilding bld1(5, BodyPart::UpperBody, 60.0, Movement::Pushup, 4);

    qDebug() << yo1.toJson();
    qDebug() << static_cast<int>(wlk1.getBodyPart());


    Workout wo1(1, QDate(2020,2,20));

    /*QVector<Exercise> exs;
    exs.append(yo1);
    exs.append(yo2);
    exs.append(wlk1);
    exs.append(run1);
    exs.append(bld1);
    exs.append(wo1.getExercises());
    wo1.setExercises(exs);*/

    wo1.addExercise(yo1);
    wo1.addExercise(yo2);
    wo1.addExercise(wlk1);
    wo1.addExercise(bld1);
    wo1.addExercise(run1);

    qDebug() << wo1.toJson();

    Characteristic c1(1, 184, 80.0, QDate(2020, 1, 10));
    Characteristic c2(1, 184, 83.0, QDate(2020, 1, 20));

    WeightLoss wl(1, QDate(2020, 6, 1), "Summer Body", 70.0);
    BuildMuscle bm(1, QDate(2020, 5, 1), "Greek God Physique", BodyPart::FullBody);
    StressRelief sr(1, QDate(2020, 12, 1), "Zen Mind", 10.0);

    me.addGoal(wl);
    me.addGoal(bm);
    me.addGoal(sr);
    me.addCharacteristic(c1);
    me.addCharacteristic(c2);
    me.addWorkout(wo1);

    qDebug() << me.toJson();

    saveJson(QJsonDocument(me.toJson()), "user.json");
    //qDebug() << "LOAD||||" << loadJson("user.json").object()["name"].toString();
    qDebug() << "LOAD||||" << jsonToUser(loadJson("user.json")).toJson();
    //qDebug() << "MAGISCH | " << loadJson("user.json").object()["workouts"].toArray()[0].toObject()["exercises"].toArray()[2].toObject()["pose"];

}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    testInit();
    //testClass();
}


MainWindow::~MainWindow()
{
    delete ui;
}
