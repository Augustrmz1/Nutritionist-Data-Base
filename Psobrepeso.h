#ifndef  PSOBREPESO_H_INCLUDED
#define  PSOBREPESO_H_INCLUDED
#include "paciente.h"

class Psobrepeso : public Paciente {
public:
    //constructor
    Psobrepeso(string nombre_paciente, char sexo_paciente, int edad_paciente, int altura_paciente, double peso_paciente, int frecuenciaentreno_paciente, int objetivo_paciente, int grasa_percent_paciente);

    //specific overweith patient methods
    void infoPsobrepeso();
    double calcular_Imc();
    string evaluar_Imc();
};


#endif