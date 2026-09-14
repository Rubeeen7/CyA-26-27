// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 1: Contenedores asociativos
// Autor: Rubén Jesús Perdomo Brito
// Correo: alu0101625928@ull.edu.es
// Fecha: 08/09/2026
// Archivo Cliente_multiple_grades.cc: programa cliente.
// Contiene la función main del ejercicio de múltiples calificaciones por estudiante.
// Referencias:
// Historial de revisiones
// 08/09/2026 - Creación (primera versión) del código

#include "p1_func.h"

int main(int argc, char* argv[]) {
  UsageMultiple(argc, argv);

  const std::string input_file{argv[1]};
  CalificacionesMultiples calificaciones;
  calificaciones.LeerFichero(input_file);

  std::cout << "Calificaciones iniciales:\n";
  calificaciones.MostrarCalificaciones();

  InsertarCalificaciones(calificaciones);

  std::cout << "Calificaciones finales:\n";
  calificaciones.MostrarCalificaciones();
  return 0;
}
