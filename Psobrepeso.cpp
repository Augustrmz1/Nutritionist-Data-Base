##include "Psobrepeso.h"
#include <iostream>
#include <string>

using namespace std;
// constructor
Psobrepeso ::Psobrepeso(string _nombre, char _sexo, int _edad, int _altura, double _peso, int _nivelactividad, int _objetivo) : Paciente(_nombre, _sexo, _edad, _altura, _peso)
{
    nivelActividad = _nivelactividad;
    objetivo = _objetivo;
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

void Psobrepeso::setObjetivo(int _objetivo)
{
    objetivo = _objetivo;
}

int Psobrepeso::getObjetivo()
{
    return objetivo;
}

// metodos especificos de la clase
string Psobrepeso::objetivoString() const
{
    if (objetivo == 1)
    {
        return "Mantenimiento de peso";
    }
    else if (objetivo == 2)
    {
        return "Perdida de peso";
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
    cout << "Nombre: " << nombre << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Edad: " << edad << " anio(s)" << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Altura: " << altura << " cm" << endl;
    cout << "Objetivo: " << objetivoString() << endl;
    cout << "Nivel de actividad: " << stringNivelActividad() << endl;
    cout << "Consumo calorico recomendado: " << calcularCalorias() << " kcal" << endl;
}
