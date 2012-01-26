#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	
	Joystick *lstick;
	Joystick *rstick;

public:
	OI();
	double getLeftJoystick();
	double getRightJoystick();
};

#endif
