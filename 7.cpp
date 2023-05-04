#include <iostream>
using namespace std;

// funktion som tar emot en pekare till en struktur med 5 variabler
struct Values {
    int a, b, c, d, e;
};

void printValues(const Values* values) {
    cout << values->a << " " << values->b << " " << values->c << " " << values->d << " " << values->e << endl;
} //Alla våra värden är nu förvarade i en och samma struktur

int main() {
    Values values = { 1, 2, 3, 4, 5 };

    // anropa funktionen med en pekare till strukturen som parameter
    printValues(&values);

    return 0;
}
