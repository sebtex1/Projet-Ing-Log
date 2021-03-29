#include "mud.h"

mud::mud()
{
    setCrossable(true);
    setEffect("Wait");
    setName("Mud");
    setAppearance("Brown");
    setMinimum(2);
    setMaximum(30);
}
