#include "Pinfantil.h"
#include <string>
Pinfantil::Pinfantil(string nombre_paciente, char sexo_paciente, int edad_paciente, int altura_paciente,double peso_paciente, int frecuenciaentreno_paciente, int objetivo_paciente, int grasa_percent_paciente) : Paciente(nombre_paciente, sexo_paciente, edad_paciente, altura_paciente, peso_paciente,frecuenciaentreno_paciente, objetivo_paciente, grasa_percent_paciente) {}

void Pinfantil::infoPinfantil() {
    datos_paciente();
    cout << "Etapa de desarrollo: " << etapaDesarrollo() << endl;
}

string Pinfantil::etapaDesarrollo() {
  if (edad >= 0 && edad <= 2) {
    return "bebe";
  } else if (edad >2 && edad <= 5) {
    return "Primera infancia";
  } else if (edad >5 && edad <= 12) {
    return "Infancia";
  } else if (edad >12 && edad <=17) {
    return "Adolescencia";
  } else{
    return "Este paciente no pertenece a la categoria infantil.";
  }
  
}