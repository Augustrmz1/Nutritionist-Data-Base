#include <iostream>
#include "paciente.h"
#include "Psobrepeso.h"
#include "Pinfantil.h"
#include "Patleta.h"

using namespace std;

int main(){
    Pinfantil paciente1 ("Juan Perez", 'H', 5, 171, 77,3,2,16);
    Paciente paciente2 ("Leila <3", 'M', 18, 170, 60,1,1,20);
    Paciente paciente3 ("Pedro Gomez", 'H', 45, 180, 85,1,3,20);
    
    Patleta paciente4 ("Cesar Ramirez", 'H', 20, 171, 72.80,1,3,20,"fuerza",2);
    Paciente paciente5 ("Pedro Gomez", 'H', 45, 180, 85,1,3,20);

    cout << "informacion del paciente: " << paciente1.getNombre() <<endl;
    paciente1.infoPinfantil();
    cout << endl;

    cout << "informacion del paciente: " << paciente4.getNombre() <<endl;
    paciente4.infoAtleta();
    cout <<endl;
    
    cout << "informacion del paciente: " << paciente5.getNombre() <<endl;

    return 0;
}
