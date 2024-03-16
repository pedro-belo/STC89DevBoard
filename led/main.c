#include "./defs.h"

D1(led0, 0xA0);
D1(led1, 0xA1);
D1(led2, 0xA2);
D1(led3, 0xA3);
D1(led4, 0xA4);
D1(led5, 0xA5);
D1(led6, 0xA6);
D1(led7, 0xA7);

void sleep(u16 i)
{
    while (i--)
    {
    };
}

void main()
{
    while (1)
    {
        for (u8 i = 0; i < 8; i++)
        {
            u8 v = 1 << i;

            led0 = 1;
            led1 = 1;
            led2 = 1;
            led3 = 1;
            led4 = 1;
            led5 = 1;
            led6 = 1;
            led7 = 1;
            sleep(50000);

            led0 = !(v & 1);
            led1 = !(v & 2);
            led2 = !(v & 4);
            led3 = !(v & 8);
            led4 = !(v & 16);
            led5 = !(v & 32);
            led6 = !(v & 64);
            led7 = !(v & 128);
            sleep(50000);
        }
    }
}
