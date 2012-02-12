#include "RunBallCollector.h"

RunBallCollector::RunBallCollector() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(conveyor);
}

// Called just before this Command runs the first time
void RunBallCollector::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RunBallCollector::Execute() {
	conveyor->ConveyorStateMachine();
}

// Make this return true when this Command no longer needs to run execute()
bool RunBallCollector::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RunBallCollector::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RunBallCollector::Interrupted() {
}
