#ifndef COLLECTOR_H
#define COLLECTOR_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Administrator
 */
class Collector: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Collector();
	void InitDefaultCommand();
};

#endif
