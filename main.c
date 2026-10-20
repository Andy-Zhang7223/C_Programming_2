#include <stdio.h>

int EAN_decoder() {
    char EAN[13] = "000000000000";
    //Use 869148426000 as the test EAN
    int first_sum = 0;
    int second_sum = 0;
    int final_number = 0;
    printf("Enter EAN: ");
    fgets(EAN, sizeof(EAN), stdin);
    //Converts the integers that are treated like characters into real integers
    for (int i = 0; i < sizeof(EAN); i++) {
        EAN[i] -= '0';
    }
    //gets first sum
    first_sum = EAN[1] + EAN[3] + EAN[5] + EAN[7] + EAN[9] + EAN[11];
    //gets second sum
    second_sum = EAN[0] + EAN[2] + EAN[4] + EAN[6] + EAN[8] + EAN[10];
    //Multiply first sum by 3, then add to second sum
    final_number = 3*first_sum + second_sum;
    //decrement the final number
    --final_number;
    //Modulo by 10
    final_number = final_number % 10;
    //Subtract by 9
    final_number -= 9;
    //Convert to positive number if necessary
    if (final_number < 0) {
        final_number = -final_number;
    };
    printf("Final number: %d\n", final_number);
}

int main(void) {
    EAN_decoder();
    return 0;
}
