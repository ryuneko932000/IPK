#include <iostream>
#include <string>
using namespace std;

/* 
Variablen in C++ haben immer einen festen Typ (z.B. int, string, float, etc. )
Bevor eine Variable benutzt werden kann, muss sie deklariert werden!

Verschiedene Möglichkeiten: 

int a = 2
int a(2)
int a {2}

Bei Funktionen werden Variablen in die Funktiondeklaration bestimmt:

void myFunction(variableTyp nameVariable)


Es gibt auch verschiedene Typen von Variablen: 

*/


void print(string msg){
    cout << msg << endl;
}

int main(int argc, char** argv){
    string greeting = "Hello Mac!"; 
    print(greeting);
    return 0;

    
}




