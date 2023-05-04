class Base {
public:
    void foo() {} // Funktionen deklareras inte virtuell eftersom det inte finns något behov
};

class Derived : public Base {
public:
    void foo() override { /* Implementation */ }
};
