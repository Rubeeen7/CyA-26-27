// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 1: Contenedores asociativos
// Autor: Rubén Jesús Perdomo Brito
// Correo: alu0101625928@ull.edu.es
// Fecha: 08/09/2026
// Archivo p1_func.cc
// Contiene la implementación de las funciones auxiliares de los programas cliente.
// Referencias:
// Historial de revisiones
// 08/09/2026 - Creación (primera versión) del código

#include "p1_func.h"
// Para el exit (0) finalización correcta y exit (1) finalización con error
#include <cstdlib>
#include <string>

const std::string kHelp{"--help"};
const char kRespuestaSi{'s'};
const char kRespuestaSiMayuscula{'S'};

/*
@brief: comprueba los argumentos recibidos por el programa de calificaciones únicas
@param[in] argc: número de argumentos introducidos por el usuario
@param[in] argv: argumentos introducidos por el usuario
*/

void UsageSingle(int argc, char* argv[]) {
  if (argc == 2) {
    std::string parametro{argv[1]};
    if (parametro == kHelp) {
      std::cout << "Programa que almacena la calificación máxima de cada estudiante.\n"
                << "Modo de empleo: ./p01_single_grades grades.txt\n"
                << "El fichero de entrada debe contener en cada línea el alu de un "
                << "estudiante y una calificación, separados por un espacio.\n"
                << "Si un estudiante aparece varias veces, se conservará únicamente "
                << "su calificación máxima.\n";
      exit(0);
    }
  }

  if (argc != 2) {
    std::cout << "Modo de empleo: ./p01_single_grades grades.txt\n";
    std::cout << "Pruebe './p01_single_grades --help' para más información.\n";
    exit(1);
  }
}

/*
@brief: comprueba los argumentos recibidos por el programa de calificaciones múltiples
@param[in] argc: número de argumentos introducidos por el usuario
@param[in] argv: argumentos introducidos por el usuario
*/

void UsageMultiple(int argc, char* argv[]) {
  if (argc == 2) {
    std::string parametro{argv[1]};
    if (parametro == kHelp) {
      std::cout << "Programa que almacena todas las calificaciones de cada estudiante.\n"
                << "Modo de empleo: ./p01_multiple_grades grades.txt\n"
                << "El fichero de entrada debe contener en cada línea el alu de un "
                << "estudiante y una calificación, separados por un espacio.\n"
                << "Las calificaciones de cada estudiante se mostrarán en el mismo "
                << "orden en que aparecen en el fichero.\n";
      exit(0);
    }
  }

  if (argc != 2) {
    std::cout << "Modo de empleo: ./p01_multiple_grades grades.txt\n";
    std::cout << "Pruebe './p01_multiple_grades --help' para más información.\n";
    exit(1);
  }
}

/*
@brief: permite insertar de forma individual nuevas calificaciones en el primer ejercicio
@param[in,out] calificaciones: objeto que contiene las calificaciones únicas
*/

void InsertarCalificaciones(CalificacionesUnicas& calificaciones) {
  char opcion;
  std::cout << "¿Desea insertar una nueva calificación? (s/n): ";

  while (std::cin >> opcion &&
         (opcion == kRespuestaSi || opcion == kRespuestaSiMayuscula)) {
    std::string alu;
    double calificacion;
    std::cout << "Introduzca el alu del estudiante: ";
    std::cin >> alu;
    std::cout << "Introduzca la calificación: ";
    std::cin >> calificacion;
    calificaciones.InsertarCalificacion(alu, calificacion);
    std::cout << "¿Desea insertar otra calificación? (s/n): ";
  }
}

/*
@brief: permite insertar de forma individual nuevas calificaciones en el segundo ejercicio
@param[in,out] calificaciones: objeto que contiene las calificaciones múltiples
*/

void InsertarCalificaciones(CalificacionesMultiples& calificaciones) {
  char opcion;
  std::cout << "¿Desea insertar una nueva calificación? (s/n): ";

  while (std::cin >> opcion &&
         (opcion == kRespuestaSi || opcion == kRespuestaSiMayuscula)) {
    std::string alu;
    double calificacion;
    std::cout << "Introduzca el alu del estudiante: ";
    std::cin >> alu;
    std::cout << "Introduzca la calificación: ";
    std::cin >> calificacion;
    calificaciones.InsertarCalificacion(alu, calificacion);
    std::cout << "¿Desea insertar otra calificación? (s/n): ";
  }
}
