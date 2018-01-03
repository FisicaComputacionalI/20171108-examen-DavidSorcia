//Autor: David Sorcia Hernandez
//El programa empieza con x=1 viendo que cumpla x<=5, como lo cumple, ahora verifica que la division entre 3 sea posible
//al no cumplirlo la consola mostrara el valor de x actual, de alli se le suma 2 y regresamos al ciclo
//x aun es menor o igual a 5 pero esta vez la division nos da un entero llevandonos a una suma mas 2 sin imprimir el valor de x
//repetimos el ciclo donde ahora la division no es posible imprimiendo el valor de x, se le suma 2 mas, ahora como x vale 7 el programa finaliza

#include <iostream>

using namespace std;

int main(){
    int x=1;

    //Este do no tiene sentido y hace que tu programa nunca termine de ejecutarse. 
    //    do{
    while(x<=5)
    if ((x%3)==0){
        x=x+2;
    }
    else{
        cout << "El valor de x es =" << x << endl;
        x=x+2;
    }
    //}while (x>5);

    return 0;
}
//los valores finales impresos seran 1 y 5
