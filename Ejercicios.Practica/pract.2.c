#include <stdio.h>
#include <stdlib.h>

int main()
{


int i = 0;
while (i <= 100)
{
    if (i <= 9)
    {
        i = 10;
    }
    printf( "%i", i );
    i = i+10;
}


}
