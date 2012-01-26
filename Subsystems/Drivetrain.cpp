#include "Drivetrain.h"
#include "../Robotmap.h"
#include "../Commands/JoystickDrive.h"

Drivetrain::Drivetrain() : Subsystem("Drivetrain") {
	drive = new RobotDrive(LEFT_DRIVE,RIGHT_DRIVE); //2 for left port, 3 for right
}
    
void Drivetrain::InitDefaultCommand() {
	SetDefaultCommand(new JoystickDrive());
}

void Drivetrain::tankDrive(double left, double right){
	drive->TankDrive(left, right);
}

