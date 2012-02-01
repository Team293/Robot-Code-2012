#ifndef BOTTOMCONVEYORSTART_H
#define BOTTOMCONVEYORSTART_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author Administrator
 */
class BottomConveyorStart: public CommandBase {
public:
	BottomConveyorStart();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
