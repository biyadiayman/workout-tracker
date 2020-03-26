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

void testInit(){

    User me(1, "Sherlock", QDate(1998, 2, 4), 1);
    me.workouts.append(Workout());


    Yoga yo1(1, BodyPart::Arms, 50, Position::Catcow, 60);
    Yoga yo2(2, BodyPart::Chest, 60, Position::DownwardDog, 120);
    Walking wlk1(3, BodyPart::FullBody, 80, 9000);

    qDebug() << yo1.toJson();

    Workout wo1(1, QDate(2020,2,20));
    //wo1.setExercises(wo1.getExercises());
    qDebug() << wo1.toJson();


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
