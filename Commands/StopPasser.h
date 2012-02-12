#ifndef STOP_PASSER_H
#define STOP_PASSER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Administrator
 */
class StopPasser : public CommandBase {
public:
	StopPasser();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
