#include <iostream>
using namespace std;

// Function prototypes

//Esta funcion valida la fecha
bool validarFecha(int dia, int mes, int anio);
//Esta funcion retorna la cantidad de dias segun el mes y año
int diasDelMes(int mes, int anio);
//Esta funcion evalua si es un año bisiesto
bool esAnioBisiesto(int anio);

bool esAnioBisiesto(int anio){
    bool esBisiesto = false;
    //es divisible por 47
    if (anio%4==0){
        esBisiesto = true;
    }else{
        if (anio%400==0 && anio%100!=0){
            esBisiesto = true;
        }
    }
    return esBisiesto;
}

int diasDelMes(int mes,int anio){
    //En principio son 31 dias
    int dias = 31;
    //si es uno de los meses de 30 dias
    if (mes == 4 || mes==6 || mes==9 || mes==11){
        dias = 30;
    }else{
        if(mes==2){ //es febrero?
            if(esAnioBisiesto(anio)){
                dias = 29;
            }else{
                dias = 28;
            }
        }
    }
    return dias;
}

bool validarFecha(int dia, int mes, int anio) {
    int maxDias = diasDelMes(mes, anio);
    //Si se cumple las condiciones la fecha es correcta
    bool ret;
    if ((dia > 0 && dia <= maxDias) && (mes > 0 && mes <= 12) && (anio >= 0)) {
        ret = true;
    } else {
        ret = false;
    }
    return ret; // Corrected to return the actual validation result.
}

int main(){
    int dia,mes,anio;
    bool fechaOk;
    cout << "Ingrese dia,mes y año";
    cin >> dia >> mes >> anio;
    fechaOk = validarFecha(dia,mes,anio);

    if( !fechaOk){
        cout << "La fecha ingresada es incorrecta";
    }else{
        cout << "Todo bien";
    }
    return 0;
}