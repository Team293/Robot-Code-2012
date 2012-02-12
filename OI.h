#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	
	Joystick *lstick;
	Joystick *rstick;
	
	Button * startpasserbutton;
	Button * stoppasserbutton;
	
public:
	OI();
	double getLeftJoystick();
	double getRightJoystick();
};

#endif
