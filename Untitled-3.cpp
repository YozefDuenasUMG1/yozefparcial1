#include <iostream>

int main() {
  int numero = 0;

  while (numero <= 30 || numero % 2 == 0) {
    numero += 3;
  }

  std::cout << "Primer número impar después de 30: " << numero << std::endl;

  return 0;
}
