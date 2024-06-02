#ifndef PONCOLOCIGO_H
#define PONCOLOGICO_H
#include "Paciente.h"
#include <string>

using namespace std;

class Poncologico : public Paciente
{
private:
    string tipoCancer;
    int etapaCancer;
    string tratamiento;

public:
    // constructor
    Poncologico(string, char, int, int, double, string, int, string);

    // metodos get-set
    void setTipoCancer(string);
    string getTipoCancer();

    void setEtapaCancer(int);
    int getEtapaCancer();

    void setTratamiento(string);
    string getTratamiento();

    // metodo especifico de la clase
    string riesgoComplicaciones() const;

    // metodos virtual puros de la clase padre
    int calcularCalorias() const override;
    void datosPaciente() const override;
};

#endif
