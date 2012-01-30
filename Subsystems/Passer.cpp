#include "Passer.h"
#include "../Robotmap.h"
#include "../Commands/StopPasser.h"

// Does not work yet 
// 1/30/12 I.G.

Passer::Passer() : Subsystem("Passer") {
	leftmotor = new Jaguar(LEFT_PASSER_MOTOR);
	rightmotor = new Jaguar(RIGHT_PASSER_MOTOR);
}
    
void Passer::InitDefaultCommand() {
	SetDefaultCommand(new StopPasser());
}

void Passer::StartPasserMotor() {
	leftmotor->Set(0.1);
	rightmotor->Set(-0.1);
}

void Passer::StopPasserMotor() {
	leftmotor->Set(0.0);
	rightmotor->Set(0.0);
}
