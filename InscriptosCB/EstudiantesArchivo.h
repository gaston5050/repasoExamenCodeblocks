#pragma once
#include "Estudiante.h"
class EstudiantesArchivo
{
public:
  Estudiante leer(int nroRegistro);
  bool leerTodos(Estudiante estudiantes[], int cantidad);
  bool guardar(Estudiante est);
  bool guardar(Estudiante est, int nroRegistro);
  int getCantidad();
  int buscar(int legajo);
};



bool alfabeticamenteAsc(std::string a, std::string b);

bool alfabeticamenteDesc (std::string a, std::string b);

void ordenar(Estudiante vec[], int tam, bool criterioOrd (std::string, std::string));
