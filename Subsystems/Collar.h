#ifndef COLLAR_H
#define COLLAR_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Administrator
 */
class Collar: public PIDSubsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	// set the P, I, and D constants here
	static const double Kp = 0.0;
	static const double Ki = 0.0;
	static const double Kd = 0.0;
public:
	Collar();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
};

#endif
