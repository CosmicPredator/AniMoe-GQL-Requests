#include <stdio.h>

#define NUM_BITS 4


int main()
{
    int counter[NUM_BITS] = {0};
    int i;

    while (1) {
        for (i = NUM_BITS - 1; i >= 0; i--)
            printf("%d", counter[i]);
        printf("\n");
        for (i = 0; i < NUM_BITS; i++) {
            if (counter[i] == 0) {
                counter[i] = 1;
                break;
            }
            else {
                counter[i] = 0;
            }
        }
    }
    return 0;
}