#include <iostream>



/* Erklärung: Wenn die Zahl sehr groß ist, z.B. N = 30.000 dann benötigt das Programm mehr Zeit
um alle die Zahlen bis N zu berechnen. */




int fibonacci(int number){
    std::cout << "Gegebene N für Fibonacci: " << number << std::endl;
    int n1 = 0, n2 = 1 , next = 0;

    for (int i = 1; i <= number; ++i){
        if (i == 1){
            std::cout << n1 << ", ";
            continue;
        }
        else if (i == 2){
            std::cout << n2 << ", ";
            continue; 
        }
        next = n1 + n2;
        n1 = n2;
        n2 = next;
        std::cout << next << ", ";
    }
    return 0; 
}

int main(){
    int x; 
    std::cout << "Geben Sie eine Zahl als Endpunkt ein: ";
    std::cin >> x;
    fibonacci(x);
    return 0; 
}