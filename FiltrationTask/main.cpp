//
//  main.cpp
//  FiltrationTask
//
//  Created by Mai Mahmoud on 22.04.25.
//

#include <iostream>
using namespace std;

bool isPrime(int number){
    bool isPrime = true;
    for(int j = 2 ; j <= sqrt(number); j++){
        if(number%j==0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
void PrintThePrimeNumbers(int number){
    if(isPrime(number)){
        cout << number << " ";
    }
}
void calculatePrimeNumberInThisInterval(int start , int end){
    int counter = start+1;
    while(counter< end){
        PrintThePrimeNumbers(counter);
        counter++;
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    int n , m;
    cin >> n >> m;
    calculatePrimeNumberInThisInterval(n, m);
 
    return 0;
}
