#include "Paciente.h"
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

// constructor completo
Paciente::Paciente()
{
    nombre = "";
    sexo = 'N';
    edad = 0;
    altura = 0;
    peso = 0;
}

Paciente::Paciente(string _nombre, char _sexo, int _edad, int _altura, double _peso)
{
    nombre = _nombre;
    sexo = _sexo;
    edad = _edad;
    altura = _altura;
    peso = _peso;
}

Paciente::Paciente(string _nombre)
{
    nombre = _nombre;
    sexo = 'N';
    edad = 0;
    altura = 0;
    peso = 0;
}

// Metodos get-set
void Paciente::setNombre(string _nombre)
{
    nombre = _nombre;
}

string Paciente::getNombre()
{
    return nombre;
}

void Paciente::setSexo(char _sexo)
{
    sexo = _sexo;
}

void Paciente::setEdad(int _edad)
{
    edad = _edad;
}

int Paciente::getEdad()
{
    return edad;
}

void Paciente::setAltura(int _altura)
{
    altura = _altura;
}

int Paciente::getAltura()
{
    return altura;
}

void Paciente::setPeso(double _peso)
{
    peso = _peso;
}

double Paciente::getPeso()
{
    return peso;
}

// No se implementa el metodo calcular calorias ya que se implementara en las clases hijas
