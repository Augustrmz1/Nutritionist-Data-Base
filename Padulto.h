#ifndef PAADULTO_H_INCLUDED
#define PAADULTO_H_INCLUDED
#include "paciente.h"

class Padulto : public Paciente{
public:
    //constructor 
    Padulto(string nombre_paciente, char sexo_paciente, int edad_paciente, int altura_paciente, double peso_paciente, int frecuenciaentreno_paciente, int objetivo_paciente, int grasa_percent_paciente);
    
    //specific adult patient methods
    void infoPadulto();
    int definir_objetivo();

};













#endif