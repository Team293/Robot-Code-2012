#ifndef ROBOTMAP_H
#define ROBOTMAP_H

//
static const int LEFT_JOYSTICK_PORT = 1;
static const int RIGHT_JOYSTICK_PORT = 2;


static const int LEFT_DRIVE = 2;
static const int RIGHT_DRIVE = 3; 
/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// #define LEFTMOTOR 1
// #define RIGHTMOTOR 2

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// #define RANGE_FINDER_PORT 1
// #define RANGE_FINDER_MODULE 1

#endif
