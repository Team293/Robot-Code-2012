#include "Passer.h"
#include "../Robotmap.h"
#include "../Commands/Passer/PasserStop.h"
#include "../Commands/Passer/PasserStart.h"

// Does not work yet 
// 1/30/12 I.G.

Passer::Passer() : Subsystem("Passer") {
	leftmotor = new Jaguar(LEFT_PASSER_MOTOR);
	rightmotor = new Jaguar(RIGHT_PASSER_MOTOR);
}
    
void Passer::InitDefaultCommand() {
	SetDefaultCommand(new PasserStop());
}

void Passer::PasserMotorStart() {
	leftmotor->Set(0.1);
	rightmotor->Set(-0.1);
}

void Passer::PasserMotorStop() {
	leftmotor->Set(0.0);
	rightmotor->Set(0.0);
}
