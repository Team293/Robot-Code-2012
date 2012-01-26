#include "CommandBase.h"
#include "Commands/Scheduler.h"
#include "Subsystems/Drivetrain.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL

OI* CommandBase::oi = NULL;
Drivetrain* CommandBase::drivetrain = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	drivetrain = new Drivetrain();
	oi = new OI();
}
