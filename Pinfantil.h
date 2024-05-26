#ifndef PACIENTEINFANTIL_H_INCLUDED
#define PACIENTEINFANTIL_H_INCLUDED
#include "paciente.h"

class Pinfantil : public Paciente {
public:
      //constructor
      Pinfantil(string nombre_paciente, char sexo_paciente, int edad_paciente, int altura_paciente, double peso_paciente, int frecuenciaentreno_paciente, int objetivo_paciente, int grasa_percent_paciente);
      //specific infant patient methods
      void infoPinfantil();
      string etapaDesarrollo();
};



#endif