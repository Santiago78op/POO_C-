# Programacion Orientada a Objetos

<details id=1 open>
<summary><h2>¿Que es un Objeto?</h2></summary>

 - Un Objeto es la representación de cosas del mundo fisico con una estructura 
interna la cual abstraemos con propeidades y métodos los cuales le dan una utilidad
y funcinalidad al mismo.

</details>

<details id=2 open>
<summary><h2>¿Que es un Atributo o Propiedad?</h2></summary>

<ul>
<br>    <li>Los atributos son las características o propiedades que definen a un objeto.</li>
<br>    <li>Puedes pensar en ellos como las “variables” de la clase. Por ejemplo, en una clase que representa un teléfono, los atributos podrían ser la marca, el modelo, el color y el tamaño.</li>
<br>    <li>Cada objeto creado a partir de esa clase (cada teléfono que “fabricamos” con nuestro molde) puede tener diferentes valores para estos atributos.</li>
</ul>

</details>


<details id=3 open>
<summary><h2>¿Que es un Metodo?</h2></summary>

<ul>
<br>    <li>Los métodos son como las funciones de la clase. Representan las acciones que los objetos pueden realizar.</li>
<br>    <li>Siguiendo con nuestro ejemplo del teléfono, algunos métodos podrían ser <em><strong>hacerLlamada(), enviarMensaje() o tomarFoto()</strong></em>.</li>
<br>    <li>En resumen, los atributos son las características que distinguen a un objeto de otro, mientras que los métodos son las acciones que puede realizar un objeto. Juntos, dan vida a nuestros objetos, haciéndolos únicos y funcionales.</li>
</ul>

</details>

<details id=4 open>
<summary><h2>Ejemplo de Objeto</h2></summary>

```c++
class atleta {

    // atributos
    int energia;
    int velocidad;
    char nombre[15];
    float telefono;

    // metodos
    void aumentoVelocidad(){
      velocidad++;
      energia--;
    };
};
```

</details>

<details id=5 open>
<summary><h2>Constructor</h2></summary>

- Un constructor es una función especial que se utiliza para crear un nuevo objeto o 
instancia de una clase.
  - Inicializan el objeto y asignan valores iniciales a sus atributos.
  - Se invocan automáticamente cuando se crea un nuevo objeto a partir de una clase.
  - Son métodos que se ejecutan al crear un objeto de una clase específica.

</details>

<details id=6 open>
<summary><h2>Creación de un Constructor</h2></summary>

- Siempre se declara con el mismo nombre de la clase.
- Todo lo que esta declarado dentro de un objeto es privado, por lo tanto no se puede acceder
desde fuera al objeto.
```c++
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class atleta {

    // atributos
    int energia;
    int velocidad;
    char nombre[15];
    float telefono;

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

    // metodos
    void aumentoVelocidad(){
      velocidad++;
      energia--;
    };
    
};
```

</details>

<details id=7 open>
<summary><h2>Encapsulamiento</h2></summary>

- El encapsulamiento en programación es el proceso de ocultar o proteger los datos 
  y las operaciones de un objeto de manera que sólo se puedan acceder o modificar 
  mediante los métodos definidos para ese objeto.

</details>

<details id=8 open>
<summary><h2>Ejemplo Encapsulamiento</h2></summary>

```c++
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class atleta {

private:
    // atributos
    int energia;
    int velocidad;
    char nombre[15];
    float telefono;

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

    // metodos
    void aumentoVelocidad(){
      velocidad++;
      energia--;
    };

    // metodo para devolver un atributo encapsulamiento
    int getVelocidad() { return velocidad };
};
``` 

</details>

<details id=9 open>
<summary><h2>Metodos Get y Set</h2></summary>

- En programación, los métodos get y set se utilizan para obtener y almacenar valores de
  variables.
  -  El método get se utiliza para ***obtener o recuperar el valor de una variable concreta de una clase***.
  -  El método set se utiliza para ***almacenar las variables***.

Los métodos get y set son simples métodos que usamos en las clases para mostrar (get) o 
modificar (set) el valor de un atributo.

```c++
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class atleta {

private:
    // atributos
    int energia;
    int velocidad;
    char nombre[15];
    float telefono;

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

    // metodos
    void aumentoVelocidad(){
      velocidad++;
      energia--;
    };

    // metodo para devolver un atributo encapsulamiento
    // metodos set and get
    int getVelocidad() { return velocidad };
    int getEnergia() { return energia };
    char* getNombre() { return nombre; }

    void setVelocidad( int valocidad ) {
        velocidad = 36;
    };

    void setEnergia( int energia ){
      energia = 50;
    };

    void setNombre( char n[15] ){ strcpy_s(nombre, n);  }
    
    void todosLosAtributos(){
      cout << "Nombre:    " << name;
      cout << "Energia:   " << energia;
      cout << "Valocidad: " << velocidad;
    };
};
``` 

</details>

<details id=10 open>
<summary><h2>Seguridad en Datos Privados</h2></summary>

- La seguridad de los datos se centra en proteger los datos contra el acceso no autorizado
  y el uso indebido. Para las organizaciones, la práctica de la seguridad de los datos es
  en gran medida la implementación de controles para evitar que los piratas informáticos
  y los usuarios internos manipulen los datos.

</details>

<details id=11 open>
<summary><h2>Destructor</h2></summary>

- Los destructores son una parte importante de la programación orientada a objetos. 
  Nos permiten liberar recursos de manera automática y realizar tareas de limpieza 
  antes de que un objeto sea eliminado o destruido. Al utilizar destructores, podemos 
  evitar fugas de memoria y problemas de gestión de recursos en nuestro código.
    
    - En lenguajes como C++ o C#, los destructores se definen utilizando el símbolo “~” 
      seguido del nombre de la clase. Estos métodos se ejecutan automáticamente cuando un
      objeto está siendo eliminado, ya sea porque su ciclo de vida ha terminado o porque
      se está liberando la memoria asignada a ese objeto.
  
    - Los destructores se emplean especialmente para liberar recursos que han sido asignados
      dinámicamente durante la vida útil de un objeto. Ejemplos de estos recursos incluyen 
      archivos abiertos, conexiones a bases de datos o memoria asignada dinámicamente.
  
    - El destructor se encarga de cerrar archivos, desconectar bases de datos o liberar 
      memoria antes de que el objeto sea destruido o eliminado.

Para la variable el compilador liberaq la memoria al final, meintras que el objeto se 
debe eliminar de manera manual.
```c++
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class atleta {

private:
    // atributos
    int energia;
    int velocidad;
    char nombre[15];
    float telefono;

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

    // metodos
    void aumentoVelocidad(){
      velocidad++;
      energia--;
    };

    // metodo para devolver un atributo encapsulamiento
    // metodos set and get
    int getVelocidad() { return velocidad };
    int getEnergia() { return energia };
    char* getNombre() { return nombre; }

    void setVelocidad( int valocidad ) {
        velocidad = 36;
    };

    void setEnergia( int energia ){
      energia = 50;
    };

    void setNombre( char n[15] ){ strcpy_s(nombre, n);  }
    
    void todosLosAtributos(){
      cout << "Nombre:    " << name;
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
    delete Michael;
    return 0;
};
```

</details>
