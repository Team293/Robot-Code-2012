#ifndef PUNCHER_H
#define PUNCHER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Administrator
 */
class Puncher: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Puncher();
	void InitDefaultCommand();
};

#endif
