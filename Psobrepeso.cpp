#include "Psobrepeso.h"

Psobrepeso::Psobrepeso(string nombre_paciente, char sexo_paciente, int edad_paciente, int altura_paciente, double peso_paciente, int frecuenciaentreno_paciente, int objetivo_paciente, int grasa_percent_paciente) : Paciente(nombre_paciente, sexo_paciente, edad_paciente, altura_paciente, peso_paciente, frecuenciaentreno_paciente, objetivo_paciente, grasa_percent_paciente) {
  
}

double Psobrepeso::calcular_Imc() {
    int altura_metros = altura / 100;
    double alturaCuadrada = altura_metros * altura_metros;
    return peso / alturaCuadrada;
  
}

string Psobrepeso::evaluar_Imc() {
  double imc = calcular_Imc();
  if (imc < 18.5) {
      return "Peso por debajo del promedio";
  } else if (imc > 18.5 && imc < 24.9) {
      return "Peso saludable";
  } else if (imc > 25 && imc < 29.9) {
    return "Sobrepeso";
  } else {
    return "Obesidad";
  }
  
}


//complete mettods
void Psobrepeso::infoPsobrepeso(){
  datos_paciente();
  double imc = calcular_Imc();
  cout << "IMC del paciente: " << imc <<"(" << evaluar_Imc() << ")" <<  endl;
}