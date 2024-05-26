#ifndef PATLETA_H_INCLUDED
#define PATLETA_H_INCLUDED
#include "paciente.h"

class Patleta : public Paciente {
private:
    string deporte;
    int nivel;


public:
    //constructor
    Patleta(string nombre_paciente, char sexo_paciente, int edad_paciente, int altura_paciente, double peso_paciente, int frecuenciaentreno_paciente, int objetivo_paciente, int grasa_percent_paciente, string deporte_paciente, int nivel_paciente);

    //setters
    void setDeporte(string deporte_paciente);
    void setNivel(int nivel_paciente);

    //getters
    string getDeporte();
    int getNivel();

    //specific athlete methods
    void infoAtleta();
    string str_nivelDeporte();
    
};

#endif