#include "Patleta.h"


Patleta::Patleta(string nombre_paciente, char sexo_paciente, int edad_paciente, int altura_paciente, double peso_paciente,int frecuenciaentreno_paciente, int objetivo_paciente, int grasa_percent_paciente, string deporte_paciente, int nivel_paciente): Paciente(nombre_paciente, sexo_paciente, edad_paciente, altura_paciente,peso_paciente,frecuenciaentreno_paciente,objetivo_paciente,grasa_percent_paciente){
        deporte = deporte_paciente;
        nivel = nivel_paciente;
}

//complete setters
void Patleta::setDeporte(string deporte_paciente){
  deporte = deporte_paciente;
}

void Patleta::setNivel(int nivel_paciente){
  nivel = nivel_paciente;
}

//complete getters
string Patleta::getDeporte(){
  return deporte;
}

int Patleta::getNivel(){
  return nivel;
}

void Patleta::infoAtleta(){
  datos_paciente();
  cout<< "Deporte practicado: " << deporte << endl;
  cout << "Nivel de experiencia: " << nivel << endl;
}

string str_nivelDeporte(){

  }

