#ifndef PSOBREPESO_H
#define PSOBREPESO_H
#include "Paciente.h"
#include <string>

using namespace std;

class Psobrepeso : public Paciente
{
private:
    int nivelActividad;

public:
    // constructor
    Psobrepeso(string, char, int, int, double, int);
    // metodos get-set
    void setNivelActividad(int);
    int getNivelActividad();

    // metodos especificos de la clase
    int definirObjetivo() const;
    string objetivoString() const;
    string stringNivelActividad() const;
    double calcularIMC() const;

    // metodos de polimorfismo y de la clase abstracta
    int calcularCalorias() const override;
    void datosPaciente() const override;
};
#endif
