// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Archivo: pell.cc
// Descripción: Imprime los N primeros términos de la serie de Pell.

#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Modo de empleo: " << argv[0] << " N\n";
    return 1;
  }

  const int number_of_terms = std::atoi(argv[1]);

  if (number_of_terms <= 0) {
    std::cerr << "N debe ser un número entero positivo.\n";
    return 1;
  }

  long long previous = 0;
  long long current = 1;

  for (int i = 0; i < number_of_terms; ++i) {
    std::cout << previous;

    if (i < number_of_terms - 1) {
      std::cout << " ";
    }

    const long long next = 2 * current + previous;
    previous = current;
    current = next;
  }

  std::cout << '\n';

  return 0;
}