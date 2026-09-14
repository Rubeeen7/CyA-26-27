// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 1: Contenedores asociativos
// Autor: Rubén Jesús Perdomo Brito
// Correo: alu0101625928@ull.edu.es
// Fecha: 08/09/2026
// Archivo p1_multiple_grades.cc
// Contiene la implementación de los métodos de la clase CalificacionesMultiples.
// Referencias:
// Historial de revisiones
// 08/09/2026 - Creación (primera versión) del código

#include "p1_multiple_grades.h"

#include <cstdlib>
#include <fstream>

/*
@brief: lee las calificaciones almacenadas en un fichero de texto
@param[in] nombre_fichero: nombre del fichero que contiene las calificaciones
*/

void CalificacionesMultiples::LeerFichero(const std::string& nombre_fichero) {
  std::ifstream fichero{nombre_fichero};
  if (!fichero) {
    std::cout << "No se pudo abrir el archivo correctamente.\n";
    exit(1);
  }

  std::string alu;
  double calificacion;
  while (fichero >> alu >> calificacion) {
    InsertarCalificacion(alu, calificacion);
  }
  fichero.close();
}

/*
@brief: inserta una nueva calificación para un estudiante
@param[in] alu: identificador del estudiante
@param[in] calificacion: calificación obtenida por el estudiante
*/

void CalificacionesMultiples::InsertarCalificacion(const std::string& alu,
                                                    double calificacion) {
  calificaciones_[alu].push_back(calificacion);
}

/*
@brief: muestra los estudiantes ordenados por alu y sus calificaciones en orden de lectura
*/

void CalificacionesMultiples::MostrarCalificaciones() const {
  // Se usa auto para deducir automáticamente el tipo y no escribir todo el tipo real del std::map
  for (const auto& estudiante : calificaciones_) {
    std::cout << estudiante.first << ':';
    for (const double calificacion : estudiante.second) {
      std::cout << ' ' << calificacion;
    }
    std::cout << '\n';
  }
}
