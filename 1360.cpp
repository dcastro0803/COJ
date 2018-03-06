/*
input: numerator & denominator (10^20)
process: calculate all integers until % == 0
output list of integers

function :
    calculate integers series until 0 0
*/


#include <iostream>

using namespace std;

// calculate continued fraction
void calculate(unsigned long long num, unsigned long long den){
    unsigned long long  total = 10;
    unsigned long long aux = 0;
    int a = 0;
    cout << num << "/" << den << "=[";
    while(num % den != 0){
        total = num / den;
        aux = den;
        den = num - den * total;
        num = aux;
        cout << total << ",";
        //cout << " " << num << " " << den <<endl;
        //cin >> a;
    }
    total = num / den - 1;
    cout << total << ",1]" <<endl;
}

// iterate until 0 0 as input
// determine the continued fraction from each input until 0 0
int main()
{
    unsigned long long x = 1, y = 1;

    // solve cycle OK
    while(x != 0){
        cin >> x >> y;
        if (x == 0 && y == 0 ){
            return 0;
        }
        //(x == 0 && y == 0 ? return : );
        calculate(x, y);
    }

    return 0;
}
