#include <stdio.h>

int main(void) {
    char input[100]; // sp00ky{N0t_4Lway5_s7RinG5}
    char dict[21] = "aGikLnNpRsStwy0457{}_";
    printf("Enter your password: ");
    scanf("%s", &input);
    if((input[0] == dict[9]) && // s
    (input[1] == dict[7]) && // p
    (input[2] == dict[14]) && // 0
    (input[3] == dict[14]) && // 0
    (input[4] == dict[3]) && // k
    (input[5] == dict[13]) && // y
    (input[6] == dict[18]) && //{
    (input[7] == dict[6]) && // N
    (input[8] == dict[14]) && // 0
    (input[9] == dict[11]) && // t
    (input[10] == dict[20]) && // _
    (input[11] == dict[15]) && // 4
    (input[12] == dict[4]) && // L
    (input[13] == dict[12]) && // w
    (input[14] == dict[0]) && // a
    (input[15] == dict[13]) && // y
    (input[16] == dict[16]) && // 5
    (input[17] == dict[20]) && // _
    (input[18] == dict[9]) && // s
    (input[19] == dict[17]) && // 7
    (input[20] == dict[8]) && // R
    (input[21] == dict[2]) && // i
    (input[22] == dict[5]) && // n
    (input[23] == dict[1]) && // G
    (input[24] == dict[16]) && // 5
    (input[25] == dict[19])) { // }
        printf("Correct!\n");
    } else {
        printf("Not quite...\n");
    }
    return 0;
}