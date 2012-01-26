#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
#include "Commands/JoystickDrive.h"

class CommandBasedRobot : public IterativeRobot {
private:
	Command *DriveCommand;
	
	virtual void RobotInit() {
		CommandBase::init();
	}
	
	virtual void AutonomousInit() {
	}
	
	virtual void AutonomousPeriodic() {
	}
	
	virtual void TeleopInit() {
	}
	
	virtual void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
	}
};

START_ROBOT_CLASS(CommandBasedRobot);

