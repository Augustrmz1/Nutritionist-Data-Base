#include "Pinfantil.h"
#include <iostream>
#include <string>

using namespace std;
// constructor
Pinfantil::Pinfantil(string _nombre, char _sexo, int _edad, int _altura, double _peso, string _nombreTutor) : Paciente(_nombre, _sexo, _edad, _altura, _peso)
{
    nombreTutor = _nombreTutor;
}

// metodos get-set de paciente infantil
void Pinfantil::setNombreTutor(string _nombretutor)
{
    nombreTutor = _nombretutor;
}

string Pinfantil::getNombreTutor()
{
    return nombreTutor;
}

// metodo especifico de la clase infantil
string Pinfantil::etapaDesarrollo()
{
    if (edad >= 0 && edad <= 2)
    {
        return "Bebe";
    }
    else if (edad > 2 && edad <= 5)
    {
        return "Primera infancia";
    }
    else if (edad > 5 && edad < 12)
    {
        return "Infancia";
    }
    else if (edad > 12 && edad > 17)
    {
        return "Adolescencia";
    }
    else
    {
        return "Este paciente no pertenece a la categoria infantil.";
    }
}

int Pinfantil::calcularCalorias() const
{
    if (edad >= 0 && edad <= 2)
    {
        return 1000;
    }
    else if (edad > 2 && edad <= 10)
    {
        return 88.5 + (10 * peso) + (2 * altura) - (5 * edad) + 20;
    }
    else if (sexo == 'H' && edad > 10)
    {
        return 88.362 + (13.397 * peso) + (4.799 * altura);
    }
    else if (sexo == 'M' && edad > 10)
    {
        return 447.593 + (9.247 * peso) + (3.098 * altura);
    }
    else
    {
        return 0;
        cout << "sexo no valido, no se continuara con el calculo" << endl;
    }
}

void Pinfantil::datosPaciente() const
{
    cout << "Datos del paciente: " << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Nombre del tutor: " << nombreTutor << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Edad: " << edad << " anio(s)" << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Altura: " << altura << " cm" << endl;
    cout << "Consumo calorico recomendado: " << calcularCalorias() << " kcal" << endl;
}
