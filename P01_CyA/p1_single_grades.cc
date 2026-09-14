// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 1: Contenedores asociativos
// Autor: Rubén Jesús Perdomo Brito
// Correo: alu0101625928@ull.edu.es
// Fecha: 08/09/2026
// Archivo p1_single_grades.cc
// Contiene la implementación de los métodos de la clase CalificacionesUnicas.
// Referencias:
// Historial de revisiones
// 08/09/2026 - Creación (primera versión) del código

#include "p1_single_grades.h"

#include <cstdlib>
#include <fstream>

/*
@brief: lee las calificaciones almacenadas en un fichero de texto
@param[in] nombre_fichero: nombre del fichero que contiene las calificaciones
*/

void CalificacionesUnicas::LeerFichero(const std::string& nombre_fichero) {
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
@brief: inserta una calificación y conserva únicamente la mayor para cada estudiante
@param[in] alu: identificador del estudiante
@param[in] calificacion: calificación obtenida por el estudiante
*/

void CalificacionesUnicas::InsertarCalificacion(const std::string& alu,
                                                 double calificacion) {
  // No guarda directamente el alumno, sino un iterador que apunta al elemento encontrado dentro del map
  // find() devuelve un calificaciones_.end() si no encuentra el alu o un iterador apuntando si sí
  auto estudiante = calificaciones_.find(alu);

  if (estudiante == calificaciones_.end()) {
    calificaciones_.insert({alu, calificacion});
  } else if (calificacion > estudiante->second) {
    estudiante->second = calificacion;
  }
}

/*
@brief: muestra por pantalla las calificaciones ordenadas según el alu del estudiante
*/

void CalificacionesUnicas::MostrarCalificaciones() const {
  // Se usa auto para deducir automáticamente el tipo y no escribir todo el tipo real del std::map
  for (const auto& estudiante : calificaciones_) {
    std::cout << estudiante.first << ' ' << estudiante.second << '\n';
  }
}
