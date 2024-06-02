#ifndef PATLETA_H
#define PATLETA_H
#include "Paciente.h"
#include <string>

using namespace std;

class Patleta : public Paciente
{
private:
    string deporte;

public:
    Patleta(string, char, int, int, double, string);

    void setDeporte(string);
    string getDeporte();

    int calcularCalorias() const override;
    void datosPaciente() const override;
};

#endif
