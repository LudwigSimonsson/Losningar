int foo(int x, int y) { //Registerna gör att vi undviker lokal sparning av variablerna och istället behandlar dem i processorminnet
  register int a asm("r10") = x + y;
  a *= 2;
  a -= y;
  register int d asm("r11") = a / x;
  return d % 3;
}
