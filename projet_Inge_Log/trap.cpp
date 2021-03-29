#include "trap.h"

trap::trap()
{
    setCrossable(true);
    setEffect("Lose");
    setName("Trap");
    setAppearance("Black");
    setMinimum(0);
    setMaximum(20);
}
