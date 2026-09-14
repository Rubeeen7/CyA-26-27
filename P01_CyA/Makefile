# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Asignatura: Computabilidad y Algoritmia
# Práctica 1: Contenedores asociativos
# Autor: Rubén Jesús Perdomo Brito
# @brief Makefile para compilar los dos programas de la práctica

CXX = g++
CXXFLAGS = -std=c++17 -g -Wall

all: p01_single_grades p01_multiple_grades

p01_single_grades: p1_func.o p1_single_grades.o p1_multiple_grades.o Cliente_single_grades.o
	$(CXX) $(CXXFLAGS) -o $@ $^

p01_multiple_grades: p1_func.o p1_single_grades.o p1_multiple_grades.o Cliente_multiple_grades.o
	$(CXX) $(CXXFLAGS) -o $@ $^

p1_func.o: p1_func.cc p1_func.h p1_single_grades.h p1_multiple_grades.h
	$(CXX) $(CXXFLAGS) -c p1_func.cc

p1_single_grades.o: p1_single_grades.cc p1_single_grades.h
	$(CXX) $(CXXFLAGS) -c p1_single_grades.cc

p1_multiple_grades.o: p1_multiple_grades.cc p1_multiple_grades.h
	$(CXX) $(CXXFLAGS) -c p1_multiple_grades.cc

Cliente_single_grades.o: Cliente_single_grades.cc p1_func.h
	$(CXX) $(CXXFLAGS) -c Cliente_single_grades.cc

Cliente_multiple_grades.o: Cliente_multiple_grades.cc p1_func.h
	$(CXX) $(CXXFLAGS) -c Cliente_multiple_grades.cc

.PHONY: all clean

clean:
	rm -f *.o p01_single_grades p01_multiple_grades
