#include <stdio.h>
int main()
{
    /**
    this program prints out the fibonacci sequence
    upto 1000.
    **/

    int first = 0, second = 1, next;

    printf("%d ", first);
    printf("%d ", second);

    next = first + second;
    while(next < 1000)
    {
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }
    return 0;
}
