#ifndef PASSER_H
#define PASSER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Administrator
 */
class Passer: public Subsystem {
public:
	Passer();
	void InitDefaultCommand();
	void StartPasserMotor();
	void StopPasserMotor();

private:
	SpeedController *leftmotor;
	SpeedController *rightmotor;
};

#endif
