#include <iostream>
using namespace std;

struct Fecha
{
    int dia;
    int mes;
    int anio;
};

Fecha fecha(int d, int m,int a){
    return {d,m,a};
}

struct Direccion{
    string calle;
    int numero;
    int piso;
    char departamento;
    string codigoPostal;
};

/* al usar return {nombre, edad}; estamos devolviendo un objeto de la clase Persona, 
y los valores nombre y edad que se pasaron como argumentos 
se utilizan para inicializar los miembros correspondientes del 
objeto de Persona.*/
Direccion direccion(string c, int n, int p, char d, string cp){
    return{c,n,p,d,cp};
}

struct Persona{
    string nombre;
    int dni;
    Fecha fechaNacimiento; //Estructura Anidada
    Direccion direccion; //Estructura Anidada
};

Persona persona(string n,int dni,Fecha fec, Direccion dir){
    return {n,dni,fec,dir};
}

int main(){
   
    Persona p = persona("Maximiliano",
                        41324177,
                        fecha(19,8,1998),
                        direccion("Candido Lopez",1012,1,'A',"9103"));

    cout << "Nombre: " << p.nombre << " \n" << "Dni: " << p.dni << " \n" 
    << "Fecha de Nacimiento: " << p.fechaNacimiento.dia << "/" << p.fechaNacimiento.mes
    << "/" << p.fechaNacimiento.anio << "\nDireccion: " << p.direccion.calle
    << " " << p.direccion.numero << "\nPiso:" << p.direccion.piso
    << "\nDepartamento: " << p.direccion.departamento << "\nCodigo Postal: " 
    << p.direccion.codigoPostal << endl;
}