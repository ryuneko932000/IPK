#include <iostream>
#include <string>


void collatz(int number){
    int counter = 0;
    std::cout << "\033[91mStart Nummer: \033[0m" << number << std::endl;
    do {
        if (number % 2 == 0){
            number = number / 2;
            counter = counter + 1;
            std::string counterString = std::to_string(counter);
            std::cout << "\033[91mSchritt \033[0m" << "\033[91m" << counterString << ". " <<"\033[0m" << number << std::endl;
    
            
        } else if (number % 2 != 0){ 
            number = number * 3 + 1;
            counter = counter + 1;
            std::string counterString = std::to_string(counter);
            std::cout << "\033[91mSchritt \033[0m" << "\033[91m" << counterString << ". " <<"\033[0m" << number << std::endl;
    
            
        }
    } while ( (number != -17) && (number != -5) && (number != -1) && (number != 0) && (number != 1) ) ;
    std::cout << "\n\033[1;4;33mErgebnis: \033[0m" << number << std::endl;
    
}

int fibonacci(int number){

    std::cout << "\033[92mGegebene N für Fibonacci: \033[0m" << number << std::endl;
    unsigned long int n1 = 0, n2 = 1 , next = 0;

    for (int i = 1; i <= number; ++i){
    
        if (i == 1){
            std::cout << "\n\033[1;4;33mErgebnis: \033[0m" << std::endl;
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

        if (i == number){
            std::cout << next << "." << std::endl;
        } else {
            std::cout << next << ", ";
        }
    }
    return 0; 
}

int iterative(int q , int n){
    if(n < 0){
        std::cerr << "\033[1;4;41mZahl für Potenz nicht gültig!\033[0m" << std::endl; 
        return 1;
    }
    
    
    int potenz = q;
    
    for(int i = 1; i < n; ++i){
        std::cout << "\033[33mSchritt \033[0m" << "\033[33m" << i << ". " <<"\033[0m" << q << std::endl;
        q = q * potenz;
    }
    std::cout << "\033[1;4;33mEndprodukt: \033[0m" << q << std::endl; 
    return 0;
}

int recursive(int q, int n ){
    if(n==0){ 
        return 1;
    } else if(n < 0){
        std::cerr <<"nan" <<"\n\n\033[1;4;41mZahl für Potenz nicht gültig!\033[0m" << std::endl; 
        return 1;
    }
    unsigned long long int end = (q*recursive(q, n-1));
    return end;
}

int potenz(){
    std::cout << "\033[1;4;33m--------------- Potenz 1.0 --------------\033[0m" << std::endl;
    std::cout << "\n\033[93mBitte wählen Sie: \033[0m" << std::endl;
    std::cout << "\n\033[93m1. Iterative: \033[0m" << "\n\033[93m2. Recursive: \033[0m" << std::endl; 
    int option;
    std::cout << "Selektion: ";
    std::cin >> option;
    if (option == 1){
        std::cout << "\n\033[1;4;33m--------------- ITERATIVE MODE --------------\033[0m" << std::endl;
        int q;
        int n; 
        std::cout << "\n\033[93mGeben sie eine Zahl: \033[0m";
        std::cin >> q;
        std::cout << "\n\033[93mGeben sie eine Potenz: \033[0m";
        std::cin >> n;
        iterative(q, n);
    } else if (option == 2) {
        std::cout << "\n\033[1;4;33m--------------- RECURSIVE MODE --------------\033[0m" << std::endl;
        int q;
        int n; 
        std::cout << "\n\033[93mGeben sie eine Zahl: \033[0m";
        std::cin >> q;
        std::cout << "\n\033[93mGeben sie eine Potenz: \033[0m";
        std::cin >> n;
        std::cout << "\033[1;4;33mEndprodukt: \033[0m" << recursive(q,n) << std::endl;
    } else {
        std::cerr << "\033[1;4;41mBitte schreiben Sie eine gültige Zahl!\033[0m" << std::endl;
        return 1;
    }
    return 0;
}

int main(){
    std::cout << "\n\033[1;4;37mBitte geben Sie eine Nummer ein, um das zu verwendende Programm zu bestätigen:\033[0m\n" << std::endl;
    std::cout << "\033[31m1. Collatz\033[0m" << std::endl << "\033[32m2. Fibonacci\033[0m" << std::endl << "\033[33m3. Potenz\033[0m" << std::endl;
    int option; 
    std::cout << "\n\033[1;4mSelektion:\033[0m ";
    std::cin >> option; 

    // Collatz 
    if(option == 1){
        
        std::cout << "\033[1;4;31m--------------- Collatz 1.0 --------------\033[0m" << std::endl;
        std::cout << "\n\033[31mGeben Sie ein Nummer ein: \033[0m";
        int x;
        std::cin >> x;
        collatz(x);
    }

    // Fibonacci 
    else if (option == 2){
        int x; 
        std::cout << "\033[1;4;32m--------------- Fibonacci 1.0 --------------\033[0m" << std::endl;
        std::cout << "\n\033[32mGeben Sie eine Zahl als Endpunkt ein:  \033[0m";
        std::cin >> x;
        fibonacci(x);
        return 0; 
    }

    // Potenz 
    else if (option == 3){
        potenz();
    }
    
    // End of query 
    else {
        std::cout << "\033[1;4;41mBitte schreiben Sie eine gültige Zahl!\033[0m" << std::endl;
    }
}