#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>
using namespace std;

class Paciente
{
protected: // datos protegidos del paciente
    string nombre;
    char sexo;
    int edad;
    int altura;
    double peso;

public:
    Paciente();                               // constructor por defecto
    Paciente(string, char, int, int, double); // constructor parametrizado
    Paciente(string);                         // constructor con sobrecarga

    // metodos get-set
    void setNombre(string);
    string getNombre();

    void setSexo(char);
    char getSexo();

    void setEdad(int);
    int getEdad();

    void setAltura(int);
    int getAltura();

    void setPeso(double);
    double getPeso();

    // funciones de polimorfismo y que convierten paciente en una clase abstracta
    virtual int calcularCalorias() const = 0;
    virtual void datosPaciente() const = 0; // metodo virtual puro
};

#endif
