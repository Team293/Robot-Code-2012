#include "PasserStop.h"

// Drive Code works!
// 2/31/12 E.T.

PasserStop::PasserStop() {
	Requires(passer);
}

// Called just before this Command runs the first time
void PasserStop::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void PasserStop::Execute() {
	passer->PasserMotorStop();
}

// Make this return true when this Command no longer needs to run execute()
bool PasserStop::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void PasserStop::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PasserStop::Interrupted() {
}
