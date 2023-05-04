#include <stdio.h>

struct Example {
    int a;
    int b;
    int c; // Ändring: Byt ut short mot int
    int d; // Ändring: Byt ut short mot int
    
    //Alternativt gör om ints till short då både 8 och 16 är så kallade tvåpotenser
};

int main() {
    struct Example exArray[10];
    int i;

    for (i = 0; i < 10; i++) {
        exArray[i].a = i;
        exArray[i].b = i * 2;
        exArray[i].c = i * 3;
        exArray[i].d = i * 4;
    }

    printf("%d\n", exArray[5].c);

    return 0;
}
