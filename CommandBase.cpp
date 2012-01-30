#include "CommandBase.h"
#include "Commands/Scheduler.h"

#include "Subsystems/Collar.h"
#include "Subsystems/Collector.h"
#include "Subsystems/Drivetrain.h"
#include "Subsystems/Passer.h"
#include "Subsystems/Puncher.h"
#include "Subsystems/Turret.h"
#include "Subsystems/Vision.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL

OI* CommandBase::oi = NULL;

Collar* CommandBase::collar = NULL;
Collector* CommandBase::collector = NULL;
Drivetrain* CommandBase::drivetrain = NULL;
Passer* CommandBase::passer = NULL;
Puncher* CommandBase::puncher = NULL;
Turret* CommandBase::turret = NULL;
Vision * CommandBase::vision = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	oi = new OI();
	
	collar = new Collar();
	collector = new Collector();
	drivetrain = new Drivetrain();
	passer = new Passer();
	puncher = new Puncher();
	turret = new Turret();
	vision = new Vision();
}
