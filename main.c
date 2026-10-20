#include <ctype.h>
#include <stdio.h>

int Grade_converter() {
    char number_grade[4] = "";
    printf("Enter Grade: ");
    scanf("%s", number_grade);
    for (int i = 0; i < 3; i++) {
        number_grade[i] -= '0';
    }
    //Checks if the grade is greater than 100
    if (number_grade[0] >= 1 && number_grade[1] > 0 || number_grade[0] >= 1 && number_grade[2] > 0) {
        printf("Invalid Grade");
    }
    //Checks if the grade is any of the integers are less than 0
    else if (number_grade[0] < 0 || number_grade[1] < 0 || number_grade[2] < 0) {
        printf("Invalid Grade");
    }
    //Checks for a 100-90
    else if (number_grade[0] == 1 || number_grade[1] == 9) {
        printf("Letter Grade: A");
    }
    //Checks for a 89-80
    else if (number_grade[1] == 8) {
        printf("Letter Grade: B");
    }
    //Checks for a 79-70
    else if (number_grade[1] == 7) {
        printf("Letter Grade: C");
    }
    //Checks for a 69-60
    else if (number_grade[1] == 6) {
        printf("Letter Grade: D");
    }
    //Checks for anything below a 60
    else if (number_grade[1] <= 5) {
        printf("Letter Grade: F");
    }
    else {
        printf("Invalid Grade");
    }
}

int main(void) {
    Grade_converter();
    return 0;
}
