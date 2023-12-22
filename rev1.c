#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int r = rand();
    int input;
    printf("Select a number: ");
    scanf("%d", &input);
    if(input == r) {
        printf("sp00ky{h1DdeN_5TriNgs}\n");
    } else {
        printf("Not quite...\n");
    }
    return 0;
}