
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

bool existeAlumnoEnArchivoExamenes(int legajo){

    Examen reg;
    int cantidad = reg.getCantidad();


    for( int i = 0; i< cantidad ; i++){


        if( legajo == reg.leer(i).getLegajoAlumno()){

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

  int buscarMax(int * cantInscriptosXMateria,int cantMaterias){

    int maximo =cantInscriptosXMateria[0];

    for (int i = 1; i< cantMaterias; i++){

        if(cantInscriptosXMateria[i]> maximo){

            maximo = cantInscriptosXMateria[i];


        }

    }
    return maximo;





  }


