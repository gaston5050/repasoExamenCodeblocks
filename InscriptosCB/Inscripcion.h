#ifndef INSCRIPCION_H_INCLUDED
#define INSCRIPCION_H_INCLUDED
#include "Fecha.h"


class Inscripcion {
private:
int _idInscripcion;
int _legajoAlumno;
Fecha _fechaInscripcion;
char _modalidad;// (P - Presencial, V - Virtual, H - Híbrido)
int _IdMateria; // (1 - 11)

public:

    Inscripcion();
    void cargar();
    int getIdInscripcion();
    int getLegajoAlumno();
    int getIdMateria();
    char getModalidad();
    std::string toString();

    void setIdInscripcion(int idInscripcion);

};


#endif // INSCRIPCION_H_INCLUDED
