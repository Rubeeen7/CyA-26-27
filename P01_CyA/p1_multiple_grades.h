// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 1: Contenedores asociativos
// Autor: Rubén Jesús Perdomo Brito
// Correo: alu0101625928@ull.edu.es
// Fecha: 08/09/2026
// Archivo p1_multiple_grades.h
// Contiene la declaración de la clase CalificacionesMultiples.
// La clase almacena todas las calificaciones asociadas a cada estudiante.
// Referencias:
// Historial de revisiones
// 08/09/2026 - Creación (primera versión) del código

#ifndef P1_MULTIPLE_GRADES_H
#define P1_MULTIPLE_GRADES_H

#include <iostream>
#include <map>
#include <string>
#include <vector>

class CalificacionesMultiples {
 public:
  CalificacionesMultiples() = default;
  void LeerFichero(const std::string& nombre_fichero);
  void InsertarCalificacion(const std::string& alu, double calificacion);
  void MostrarCalificaciones() const;

 private:
  std::map<std::string, std::vector<double>> calificaciones_;
};

#endif
