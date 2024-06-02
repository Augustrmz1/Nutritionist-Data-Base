#include "Poncologico.h"
#include <iostream>
#include <string>

using namespace std;
// constructor
Poncologico::Poncologico(string _nombre, char _sexo, int _edad, int _altura, double _peso, string _tipoCancer, int _etapaCancer, string _tratamiento) : Paciente(_nombre, _sexo, _edad, _altura, _peso)
{
    tipoCancer = _tipoCancer;
    etapaCancer = _etapaCancer;
    tratamiento = _tratamiento;
}

// metodos get-set

void Poncologico::setTipoCancer(string _tipoCancer)
{
    tipoCancer = _tipoCancer;
}

string Poncologico::getTipoCancer()
{
    return tipoCancer;
}

void Poncologico::setEtapaCancer(int _etapaCancer)
{
    etapaCancer = _etapaCancer;
}

int Poncologico::getEtapaCancer()
{
    return etapaCancer;
}

void Poncologico::setTratamiento(string _tratamiento)
{
    tratamiento = _tratamiento;
}

string Poncologico::getTratamiento()
{
    return tratamiento;
}

// metodos especificos de la clase
string Poncologico::riesgoComplicaciones() const
{
    if (etapaCancer == 4)
    {
        return "Riesgo alto de posibles complicaciones";
    }
    else if (etapaCancer == 3)
    {
        return "Riesgo moderado de posibles complicaciones";
    }
    else if (etapaCancer < 3)
    {
        return "Riesgo bajo de posibles complicaciones";
    }
}

// polimorfismo
int Poncologico::calcularCalorias() const
{
    if (sexo == 'H')
    {
        return 88.362 + (13.397 * peso) + (4.799 * altura);
    }
    else if (sexo == 'M')
    {
        return 447.593 + (9.247 * peso) + (3.098 * altura);
    }
    else
    {
        return 0;
        cout << "Sexo no valido, no se continuara con el calculo." << endl;
    }
}

// metodo virtual puro
void Poncologico::datosPaciente() const
{
    cout << "Datos del paciente: " << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Edad: " << edad << " anio(s)" << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Altura: " << altura << " cm" << endl;
    cout << "Tipo de cancer: " << tipoCancer << endl;
    cout << "Etapa del cancer:" << etapaCancer << endl;
    cout << "Tratamiento actual: " << tratamiento << endl;
    cout << "Riesgo de complicaciones: " << riesgoComplicaciones() << endl;
    cout << "Consumo calorico recomendado: " << calcularCalorias() << " kcal" << endl;
}
