// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 1: Contenedores asociativos
// Autor: Rubén Jesús Perdomo Brito
// Correo: alu0101625928@ull.edu.es
// Fecha: 08/09/2026
// Archivo p1_func.h
// Contiene la declaración de las funciones auxiliares de los programas cliente.
// Referencias:
// Historial de revisiones
// 08/09/2026 - Creación (primera versión) del código

#ifndef P1_FUNC_H
#define P1_FUNC_H

#include "p1_multiple_grades.h"
#include "p1_single_grades.h"

void UsageSingle(int argc, char* argv[]);
void UsageMultiple(int argc, char* argv[]);
void InsertarCalificaciones(CalificacionesUnicas& calificaciones);
void InsertarCalificaciones(CalificacionesMultiples& calificaciones);

#endif
