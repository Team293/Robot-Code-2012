#include "PasserStart.h"

PasserStart::PasserStart() {
	Requires(passer);
}

// Called just before this Command runs the first time
void PasserStart::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void PasserStart::Execute() {
	passer->PasserMotorStart();
}

// Make this return true when this Command no longer needs to run execute()
bool PasserStart::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void PasserStart::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PasserStart::Interrupted() {
}
