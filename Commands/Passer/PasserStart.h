#ifndef PASSERSTART_H
#define PASSERSTART_H

#include "../../CommandBase.h"

// Drive Code works!
// 2/31/12 E.T.



/**
 *
 *
 * @author Administrator
 */
class PasserStart : public CommandBase {
public:
	PasserStart();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
