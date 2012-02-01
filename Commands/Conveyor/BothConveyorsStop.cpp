#include "BothConveyorsStop.h"

#include "TopConveyorStart.h"
#include "TopConveyorStop.h"
#include "BottomConveyorStart.h"
#include "BottomConveyorStop.h"

BothConveyorsStop::BothConveyorsStop() {
	AddParallel(new TopConveyorStop());
	AddParallel(new BottomConveyorStop());
}
