#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int Time_converter() {
    //Use 21:11 as the testing time
    char time[6] = "00:00";
    //Get the old time
    printf("Enter a 24-hour time: ");
    fgets(time, sizeof(time), stdin);
    //Normally would convert the char into actual integers, trying something...
    // for (int i = 0; i < 6; i++) {
    //     time[i] -= '0';
    // }
    printf("Testing: %s\n", time);
    if (time[0] == '1' && time[1] > '3') {
        time[0] = '0';
        time[1] = time[1] - 2;
        printf("Equivalent 12-hour time: %s\n PM", time);
    }
    else if (time[0] == '2' && time[1] < '2') {
        time[0] = '0';
        if (time[1] == '0') {
            time[1] = '8';
        }
        else {
            time[1] = '9';
        }
        printf("Equivalent 12-hour time: %s\n PM", time);
    }
    else if (time[0] == '2' && time[1] >= '2') {
        time[0] = '1';
        time[1] = time[1] - 2;
        printf("Equivalent 12-hour time: %s\n PM", time);
    }
    else {
        printf("Equivalent 12-hour time: %s\n AM", time);
    }
}

int main() {
    Time_converter();
    return 0;
}
