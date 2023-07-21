#include <iostream>
using namespace std;

int main(){
    cout << "Ingrese dos valores: ";
    int a,b;
    cin >> a >> b;
    //validamos
    if(b!= 0){
        double c = a/b;
        cout << c;
    }else{
        cout << "Error" << endl;
    }
    return 0;
}