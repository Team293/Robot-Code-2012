#ifndef PASSER_H
#define PASSER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

// Does not work yet 
// 1/30/12 I.G.

class Passer: public Subsystem {
public:
	Passer();
	void InitDefaultCommand();
	void PasserMotorStart();
	void PasserMotorStop();

private:
	SpeedController *leftmotor;
	SpeedController *rightmotor;
};

#endif
