/*
Dias del mes
12/06/2021
*/

#include <iostream>
#include <Cassert>

int Ano (int);
double Mes (double,int);

int main () {

    std::cout << Mes(2,134);
assert(Mes(3,2021) == 31);
assert(Mes(6,2021) == 30);
assert(Mes(2,2021) == 28);
assert(Mes(1,1932) == 31);
};


/*
se verifica si el año es bisiesto

¿No deberia ser:
bool Ano (unsigned A)  {return
A%4 == 0 and (A%100 != 0 or A%400 == 0);    ? si es verdadera va a retornar directamente 1, asi que quizas convengan cambiar la fila 45 por "Ano (A) == 1 ? 29 :"
o creo habria que modificarla de alguna otra forma, ya que por ej el 1900 no fue bisiesto, pero es divisble por 4, ahi la formula que está entiendo que lo consideraria bisiesto.
Podriamos meter unos assert para verificar esta formula tambien.
La llamaria esBisiesto para que saber que es lo que se busca
*/
int Ano (int A)  {return 
    A%4 == 0 ? 0 :
    A%100 == 0 and A%400 == 0 ? 0  :
    1 ;
    };
/*
Se verifica cuantos dias tiene el mes

¿Los tipos de datos no deberian ser unsigned?
Nombrar la funcion como getDiasDelMes
*/
double Mes (double M, int A){ return
    M == 1 or M==3 or M==5 or M==7 or M==8 or M==10 or M==12 ? 31:
    M == 4 or M==6 or M==9 or M==11 ? 30 :
    Ano (A) == 0 ? 29 : 
    28;

};
