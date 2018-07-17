/*
input number to guess from 1 to 1,000,000
process: # attemps for best solution
output: # of guesses

*/

#include <iostream>

using namespace std;

// best approach go in half each time
void maxGuess(unsigned int num){
    unsigned int cont = 0;
    while(num > 0){
        num /= 2;
        cont++;
    }
    cout << cont <<endl;
}

int main()
{
    unsigned int num;
    cin >> num;
    maxGuess(num);

    return 0;
}
