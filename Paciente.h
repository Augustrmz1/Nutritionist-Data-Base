#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED

#include <string>
using namespace std;

// defino la clase paciente
class Paciente
{
protected: // archivos protegidos que seran heredados a el resto de clases
    char sexo;
    int edad;
    int altura;
    double peso;
    int objetivo;
    int grasa_percent;

private:
    string nombre; // el nombre no es necesario para los calculos en otras clases

public:
    // definicion de los atributos publicos

    // constructor
    Paciente(string nombre_paciente, char sexo_paciente, int edad_paciente, int altura_paciente, double peso_paciente, int objetivo_paciente, int grasa_percent_paciente);

    // setters
    void setNombre(string nombre_paciente);
    void setSexo(char sexo_paciente);
    void setEdad(int edad_paciente);
    void setAltura(int altura_paciente);
    void setPeso(double peso_paciente);
    void setObjetivo(int objetivo_paciente);
    void setGrasaPercent(int grasa_percent_paciente);

    // getters
    string getNombre();
    char getSexo();
    int getEdad();
    int getAltura();
    double getPeso();
    int getObjetivo();
    int getGrasaPercent();

    // metodos
    string sexo_completo();
    string string_objetivo();
    void datos_paciente();
    int calcular_calorias();
};
#endif
