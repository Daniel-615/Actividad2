#include "Persona.cpp"
#include <iostream>
#include <string.h>
using namespace std;
class Empleado: Persona{
    private: string puesto; int codigo_empleado;
    //constructor
    public:
        Empleado(){
        }
        Empleado(string nom,string ape,string dir,string fecha_nacimiento,int telefono,int codigoempleado,string cargo):Persona(nom,ape,dir,fecha_nacimiento,telefono){
        codigo_empleado=codigoempleado;
        puesto=cargo;
        }
        void mostrar(){
            cout<<"==============="<<endl;
            cout<<nombre<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fechanacimiento<<","<<codigo_empleado<<","<<puesto<<endl;
        }
        void setNombres(string nom){
            nombre=nom;
        }
        void setApellidos(string ape){
            apellidos=ape;
        }
        void setDir(string dir){
            direccion=dir;
        }
        void setApellidos(int tel){
            telefono=tel;
        }
        void setCod(int codigoempleado){
            codigo_empleado=codigoempleado;
        }
        void setCargo(string cargo){
            puesto=cargo;
        }

        //get
        string getNombres(){
            return nombre;
        }
        string getApe(){
            return apellidos;
        }
        string getdir(){
            return direccion;
        }
        int getTel(){
            return telefono;
        }
};
