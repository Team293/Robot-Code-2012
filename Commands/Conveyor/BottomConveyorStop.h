#ifndef BOTTOMCONVEYORSTOP_H
#define BOTTOMCONVEYORSTOP_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author Administrator
 */
class BottomConveyorStop: public CommandBase {
public:
	BottomConveyorStop();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
