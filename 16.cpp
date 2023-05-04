inline int square(int x) {
    return x*x;
}

int main() {
    int result = square(5);
    return 0;
}
//I det optimerade exemplet har funktionen square definierats som inline. Detta gör att funktionen expanderas direkt inuti main-funktionen vid kompileringstid, vilket eliminerar overheaden av ett funktionsanrop och associerad parameterpassning.
