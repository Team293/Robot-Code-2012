#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
#include "Commands/DriveTrain/JoystickDrive.h"
#include "Commands/Passer/PasserStart.h"
#include "Commands/Passer/PasserStop.h"
class CommandBasedRobot : public IterativeRobot {
private:
	
	virtual void RobotInit() {
		CommandBase::init();
		SmartDashboard *sd = SmartDashboard::GetInstance();
		sd->PutData(Scheduler::GetInstance());
		
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

