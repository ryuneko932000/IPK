#include <iostream>
#include <cmath>
#include <string>

// Benutzen Sie "-std=c++11" als Flag im Terminal. 

int main(){
    double a;
    double b;
    double c;

    std::cout << "Write the first coefficient (x1): "; 
    std::cin >> a; 
    std::cout << "Write the second coefficient (x2): ";
    std::cin >> b; 
    std::cout << "Write the third coefficient (x3): ";
    std::cin >> c; 
    double root    = sqrt(pow(b, 2) - 4*a*c);
    double answer1 = (-b + root)/(2*a);
    double answer2 = (-b - root)/(2*a);

    if ((a == 0 && b == 0)){
        
        std::string KB; 
        std::cout << "Your first two coefficients are zero, this will run into an error!" << std::endl; 
        std::cout << "Press CTRL-C to quit or enter any key to continue:" << std::endl;
        std::cin >> KB;

    }

    if (sqrt(pow(b, 2) - 4*a*c < 0)){
        std::string KB;
        std::cout << "The chosen numbers will run an imaginary result..." << std::endl; 
        std::cout << "Press CTRL-C to quit or enter any key to continue: " << std::endl; 
        std::cin >> KB; 
    }

    std::cout << "First Root: " << answer1 << std::endl; 
    std::cout << "Second Root: " << answer2 << std::endl; 

}