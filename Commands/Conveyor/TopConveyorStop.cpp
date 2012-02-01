#include "TopConveyorStop.h"

TopConveyorStop::TopConveyorStop() {
	Requires(conveyor);
}

// Called just before this Command runs the first time
void TopConveyorStop::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void TopConveyorStop::Execute() {
	conveyor->TopConveyorMotorStop();
}

// Make this return true when this Command no longer needs to run execute()
bool TopConveyorStop::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TopConveyorStop::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TopConveyorStop::Interrupted() {
}
