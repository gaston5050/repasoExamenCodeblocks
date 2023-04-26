#include <iostream>
#include "Examen.h"



bool Examen::inscribirAlumno(Inscripcion alumno)
{


    if(existeAlumno(alumno.getLegajoAlumno()))
    {

        bool guardo = guardar(alumno);
        return guardo;
    }


    return 1;

}


Inscripcion Examen::leer(int nroRegistro)
{
    Inscripcion est;
    FILE* p;
    p = fopen("inscripciones.dat", "rb");
    if (p == NULL)
    {
        return est;
    }
    fseek(p, nroRegistro * sizeof(Inscripcion), SEEK_SET);
    fread(&est, sizeof(Inscripcion), 1, p);
    fclose(p);
    return est;
}

bool Examen::guardar(Inscripcion est)
{
    FILE* p = fopen("inscripciones.dat", "ab");
    if (p == NULL)
    {
        return false;
    }
    bool ok = fwrite(&est, sizeof(Inscripcion), 1, p);
    fclose(p);
    return ok;
}



int Examen::getCantidad()
{
    FILE* p = fopen("inscripciones.dat", "rb");
    if (p == NULL)
    {
        return 0;
    }
    fseek(p, 0, SEEK_END);
    int cant = ftell(p) / sizeof(Inscripcion);
    fclose(p);
    return cant;
}



void Examen::fullHibrido()
{

    EstudiantesArchivo aux;
    bool bandera;
    char x;
    int legArchivoEst, legArchivoExa;

    int cant = getCantidad();
    for( int j= 0; j< aux.getCantidad(); j++)
    {

        legArchivoEst =aux.leer(j).getLegajo();

            bandera = true;
        if(existeAlumno(aux.leer(j).getLegajo()))
        {

            for(int i = 0; i<cant; i++)
            {

                x =leer(i).getModalidad();
                legArchivoExa  = leer(i).getLegajoAlumno();




                if ( x!= 'h' && legArchivoEst ==legArchivoExa)
                {

                    bandera = false;

                }



            }

            if (bandera)
            {

                std::cout<< aux.leer(j).toString() << std::endl;

            }

        }

    }

}


bool Examen::legajoExiste(int legajo)
{

    for( int i = 0; i<getCantidad(); i++)

        if(this->leer(i).getLegajoAlumno() == legajo)

            return true;

    return false;

}
