#ifndef CONVEYOR_H
#define CONVEYOR_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Administrator
 */
class Conveyor: public Subsystem {
public:
	Conveyor();
	void InitDefaultCommand();
	void BothMotorsStart();
	void TopConveyorMotorStart();
	void TopConveyorMotorStop();
	void BottomConveyorMotorStart();
	void BottomConveyorMotorStop();
	
	SpeedController *topmotor;
	SpeedController *bottommotor;
};

#endif
