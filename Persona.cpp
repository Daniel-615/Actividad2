#include <iostream>
using namespace std;
class Persona {
    protected:
        string nombre,apellidos,direccion,fechanacimiento;
        int telefono;

    protected: Persona(){
    }
    Persona(string nom,string ape,string direction, string date, int phone){
        nombre=nom;
        apellidos=ape;
        direccion=direction;
        fechanacimiento=date;
        telefono=phone;
    }
    void mostrar();
    //CRUD

    void crear(){
        cout<<"Se encuentra en el metodo crear"<<endl;
    };
    void leer(){
        cout<<"Se encuentra en el metodo leer"<<endl;
    };
    void actualizar(){
        cout<<"Se encuentra en el metodo actualizar"<<endl;
    };
    void eliminar(){
        cout<<"Se encuentra en el metodo eliminar"<<endl;
    };
};
