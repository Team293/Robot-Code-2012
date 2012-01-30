#include "StartPasser.h"

StartPasser::StartPasser() {
	Requires(passer);
}

// Called just before this Command runs the first time
void StartPasser::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void StartPasser::Execute() {
	passer->StartPasserMotor();
}

// Make this return true when this Command no longer needs to run execute()
bool StartPasser::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void StartPasser::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StartPasser::Interrupted() {
}
