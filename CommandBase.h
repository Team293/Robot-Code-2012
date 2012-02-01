#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H


#include "Commands/Command.h"
#include "OI.h"

#include "Subsystems/Collar.h"
#include "Subsystems/Conveyor.h"
#include "Subsystems/Drivetrain.h"
#include "Subsystems/Passer.h"
#include "Subsystems/Puncher.h"
#include "Subsystems/Turret.h"
#include "Subsystems/Vision.h"



/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static OI *oi;
	static Collar *collar;
	static Conveyor *conveyor;
	static Drivetrain *drivetrain;
	static Passer *passer;
	static Puncher *puncher;
	static Turret *turret;
	static Vision *vision;
	
};

#endif
