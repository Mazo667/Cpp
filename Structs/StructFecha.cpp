#include <iostream>
using namespace std;

struct Fecha
{
    int dia;
    int mes;
    int anio;
};

int main(){
    /*
    Fecha f1;
    f1.anio = 2019;
    f1.dia = 19;
    f1.mes = 8;
    */
    Fecha f1 = {19,8,2019};

    cout << "Dia: " << f1.dia << " \n" << "Mes: " << f1.mes << " \n" << "Año: " << f1.anio << endl;
}