#include "Paciente.cpp"
#include "Patleta.cpp"
#include "Pinfantil.cpp"
#include "Psobrepeso.cpp"
#include "Poncologico.cpp"

#include <vector>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

// Función para autenticar al usuario
bool autenticarUsuario()
{
    string usuario, password;
    cout << "Ingrese el nombre de usuario: ";
    cin >> usuario;
    cout << "Ingrese la contraseña: ";
    cin >> password;

    // Verificar el usuario y la contraseña
    if (usuario == "admin" && password == "1234")
    {
        return true;
    }
    else
    {
        cout << "Usuario o contraseña incorrectos." << endl;
        return false;
    }
}

// Función para mostrar el menú principal al usuario
void mostrarMenu()
{
    cout << "\nSeleccione la base de datos de pacientes que desea ver:" << endl;
    cout << "1. Pacientes Atletas" << endl;
    cout << "2. Pacientes Infantiles" << endl;
    cout << "3. Pacientes con Sobrepeso" << endl;
    cout << "4. Pacientes Oncológicos" << endl;
    cout << "5. Salir" << endl;
}

// Función para mostrar los datos de los pacientes
void mostrarPacientes(const vector<Paciente *> &pacientes)
{
    for (const auto &paciente : pacientes)
    {
        paciente->datosPaciente(); // Llamada a la función existente en tus clases
        cout << "--------------------------------------------------" << endl;
    }
}

int main()
{
    // Crear objetos de pacientes y almacenarlos en vectores de punteros a Paciente
    vector<Paciente *> atletas = {
        new Patleta("Elena Martinez", 'M', 20, 177, 88.5, "Halterofilia"),
        new Patleta("Cesar Ramirez", 'H', 20, 171, 73.8, "Levantamiento de pesas"),
        new Patleta("Juan Gutierrez", 'H', 32, 182, 87.9, "Natacion"),
        new Patleta("Leila <3", 'M', 19, 155, 60.0, "Natacion"),
        new Patleta("Chris Griffin", 'H', 25, 177, 67.2, "Americano")};

    vector<Paciente *> infantiles = {
        new Pinfantil("Erick Manzano", 'H', 1, 68, 7.0, "Arturo Manzano Rodriguez"),
        new Pinfantil("Julieta Herrera", 'M', 5, 110, 27.0, "Lucia Torres Herrera"),
        new Pinfantil("Luis Tauro", 'H', 15, 170, 68.7, "Pedro Tauro Gonzalez"),
        new Pinfantil("Carlos Gomez", 'H', 12, 155, 45, "Laura Manzano Gomez"),
        new Pinfantil("Ana Rodriguez", 'H', 1, 68, 7, "Arturo Manzano")};

    vector<Paciente *> sobrepeso = {
        new Psobrepeso("Juan Lopez", 'H', 25, 175, 77.5, 1),
        new Psobrepeso("Grisselda Angeles", 'M', 44, 165, 87.5, 2),
        new Psobrepeso("Cesar Sevilla", 'H', 55, 171, 79.5, 3),
        new Psobrepeso("Augusto Loreto", 'H', 17, 177, 102.1, 1),
        new Psobrepeso("Ana Rogriguez", 'M', 28, 176, 88.0, 1)};

    vector<Paciente *> oncologicos = {
        new Poncologico("Pedro Sanchez", 'H', 27, 177, 65, "Pulmon", 3, "Radioterapia"),
        new Poncologico("Arturo Manzano", 'H', 55, 180, 55, "Pancreas", 4, "Quimioterapia"),
        new Poncologico("Lucia Ramirez", 'M', 44, 160, 57, "Garganta", 1, "inmunoterapia"),
        new Poncologico("Andres Torres", 'H', 67, 170, 55, "Leucemia", 4, "Transplante de medula osea"),
        new Poncologico("Sofia Diaz", 'M', 23, 165, 76, "Higado", 2, "Cirugia proxima")};

    // Solicitar autenticación del usuario
    if (!autenticarUsuario())
    {
        return 1;
    }

    // Bucle principal del menú
    bool salir = false;
    while (!salir)
    {
        mostrarMenu();
        int opcion;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        // Ejecutar la acción correspondiente según la opción seleccionada
        if (opcion == 1)
        {
            cout << "\nPacientes Atletas:\n";
            mostrarPacientes(atletas);
            cout << endl;
        }
        else if (opcion == 2)
        {
            cout << "\nPacientes Infantiles:\n";
            mostrarPacientes(infantiles);
            cout << endl;
        }
        else if (opcion == 3)
        {
            cout << "\nPacientes con Sobrepeso:\n";
            mostrarPacientes(sobrepeso);
            cout << endl;
        }
        else if (opcion == 4)
        {
            cout << "\nPacientes Oncológicos:\n";
            mostrarPacientes(oncologicos);
            cout << endl;
        }
        else if (opcion == 5)
        {
            salir = true;
            cout << "Saliendo del programa." << endl;
        }
        else
        {
            cout << "Opción no válida. Por favor, intente de nuevo." << endl;
        }
    }

    // Liberar memoria
    for (auto &paciente : atletas)
        delete paciente;
    for (auto &paciente : infantiles)
        delete paciente;
    for (auto &paciente : sobrepeso)
        delete paciente;
    for (auto &paciente : oncologicos)
        delete paciente;

    return 0;
}
