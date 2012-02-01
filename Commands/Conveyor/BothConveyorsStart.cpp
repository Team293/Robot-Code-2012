#include "BothConveyorsStart.h"

#include "TopConveyorStart.h"
#include "TopConveyorStop.h"
#include "BottomConveyorStart.h"
#include "BottomConveyorStop.h"

BothConveyorsStart::BothConveyorsStart() {
		AddParallel(new TopConveyorStart());
		AddParallel(new BottomConveyorStart());

        
}
