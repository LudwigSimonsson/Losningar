class MyClass {
public:
    int myFunction(const int& a, const int& b, const int& c, const int& d) {
        // kod som använder parametrarna
        return result;
    }
};

int main() {
    MyClass obj;
    int arg1 = 1, arg2 = 2, arg3 = 3, arg4 = 4;
    int res = obj.myFunction(arg1, arg2, arg3, arg4);
    // använd resultatet
    return 0;
}

//I det optimerade exemplet skickas parametrarna som const-referenser istället, vilket innebär att ingen kopia av parametrarna skapas på stacken. Istället används referenser för att hänvisa till de befintliga värdena. Detta kan leda till bättre referenslokalitet och förbättrad prestanda genom att cacheminnet kan utnyttjas mer effektivt.
