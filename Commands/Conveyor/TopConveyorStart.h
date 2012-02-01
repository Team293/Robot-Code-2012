#ifndef TOPCONVEYORSTART_H
#define TOPCONVEYORSTART_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author Administrator
 */
class TopConveyorStart: public CommandBase {
public:
	TopConveyorStart();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
