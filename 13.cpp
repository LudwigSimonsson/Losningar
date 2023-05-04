class Person {
public:
    Person(const char* name, int age) {
        strncpy(this->name, name, sizeof(this->name));
        this->name[sizeof(this->name) - 1] = '\0';
        this->age = age;
    }
private:
    char name[50];
    int age;
};

int main() {
    Person p("John Doe", 30);
    return 0;
}

//I detta exempel har konstruktorn optimerats genom att använda strncpy-funktionen istället för strcpy. Detta begränsar kopieringsprocessen till en viss storlek som är definierad av "name" -arrayen och undviker buffertöverskridningar. Konstruktorn har också modifierats så att "name" -arrayen är mindre och kan hantera mindre strängar. Detta kan bidra till att minimera minnesanvändningen och öka programvarans prestanda.
