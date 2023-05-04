void calculateResult(int a, int b, int c, int d, int& result) {
  result = (a + b) * (c - d);
}

int main() {
  int a = 10, b = 20, c = 30, d = 40;
  int result;
  calculateResult(a, b, c, d, result);
  return 0;
}

//I det här fallet har calculateResult() gjorts till en void-funktion som tar en extra parameter, result, som en referens. Resultatet beräknas och sparas direkt i den variabeln som skickas in som parameter. Eftersom det inte finns någon returvärde som behöver hanteras, behöver inte heller main() definiera en variabel att lagra returvärde i.
