class Example {
public:
    Example(int x, int y, int z) : x(x), y(y), z(z) {}
private:
    int x;
    int y;
    int z;
};
//Ovanstående kod använder konstruktor initialiseringslistor för att initialisera variablerna x, y och z direkt och därmed undvika overhead från standardkonstruktören.
