#ifndef PINFANTIL_H
#define PINFANTIL_H

#include "Paciente.h"
#include <string>

using namespace std;

class Pinfantil : public Paciente
{
private:
    string nombreTutor; // atributo nombre del tutor del infante

public:
    Pinfantil(string, char, int, int, double, string);

    // metodos get-set
    void setNombreTutor(string);
    string getNombreTutor();

    // metodos especificos de la clase infantil
    string etapaDesarrollo();

    // polimorfismo
    int calcularCalorias() const override;
    void datosPaciente() const override;
};

#endif
