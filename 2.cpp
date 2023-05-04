#include <stdio.h>

int main() {
    int choice = 3;

    switch (choice) {
        case 1 ... 3: // Ändring: Placera case-etagerna inom ett smalt intervall
        //Dethär gör så att 1,2 och 3 ses som en plats istället för tre separata
            printf("You chose %d\n", choice);
            break;
        case 4:
            printf("You chose 4\n");
            break;
        case 5:
            printf("You chose 5\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
