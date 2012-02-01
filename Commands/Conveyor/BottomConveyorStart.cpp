#include "BottomConveyorStart.h"

BottomConveyorStart::BottomConveyorStart() {
	Requires(conveyor);
}

// Called just before this Command runs the first time
void BottomConveyorStart::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void BottomConveyorStart::Execute() {
	conveyor->BottomConveyorMotorStart();
}

// Make this return true when this Command no longer needs to run execute()
bool BottomConveyorStart::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void BottomConveyorStart::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BottomConveyorStart::Interrupted() {
}
