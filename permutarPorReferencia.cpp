#include <iostream>
using namespace std;

void permutar(int& a,int& b){
    int aux = a;
    a = b;b = aux;
    return;
}

int main(){
    int x,y;
    cin >> x >> y;
    //Permuto los valores
    permutar(x,y);
    cout << "Valor de x: " << x << "\nValor de y: " << y <<endl;
    return 0;
}