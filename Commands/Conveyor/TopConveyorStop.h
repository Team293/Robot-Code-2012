#ifndef TOPCONVEYORSTOP_H
#define TOPCONVEYORSTOP_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author Administrator
 */
class TopConveyorStop: public CommandBase {
public:
	TopConveyorStop();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
