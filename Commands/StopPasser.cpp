#include "StopPasser.h"

StopPasser::StopPasser() {
	Requires(passer);
}

// Called just before this Command runs the first time
void StopPasser::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void StopPasser::Execute() {
	passer->StopPasserMotor();
}

// Make this return true when this Command no longer needs to run execute()
bool StopPasser::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void StopPasser::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StopPasser::Interrupted() {
}
