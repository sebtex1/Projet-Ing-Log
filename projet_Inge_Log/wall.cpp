#include "wall.h"

wall::wall()
{
    setCrossable(false);
    setName("Wall");
    setAppearance("Red");
    setMinimum(5);
    setMaximum(100);
}
