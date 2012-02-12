#ifndef PUNCHER_H
#define PUNCHER_H
#include "WPILib.h"
#include "Optical.h"

class Puncher {
private:
	Jaguar *punchermotor;
	
	Optical *punchersensor;
	
	int	PuncherState;
	
public:
	Puncher();
	void PuncherMotorStart();
	void PuncherMotorStop();
	void PuncherRun(bool start_puncher);

};

#endif
 
