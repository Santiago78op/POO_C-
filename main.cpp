#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class atleta {

private:
    float telefono;

private:
    // atributos
    int energia;
    int velocidad;
    char nombre[15];

    // constructor por defecto
public:
    atleta(){
        energia   = 100;
        velocidad = 0;
        strcpy_s(nombre, "Julian");
    };

    // constructor personalizado
    atleta(int e, int v, char n[15]){
        energia = e;
        velocidad = v;
        strcpy_s(nombre, n);
    };

    // destructor
    ~atleta(){ cout << "Limpiando Memoria"; };

    // metodos
    void aumentoVelocidad(){
      velocidad++;
      energia--;
    };

    // metodo para devolver un atributo encapsulamiento
    // metodos set and get
    int getVelocidad() { return velocidad; };
    int getEnergia() { return energia; };
    char* getNombre() { return nombre; }

    void setVelocidad( int valocidad ) {
        velocidad = 36;
    };

    void setEnergia( int energia ){
      energia = 50;
    };

    void setNombre( char n[15] ){ strcpy_s(nombre, n);  }

    void todosLosAtributos(){
      cout << "Nombre:    " << nombre;
      cout << "Energia:   " << energia;
      cout << "Valocidad: " << velocidad;
    };
};

int main() {
    char aux[15];
    // Creamos un nuevo objeto altleta
    strcpy_s(aux, "U, Bolt");
    atleta Bolt(80,20,aux);

    //Creamos otro objeto atleta
    strcpy_s(aux, "M, Phell");
    atleta* Michael = new atleta(30,15, aux);
    Michael -> todosLosAtributos();

    return 0;
}
