#include "Conveyor.h"
#include "../Robotmap.h"
#include "../Commands/Conveyor/BothConveyorsStop.h"

Conveyor::Conveyor() : Subsystem("Conveyor") {
	topmotor = new Jaguar(TOP_CONVEYOR_MOTOR);
	bottommotor = new Jaguar(BOTTOM_CONVEYOR_MOTOR);
}
    
void Conveyor::InitDefaultCommand() {
	SetDefaultCommand(new BothConveyorsStop());
}

void Conveyor::BothMotorsStart() {
	topmotor->Set(0.5);
	bottommotor->Set(0.5);
}
void Conveyor::TopConveyorMotorStart() {
	topmotor->Set(0.5);
}

void Conveyor::TopConveyorMotorStop() {
	topmotor->Set(0.0);
}

void Conveyor::BottomConveyorMotorStart() {
	bottommotor->Set(0.5);
}

void Conveyor::BottomConveyorMotorStop() {
	bottommotor->Set(0.0);
}

