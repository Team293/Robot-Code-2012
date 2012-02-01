#ifndef JOYSTICKDRIVE_H
#define JOYSTICKDRIVE_H

#include "../../CommandBase.h"

// Does not work yet 
// 1/30/12 I.G.



/**
 *
 *
 * @author Administrator
 */
class JoystickDrive: public CommandBase {
public:
	JoystickDrive();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
