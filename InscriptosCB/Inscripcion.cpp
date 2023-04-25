#include <iostream>
#include "Inscripcion.h"
#include "Examen.h"

Inscripcion::Inscripcion(){
    Examen reg;

    setIdInscripcion(reg.getCantidad());



}
 int Inscripcion::getLegajoAlumno(){return _legajoAlumno;}
 int Inscripcion::getIdInscripcion(){ return _idInscripcion;}


void Inscripcion::setIdInscripcion(int idInscripcion) {

    Examen reg;
         _idInscripcion =  reg.getCantidad()+1;

}

std::string Inscripcion::toString(){

    std::string registro = "ID Inscripcion: " + std::to_string(_idInscripcion) + " LEGAJO: " + std::to_string(_legajoAlumno)+"  "+ _fechaInscripcion.toString() + " MODALIDAD " + _modalidad + " ID MATERIA " + std::to_string(_IdMateria);

    return registro;
}


void Inscripcion::cargar(){

int d,m,a;


 std::cout<< "ID INSCRIPCION: "  << getIdInscripcion()<< std::endl;
 std::cout<< "  INGRESE LEGAJO:  "  << std::endl;
 std::cin>> _legajoAlumno;
 while(!existeAlumno(_legajoAlumno)){
     std::cout<< "  INGRESE LEGAJO (Existente) "  << std::endl;
 std::cin>> _legajoAlumno;


 }


 std::cout<< "  INGRESE DIA INSC:  "  << std::endl;
 std::cin>> d;
 std::cout<< "  INGRESE MES INSC:  "  << std::endl;
 std::cin>> m;
 std::cout<< "  INGRESE ANIO INSC:  "  << std::endl;
 std::cin>> a;
 _fechaInscripcion.setDia(d);
 _fechaInscripcion.setMes(m);
 _fechaInscripcion.setAnio(a);

 std::cout<< "  INGRESE MODALIDAD (P - Presencial, V - Virtual, H - Híbrido) :  "  << std::endl;
 std::cin>> _modalidad;
while(_modalidad != 'p' &&_modalidad != 'v' &&_modalidad != 'h' ){
 std::cout<< "  INGRESE MODALIDAD (P - Presencial, V - Virtual, H - Híbrido) :  "  << std::endl;
 std::cin>> _modalidad;
}

 std::cout<< "  INGRESE ID MATERIA:  (1 - 11) "  << std::endl;
 std:: cin>> _IdMateria;

while(_IdMateria<1 || _IdMateria >11 ){

 std::cout<< "  INGRESE ID MATERIA:  (1 - 11) "  << std::endl;
 std:: cin>> _IdMateria;


}


 /*

 int _idInscripcion;
int _legajoAlumno;
Fecha _fechaInscripcion;
char _modalidad;// (P - Presencial, V - Virtual, H - Híbrido)
int _IdMateria; // (1 - 11)
*/




}

    char  Inscripcion::getModalidad(){
        return _modalidad;
    }

 int Inscripcion::getIdMateria(){
 return _IdMateria;
 }
