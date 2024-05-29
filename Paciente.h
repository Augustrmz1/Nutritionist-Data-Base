#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED
#include <iostream>

using namespace std;

class Paciente {
protected: //patient data
    char sexo; 
    int edad;
    int altura;
    double peso;
    int frecuenciaEntreno;
    int objetivo;
    int grasa_percent;


private: //patient name
    string nombre;


public:
    //Constructor
    Paciente(string nombre_paciente, char sexo_paciente, int edad_paciente, int altura_paciente, double peso_paciente, int frecuenciaentreno_paciente, int objetivo_paciente, int grasa_percent_paciente);

    //Setters
    void setNombre(string nombre_paciente);
    void setSexo(char sexo_paciente);
    void setEdad(int edad_paciente);
    void setAltura(int altura_paciente);
    void setPeso(double peso_paciente);
    void setFrecuenciaEntreno(int frecuenciaentreno_paciente);
    void setObjetivo(int objetivo_paciente);
    void setGrasaPercent(int grasa_percent_paciente);

    //Getters
    string getNombre();
    char getSexo();
    int getEdad();
    int getAltura();
    double getPeso();
    int getFrecuenciaEntreno();
    int getObjetivo();
    int getGrasaPercent();
    
    //Methods
    void string_objetivo();
    void sexo_complete();
    void datos_paciente();
    int calcular_calorias();
    int calcular_caloriasObjetivo();

};


#endif // PACIENTE_H_INCLUDED
