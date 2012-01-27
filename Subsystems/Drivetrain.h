#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"


//oh god please work
/**
 *
 *
 * @author Administrator
 */
class Drivetrain: public Subsystem {
private:
public:
	Drivetrain();
	void InitDefaultCommand();
	void tankDrive(double left, double right);
	RobotDrive *drive;
};

#endif
