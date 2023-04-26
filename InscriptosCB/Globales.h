#ifndef GLOBALES_H_INCLUDED
#define GLOBALES_H_INCLUDED
#include "Estudiante.h"
#include "EstudiantesArchivo.h"
#include "Inscripcion.h"
#include "Examen.h"

bool existeAlumno(int legajo);
bool existeAlumnoEnArchivoExamenes(int legajo);
bool yaEstaInscripto(Inscripcion reg);
 int buscarMax(int * cantInscriptosXMateria,int cantMaterias);


#endif // GLOBALES_H_INCLUDED
