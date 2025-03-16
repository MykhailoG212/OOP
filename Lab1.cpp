#include "Lab1.h"
#include <iostream>
#include <cmath>
#include <string>

void Add(cina& cina1, int grn, int kop)
{
    cina1.grn += grn;
    cina1.kop += kop;

    cina1.grn += cina1.kop / 100;
    cina1.kop %= 100;
}

void zaokryh(cina& cina1)
{
    int vsikop = cina1.kop + cina1.grn*100;

    if (int ostacha = vsikop % 10; ostacha < 5)
    {
        vsikop -= ostacha;
    }
    else
    {
        vsikop += (10 - ostacha);
    }
    cina1.grn = vsikop / 100;
    cina1.kop = vsikop % 100;
}