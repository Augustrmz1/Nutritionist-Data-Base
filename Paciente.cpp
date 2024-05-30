#include "Paciente.h"
#include <iostream>
#include <string>
using namespace std;

// constructor completo
Paciente::Paciente(string nombre_paciente, char sexo_paciente, int edad_paciente, int altura_paciente, double peso_paciente, int objetivo_paciente, int grasa_percent_paciente)
{
    nombre = nombre_paciente;
    sexo = sexo_paciente;
    edad = edad_paciente;
    altura = altura_paciente;
    peso = peso_paciente;
    objetivo = objetivo_paciente;
    grasa_percent = grasa_percent_paciente;
}

// complete setters

void Paciente::setNombre(string nombre_paciente)
{
    nombre = nombre_paciente;
}

void Paciente::setSexo(char sexo_paciente)
{
    sexo = sexo_paciente;
}

void Paciente::setEdad(int edad_paciente)
{
    edad = edad_paciente;
}

void Paciente::setAltura(int altura_paciente)
{
    altura = altura_paciente;
}

void Paciente::setPeso(double peso_paciente)
{
    peso = peso_paciente;
}

void Paciente::setObjetivo(int objetivo_paciente)
{
    objetivo = objetivo_paciente;
}

void Paciente::setGrasaPercent(int grasa_percent_paciente)
{
    grasa_percent = grasa_percent_paciente;
}

// complete Getters
string Paciente::getNombre()
{
    return nombre;
}
char Paciente::getSexo()
{
    return sexo;
}
int Paciente::getEdad()
{
    return edad;
}
int Paciente::getAltura()
{
    return altura;
}
double Paciente::getPeso()
{
    return peso;
}

int Paciente::getObjetivo()
{
    return objetivo;
}

int Paciente::getGrasaPercent()
{
    return grasa_percent;
}

// complete methods
//metodo que da nombre para mostrar el objetivo en lugar de un numero
string Paciente::string_objetivo()
{
    if (objetivo == 1)
    {
        return "Perdida de grasa";
    }
    else if (objetivo == 2)
    {
        return "Mantenimiento de peso";
    }
    else if (objetivo == 3)
    {
        return "Ganancia de masa muscular";
    }
    else
    {
        return "Caracter ingresado en 'sexo' no valido";
    }
}
//metodo que calcula las calorias dependiendo del sexo
int Paciente::calcular_calorias()
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
    }
}
//muestra los datos del paciente
void Paciente::datos_paciente()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Sexo: " << sexo_completo() << endl;
    cout << "Edad: " << edad << endl;
    cout << "Peso: " << peso << endl;
    cout << "Altura" << altura << endl;
    cout << "Objetivo: " << string_objetivo() << endl;
    cout << "porcentaje de grasa: " << grasa_percent << "%" << endl;
}
//metodo que muestra la informacion completa del paciente
string Paciente::sexo_completo()
{
    if (sexo == 'H')
    {
        return "Hombre";
    }
    else if (sexo == 'M')
    {
        return "Mujer";
    }
    else
    {
        return "Sexo no valido";
    }
}
