#include "Psobrepeso.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;
// constructor
Psobrepeso ::Psobrepeso(string _nombre, char _sexo, int _edad, int _altura, double _peso, int _nivelactividad) : Paciente(_nombre, _sexo, _edad, _altura, _peso)
{
    nivelActividad = _nivelactividad;
}

// metodos get-set
void Psobrepeso::setNivelActividad(int _nivelActividad)
{
    nivelActividad = _nivelActividad;
}

int Psobrepeso::getNivelActividad()
{
    return nivelActividad;
}

// metodos especificos de la clase
double Psobrepeso::calcularIMC() const
{
    float altura_metros = altura / 100.0;
    double IMC = peso / pow(altura_metros, 2);
    return IMC;
}

int Psobrepeso::definirObjetivo() const
{
    if (calcularIMC() >= 25 && calcularIMC() <= 29.9)
    {
        return 1;
    }
    else if (calcularIMC() > 29.9)
    {
        return 2;
    }
    else
    {
        return 0;
        cout << "El paciente no pertenece a la categoria sobrepeso." << endl;
    }
}
string Psobrepeso::objetivoString() const
{
    if (definirObjetivo() == 1)
    {
        return "Perdida de peso moderada.";
    }
    else if (definirObjetivo() == 2)
    {
        return "Perdida de peso agresiva.";
    }
    else
    {
        return "Objetivo no valido.";
    }
}

string Psobrepeso::stringNivelActividad() const
{
    if (nivelActividad == 1)
    {
        return "Sedentario";
    }
    else if (nivelActividad == 2)
    {
        return "Poco activo";
    }
    else if (nivelActividad == 3)
    {
        return "Activo";
    }
    else
        return "Dato ingresado no valido";
}

int Psobrepeso::calcularCalorias() const
{
    // Formula para pacientes con sobrepeso
    if (sexo == 'H')
    {
        return 88.362 + (13.397 * peso) + (4.799 * altura) - 500;
    }
    else if (sexo == 'M')
    {
        return 447.593 + (9.247 * peso) + (3.098 * altura) - 300;
    }
    else
    {
        return 0;
        cout << "Sexo no valido, no se continuara con el calculo." << endl;
    }
}

void Psobrepeso::datosPaciente() const
{

    cout << "Datos del paciente: " << endl;
    cout << "Iipo: " << " Paciente con sobre peso" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Edad: " << edad << " anio(s)" << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Altura: " << altura << " cm" << endl;
    cout << "Nivel de actividad: " << nivelActividad << endl;
    cout << "IMC: " << calcularIMC() << endl;
    cout << "Objetivo requerido: " << objetivoString() << endl;
    cout << "Consumo calorico recomendado: " << calcularCalorias() << " kcal" << endl;
    cout << endl;
}
