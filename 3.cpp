#include <stdio.h>

int main() {
    int grade = 85; 

    switch (grade) { //Vi ändrar bara ordningen på switch cases, ibland är det så lätt
        case 60 ... 69:
            printf("D\n");
            break;
        case 70 ... 79:
            printf("C\n");
            break;
        case 80 ... 89:
            printf("B\n");
            break;
        case 90 ... 100:
            printf("A\n");
            break;
        default:
            printf("F\n");
            break;
    }

    return 0;
}
