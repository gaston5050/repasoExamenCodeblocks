#include <iostream>
#include "Soluciones.h"
#include "Inscripcion.h"
#include "Examen.h"

void Soluciones::punto1(){
Examen aux;
Inscripcion reg;
/*
reg.cargar();


if(!yaEstaInscripto(reg)){

 std::cout<<"registro Grabado" <<std::endl;
aux.guardar(reg);

}
else{
     std::cout <<" ya esta inscripto" <<std::endl;


}

*/
for( int i = 0; i< aux.getCantidad(); i++){
 std::cout<<aux.leer(i).toString() << std::endl;
}


std::cout<<std::endl;

aux.fullHibrido();

std::cout<<std::endl;
aux.materiaMasDemandada();
}

