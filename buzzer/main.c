#include "./defs.h"

D1(beep, 0x95);

void sleep(u16 i)
{
    while (i--)
    {
    };
}

void main()
{
    beep = 0;

    while (1)
    {
        for (u16 i = 0; i < 500; i++)
        {
            beep = !beep;
            sleep(70);
        }

        sleep(50000);
    }
}
