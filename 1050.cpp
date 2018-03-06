/*
input: 1 number from 1 to 10^4 = 10,000
process: find all coprimes and count
Output: # coprimes for input

function
    read number and check if coprime, iterate from 1 to N
*/


#include <iostream>

using namespace std;

// find coprime
bool coprime(int nmax, int nmin){
    int num2 = 10;
    while (num2 != 0){
        num2 = nmax % nmin;
        nmax = nmin;
        nmin = num2;
    }
    return nmax == 1;
}

// find how many coprimes has N
int main()
{
    int n;
    int cont = 0;
    cin >> n;

    for (int i = 1; i < n; i++){
        (coprime(n,i) ? cont++ : cont=cont);
    }
    cout << cont <<endl;

    return 0;
}
