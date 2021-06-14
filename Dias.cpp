/*
Dias del mes
12/06/2021
*/

#include <iostream>
#include <Cassert>

int Ano (int);                  //creo que habria que usar el tipo de dato unsigne, tanto para los datos de entrada como de salida
double Mes (double,int);        //se habia dicho de llamar la funcion getDiasDelMes para que sea más sencillo saber que hace

int main () {

    std::cout << Mes(2,134);
assert(Mes(3,2021) == 31);
assert(Mes(6,2021) == 30);
assert(Mes(2,2021) == 28);
assert(Mes(1,1932) == 31);
};


/*
se verifica si el año es bisiesto
*/
int Ano (int A)  {return                    //La expresion matematica
    A%4 == 0 ? 0 :
    A%100 == 0 and A%400 == 0 ? 0  :
    1 ;
    };
/*
Se verifica cuantos dias tiene el mes
*/
double Mes (double M, int A){ return                                        //Habria que poner un assert para asegurar que el año sea mayor a 1582?
    M == 1 or M==3 or M==5 or M==7 or M==8 or M==10 or M==12 ? 31:
    M == 4 or M==6 or M==9 or M==11 ? 30 :
    Ano (A) == 0 ? 29 : 
    28;

};
