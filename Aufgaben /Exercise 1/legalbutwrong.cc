#include <iostream>

int main(int argc, char** argv){
    int n = 10;
    // calculate the sum of all numbers from 1 to n. 
    int i = 1;
    int sum = 0; 
    for ( ; i <= n ; i = i+1){
        sum = sum + i;
    }
    std::cout << sum << std::endl; 
    return 0;
}
