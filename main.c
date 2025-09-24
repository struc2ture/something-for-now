#include <stdio.h>

#define SOMETHING if (1)
#define NOW (int i = 0; i < 100; i++) (void)0;

int main()
{
    SOMETHING for NOW
}
