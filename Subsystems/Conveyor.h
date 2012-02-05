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
	void BothMotorsStop();
	void TopConveyorMotorStart();
	void TopConveyorMotorStop();
	void BottomConveyorMotorStart();
	void BottomConveyorMotorStop();
	void ConveyorStateMachine();

	SpeedController *topmotor;
	SpeedController *bottommotor;
	
	DigitalInput *bottomsensor;
	DigitalInput *topsensor;
	DigitalInput *shootersensor;
	
	int ballcount;
	
	bool shooterState;
	bool topState;
	bool bottomState;
};

#endif
