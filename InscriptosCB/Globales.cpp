
#include "Estudiante.h"
#include "EstudiantesArchivo.h"
#include "Inscripcion.h"
#include "Examen.h"


bool existeAlumno(int legajo){


    EstudiantesArchivo reg;
    int cantidad = reg.getCantidad();

    Estudiante *p = new Estudiante [ cantidad];


    reg.leerTodos(p,cantidad);


    for( int i = 0; i< cantidad ; i++){

        if( legajo == p[i].getLegajo()){

            return true;
        }
    }

    return false;




 }


 bool yaEstaInscripto(Inscripcion reg){

    Examen aux;
    for( int i = 0; i<aux.getCantidad(); i++){
        if(aux.leer(i).getLegajoAlumno() == reg.getLegajoAlumno() && aux.leer(i).getIdMateria() == reg.getIdMateria() ){

            return true;

        }
    }
            return false;




 }




