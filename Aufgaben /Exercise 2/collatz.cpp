#include <iostream>

void collatz(int number){
    int counter = 0;
    std::cout << "Start Nummer: " << number << std::endl;
    do {
        if (number % 2 == 0){
            number = number / 2;
            counter = counter + 1;
            std::cout << "Schritt " << counter << ". " << number << std::endl;
    
            
        } else if (number % 2 != 0){ 
            number = number * 3 + 1;
            counter = counter + 1;
            std::cout << "Schritt " << counter << ". " << number << std::endl;

            
        }
    } while ( (number != -17) && (number != -5) && (number != -1) && (number != 0) && (number != 1) ) ;
    std::cout << "End Nummer: " << number << std::endl;
    
}

int main(){
    std::cout << "Geben Sie ein Nummer ein: ";
    int x;
    std::cin >> x;
    collatz(x);
}