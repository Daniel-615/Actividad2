#include "Cliente.cpp"
#include <iostream>
using namespace std;
int main(){
    string nit,nombres,apellidos,direccion,fechanacimiento;
    int telefono;
    cout<<"Ingresar Nit: ";
    cin>>nit;
    cout<<"Ingrese los nombres: ";
    cin>>nombres;
    cout<<"Ingrese los apellidos: ";
    cin>>apellidos;
    cout<<"Ingrese la direccion: ";
    cin>>direccion;
    cout<<"Ingrese el telefono: ";
    fflush(stdin);
    cin>>telefono;
    cout<<"Ingrese la fecha de nacimiento: ";
    cin>>fechanacimiento;
    //instancia de un objeto
    Cliente obj= Cliente(nombres,apellidos,direccion,fechanacimiento,telefono,nit);
    obj.mostrar();

    cout<<"Ingrese el nuevo nit: ";
    cin>>nit;
    obj.setNit(nit);
    obj.mostrar();
    cout<<"Apellido del Cliente: "<<obj.getApe();
}
