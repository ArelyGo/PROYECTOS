#include <iostream>
#include <string>

char obtenerPrimeraVocalInterna(const std::string& str){
    for (size_t i = 1; i <str.length(); ++i){
        char c = str[i];
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
         return c;
    }
    return 'X';
}

std::string calcularRFC(const std::string& nombre, const std::string& apellidoPaterno, 
       const std::string& apellidoMaterno, const std::string& fechaNacimiento){
    std::string rfc;

    char LetraInicial = apellidoPaterno[0];
    char PrimeraVocalInterna = obtenerPrimeraVocalInterna(apellidoPaterno);
    
    char inicialApellidoMaterno = (!apellidoMaterno.empty()) ? apellidoMaterno[0] : 'X';
    
    char inicialNombre = nombre[0];
    
    std::string anio = fechaNacimiento.substr(2, 2);
    std::string mes = fechaNacimiento.substr(5, 2);
    std::string dia = fechaNacimiento.substr(8, 2);
    
    rfc = LetraInicial;
    rfc += PrimeraVocalInterna;
    rfc += inicialApellidoMaterno;
    rfc += inicialNombre;
    rfc += anio;
    rfc += mes;
    rfc += dia;
    return rfc;
    
}

int main() {
    std::string nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento;
    
   std::cout << "Ingrese el nombre: ";
   std::getline(std::cin, nombre);
   std::cout << "Ingrese el apellido paterno: ";
   std::getline(std::cin, apellidoPaterno);
   std::cout << "Ingrese el apellido materno (si no tiene, presione Enter): ";
   std::getline(std::cin, apellidoMaterno);
   std::cout << "Ingrese fecha de nacimiento (YYYY-MM-DD): ";
   std::getline(std::cin, fechaNacimiento);
   std::string rfc = calcularRFC(nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento);
   std::cout <<"RFC: "<< rfc << std::endl;
   
    return 0;
}