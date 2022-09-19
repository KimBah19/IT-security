#include <stdio.h>

int main()
{
    // break avbryter en loop
    // continue hoppar över resten av loopen och går till nästa iteration
    
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}