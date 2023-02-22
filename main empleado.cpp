#include "Empleado.cpp"
#include <iostream>
using namespace std;
int main(){
    string nombres,apellidos,direccion,fechanacimiento,cargo;
    int telefono,codigo_empleado;
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
    cout<<"Ingrese el codigo del empleado: ";
    cin>>codigo_empleado;
    cout<<"Ingrese el cargo del empleado: ";
    cin>>cargo;

    Empleado obj= Empleado(nombres,apellidos,direccion,fechanacimiento,telefono,codigo_empleado,cargo);
    obj.mostrar();

    cout<<"Ingrese el nuevo codigo empleado: ";
    cin>>codigo_empleado;
    obj.setCod(codigo_empleado);
    obj.mostrar();
    cout<<"Apellido del Cliente: "<<obj.getApe();
}
