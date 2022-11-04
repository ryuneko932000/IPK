#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Benutzen Sie "-std=c++11" als Flag im Terminal. 

int main(){
    double a{};
    double b{};
    double c{};

    cout << "Write the first coefficient (x1): "; 
    cin >> a; 
    cout << "Write the second coefficient (x2): ";
    cin >> b; 
    cout << "Write the third coefficient (x3): ";
    cin >> c; 
    double root    {sqrt(pow(b, 2) - 4*a*c)};
    double answer1 {(-b + root)/(2*a)};
    double answer2 {(-b - root)/(2*a)};

    if ((a == 0 && b == 0)){
        
        string KB; 
        cout << "Your first two coefficients are zero, this will run into an error!" << endl; 
        cout << "Enter any key to continue or press CTRL-C to quit" << endl;
        cin >> KB;

    }

    if (sqrt(pow(b, 2) - 4*a*c < 0)){
        string KB;
        cout << "The chosen numbers will run an imaginary result..." << endl; 
        cout << "Press CTRL-C to quit or enter any key to continue: " << endl; 
        cin >> KB; 
    }

    cout << "First Root: " << answer1 << endl; 
    cout << "Second Root: " << answer2 << endl; 

}