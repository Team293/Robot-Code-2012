#ifndef ROBOTMAP_H
#define ROBOTMAP_H

//Joysticks
static const int LEFT_JOYSTICK_PORT = 1;
static const int RIGHT_JOYSTICK_PORT = 2;


//PWMs
static const int LEFT_DRIVE = 1;
static const int RIGHT_DRIVE = 2; 

static const int LEFT_PASSER_MOTOR = 3;
static const int RIGHT_PASSER_MOTOR = 4;

static const int TOP_CONVEYOR_MOTOR = 5;
static const int BOTTOM_CONVEYOR_MOTOR = 6;

//DIOs
static const int BOTTOM_SENSOR = 1;
static const int TOP_SENSOR = 2;
static const int SHOOTER_SENSOR = 3;

//Conveyor constants
static const int MAX_BALLS = 3;

static const int BOTTOM_CONVEYOR_EMPTY_STATE = 0;
static const int BOTTOM_CONVEYOR_FULL_STATE = 1;

static const int TOP_CONVEYOR_EMPTY_STATE = 0;
static const int TOP_CONVEYOR_FULL_STATE = 1;

static const int SHOOTER_EMPTY_STATE = 0;
static const int SHOOTER_FULL_STATE = 1;

#endif
