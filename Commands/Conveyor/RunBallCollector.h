#ifndef RUNBALLCOLLECTOR_H
#define RUNBALLCOLLECTOR_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author Administrator
 */
class RunBallCollector: public CommandBase {
public:
	RunBallCollector();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
