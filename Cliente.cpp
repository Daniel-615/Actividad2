#include "Persona.cpp"
#include <iostream>
using namespace std;
//Nombre de la clase del archivo anterior hereda los atributos
class Cliente: Persona{
    //atributos
    private: string nit;
    //constructor
    public:
        Cliente(){
        }
        Cliente(string nom,string ape,string dir,string fecha_nacimiento, int telefono,string n) :Persona(nom,ape,dir,fecha_nacimiento,telefono){
            nit=n;
        }
        void setNit(string n){
            nit=n;
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

        //get
        string getNit(){
            return nit;
        }
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
        void mostrar(){
            cout<<"==============="<<endl;
            cout<<nit<<","<<nombre<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fechanacimiento<<endl;
        }
};
