#include    <unistd.h>
#include    <stdio.h>

int main()
    {
        char i;
        char j;
        char z;

        i = 23;
        j = 28;
        z = i + j;
        write(1, &z, 1);
        printf("%c\n",z);
        return (0);
    }