// queue::push/pop

#include <iostream>
#include <list>
#include <fstream>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include "Contacto.h"
#include "Evaluador.h"
#include "NodoBinario.h"

using namespace std;

//Escribe los datos del objeto contacto (dado) en un archivo binario con el nombre dado en la posicion dada
//Nota: Se deben poder agregar varios contactos en un solo archivo
void escribir(string nombre_archivo, Contacto*contacto, int posicion)
{
    ofstream out(nombre_archivo.c_str(),ios::in);
    out.seekp(28*posicion);
    out.write(contacto->nombre.c_str(),12);
    out.write(contacto->correo.c_str(),12);
    out.write((char*)&contacto->numero,4);
    out.close();
}

//Devuelve un contacto previamente escrito (con la funcion escribir()) en un archivo binario con nombre dado en la posicion dada
//Nota: Se deben poder leer varios contactos de un solo archivo
Contacto* leer(string nombre_archivo, int posicion)
{
    ifstream in(nombre_archivo.c_str());
    char nombre[12];
    char correo[12];
    int numero;
    in.seekg(28*posicion);
    in.read(nombre,12);
    in.read(correo,12);
    in.read((char*)&numero,4);
    in.close();

    Contacto *c = new Contacto(nombre,correo,numero);
    return c;
}

//Devuelve un vector que contenga todos los nombres de los contactos previamente ingresados en el archivo con nombre dado
vector<string> getNombres(string nombre_archivo)
{
    vector<string>nombres;
    ifstream in(nombre_archivo.c_str());
    int posicion=12;
    string n;
    while(!in.eof())
    {
        char nombre[12];


        return nombres;
    }

    return nombres;
}

//Devuelve true si valor_buscado (dado) se encuentra dentro de mi_cola (dada), de lo contrario devuelve false
bool existe(queue<char> mi_cola, char valor_buscado)
{
    while(!mi_cola.empty())
    {
        if (mi_cola.front()==valor_buscado)
            return true;
        mi_cola.pop();
    }
    return false;
}

//Devuelve true si valor (dado) existe dentro de mi_set (dado)
bool existe(set<int> mi_set,int valor)
{
   if(mi_set.find(valor)!=mi_set.end())
        return true;
    return false;
}

//Devuelve una lista inversa de mi_lista (dada)
list<double> invertir(list<double>mi_lista)
{
    list<double> invertida;
    for(list<double>::iterator i=mi_lista.begin(); i!=mi_lista.end();i++)
    {
        invertida.push_front(*i);
    }

    return invertida;
}

//Devuelve la cantidad de nodos que contiene un arbol con raiz dada
int contar(NodoBinario* raiz)
{
}

//Cambia todos los valores de un arbol con raiz dada
void cambiarValores(NodoBinario* raiz,int nuevo_valor)
{
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}

