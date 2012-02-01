#include "BottomConveyorStop.h"

BottomConveyorStop::BottomConveyorStop() {
	Requires(conveyor);
}

// Called just before this Command runs the first time
void BottomConveyorStop::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void BottomConveyorStop::Execute() {
	conveyor->BottomConveyorMotorStop();
}

// Make this return true when this Command no longer needs to run execute()
bool BottomConveyorStop::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void BottomConveyorStop::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BottomConveyorStop::Interrupted() {
}
