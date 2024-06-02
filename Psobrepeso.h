#ifndef PSOBREPESO_H
#define PSOBREPESO_H
#include "Paciente.h"
#include <string>

using namespace std;

class Psobrepeso : public Paciente
{
private:
    int nivelActividad;
    int objetivo;

public:
    // constructor
    Psobrepeso(string, char, int, int, double, int, int);
    // metodos get-set
    void setNivelActividad(int);
    int getNivelActividad();

    void setObjetivo(int);
    int getObjetivo();

    // metodos especificos de la clase
    string objetivoString() const;
    string stringNivelActividad() const;

    // metodos de polimorfismo y de la clase abstracta
    int calcularCalorias() const override;
    void datosPaciente() const override;
};
#endif
