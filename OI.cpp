#include "OI.h"
#include "Robotmap.h"

OI::OI() {
	// Process operator interface input here.
	lstick = new Joystick(LEFT_JOYSTICK_PORT);
	rstick = new Joystick(RIGHT_JOYSTICK_PORT);
	
}

double OI::getLeftJoystick() {
	return lstick->GetY();
}

double OI::getRightJoystick() {
	return rstick->GetY();
}
