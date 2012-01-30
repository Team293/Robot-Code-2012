#ifndef START_PASSER_H
#define START_PASSER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Administrator
 */
class StartPasser : public CommandBase {
public:
	StartPasser();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
