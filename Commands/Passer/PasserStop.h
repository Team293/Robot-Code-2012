#ifndef PASSERSTOP_H
#define PASSERSTOP_H

// Drive Code works!
// 2/31/12 E.T.

#include "../../CommandBase.h"

/**
 *
 *
 * @author Administrator
 */
class PasserStop : public CommandBase {
public:
	PasserStop();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
