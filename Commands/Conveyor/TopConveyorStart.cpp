#include "TopConveyorStart.h"

TopConveyorStart::TopConveyorStart() {
	Requires(conveyor);
}

// Called just before this Command runs the first time
void TopConveyorStart::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void TopConveyorStart::Execute() {
	conveyor->TopConveyorMotorStart();
}

// Make this return true when this Command no longer needs to run execute()
bool TopConveyorStart::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TopConveyorStart::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TopConveyorStart::Interrupted() {
}
