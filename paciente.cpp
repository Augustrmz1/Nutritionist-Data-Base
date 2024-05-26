#include "paciente.h"
#include <string>

//complete constructor
Paciente::Paciente(string nombre_paciente, char sexo_paciente, int edad_paciente, int altura_paciente, double peso_paciente, int frecuenciaentreno_paciente, int objetivo_paciente, int grasa_percent_paciente) {
    nombre = nombre_paciente;
    sexo = sexo_paciente;
    edad = edad_paciente;
    altura = altura_paciente;
    peso = peso_paciente;
    frecuenciaEntreno = frecuenciaentreno_paciente;
    objetivo = objetivo_paciente;
    grasa_percent = grasa_percent_paciente;

}


//complete Setters

void Paciente::setNombre(string nombre_paciente) {
    nombre = nombre_paciente;
}

void Paciente::setSexo(char sexo_paciente) {
    sexo = sexo_paciente;
}

void Paciente::setEdad(int edad_paciente) {
    edad = edad_paciente;
}

void Paciente::setAltura(int altura_paciente) {
    altura = altura_paciente;
}

void Paciente::setPeso(double peso_paciente) {
    peso = peso_paciente;
}

void Paciente::setFrecuenciaEntreno(int frecuenciaentreno_paciente) {
    frecuenciaEntreno = frecuenciaentreno_paciente;
}

void Paciente::setObjetivo(int objetivo_paciente) {
    objetivo = objetivo_paciente;
}

void Paciente::setGrasaPercent(int grasa_percent_paciente){
    grasa_percent = grasa_percent_paciente;
}


//complete Getters
string Paciente::getNombre(){
    return nombre;
}
char Paciente::getSexo(){
    return sexo;
}
int Paciente::getEdad(){
    return edad;
}
int Paciente::getAltura(){
    return altura;
}
double Paciente::getPeso(){
    return peso;
}

int Paciente::getFrecuenciaEntreno() {
    return frecuenciaEntreno;
}

int Paciente::getObjetivo() {
    return objetivo;
}

int Paciente::getGrasaPercent() {
    return grasa_percent;
}

//complete methods
void Paciente::string_objetivo() {
    if (objetivo == 1) {
        cout<< "Perdida de grasa" << endl;
    } else if (objetivo == 2){
        cout << "Mantenimiento de peso" <<endl;
    } else if (objetivo ==3){
        cout << "Ganancia de masa muscular" <<endl;
    } else {
        cout << "Se ingreso un caracter no valido" << endl;
    }
    
}

int Paciente::calcular_calorias() {
    if (sexo== 'H'){
        return 88.362 + (13.397 * peso) + (4.799 * altura);  
    } else if (sexo == 'M'){
        return 447.593 + (9.247 * peso) + (3.098 * altura);
    } else {
        cout << "sexo no valido, no se continuara con el calculo" << endl;
        return 0;
    }
}

int Paciente::calcular_caloriasObjetivo() {
    if (objetivo == 1) {
        return calcular_calorias() - 300;
    } else if (objetivo ==2) {
        return calcular_calorias() + 0;
    } else if (objetivo ==3) {
        return calcular_calorias() + 300;
    } else {
        cout << "objetivo no valido, no se continuara con el calculo" << endl;
        return 0;
    }
}

void Paciente::datos_paciente() {
    cout << "Nombre: " << nombre << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Edad: " << edad << " anios" << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "% de grasa: " << grasa_percent << endl;
    cout << "Estatura: " << altura << " cm"<< endl;
    cout << "Frecuendia de entreno: " << frecuenciaEntreno << endl;
    cout << "Objetivo: " << objetivo << endl;
}
