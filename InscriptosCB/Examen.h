#ifndef EXAMEN_H_INCLUDED
#define EXAMEN_H_INCLUDED
#include "Inscripcion.h"
#include "Globales.h"
#include "EstudiantesArchivo.h"

class Examen{

public:

    bool inscribirAlumno(Inscripcion alumno);
    int getCantidad();
    bool guardar(Inscripcion est);

    Inscripcion leer(int nroRegistro);
    void fullHibrido();





};


#endif // EXAMEN_H_INCLUDED
