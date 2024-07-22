
#include<iostream>
using namespace std;

int main(){
    int edad;
    cout<<"ingrese su edad: ";cin>>edad;
    if(edad>=18){
        cout<<"usted es mayor de edad";
    }
    else if(edad<18){
        cout<<"usted es menor de edad ";
    }
    return 0;
}
