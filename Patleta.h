#ifndef PATLETA_H
#define PATLETA_H
#include "Paciente.h"
#include <string>

using namespace std;

class Patleta : public Paciente
{
private:
    string deporte; // atributos

public:
    Patleta(string, char, int, int, double, string); // constructor

    void setDeporte(string); // getters-setters
    string getDeporte();

    int calcularCalorias() const override;
    int calcularCalorias(int frecuenciaEntreno) const; // metodo sobrecargado
    void datosPaciente() const override;
};

#endif
