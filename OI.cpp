#include "OI.h"
#include "Robotmap.h"

#include "Commands/DriveTrain/JoystickDrive.h"
#include "Commands/Passer/PasserStart.h"
#include "Commands/Passer/PasserStop.h"

OI::OI() {
	// Process operator interface input here.
	lstick = new Joystick(LEFT_JOYSTICK_PORT);
	rstick = new Joystick(RIGHT_JOYSTICK_PORT);
	
	startpasserbutton = new JoystickButton(lstick,3);	
	stoppasserbutton = new JoystickButton(lstick,2);
	
	startpasserbutton->WhenPressed(new PasserStart());
	stoppasserbutton->WhenPressed(new PasserStop());
}

double OI::getLeftJoystick() {
	return lstick->GetY();
}

double OI::getRightJoystick() {
	return rstick->GetY();
}
