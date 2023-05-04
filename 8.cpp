class BigObject {
public:
    // Konstruktor, destruktor och andra medlemsfunktioner
    // ...
private:
    // Stora mängder medlemmar
    int member1;
    float member2;
    // ...
};

// Funktion som returnerar en BigObject som referens
const BigObject& getBigObject() {
    static BigObject obj; // Statiskt objekt som används som returvärde
    // Gör något med obj
    return obj;
}

// Funktion som tar en BigObject-referens som parameter och gör något med den
void doSomethingWithBigObject(const BigObject& obj) {
    // Gör något med obj
}

int main() {
    const BigObject& obj = getBigObject();
    doSomethingWithBigObject(obj);
    return 0;
}
