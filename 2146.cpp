/*
input: vertices and diagonals
Process: if correct # diagonals yes else no
output: yes or no


Function:
    process diagonals
    UNoptimized: optimize with better approach
*/

#include <iostream>

using namespace std;


void processDiag(unsigned long int vert, unsigned long long int diag){
    unsigned long long int total = 0;
    unsigned long int incr = 2;
    for(int i = 3; i < vert; i++){
        total += incr;
        incr++;
    }

    (total == diag ? cout << "yes" <<endl :cout << "no" <<endl );

}

// optimized version
void processDiagOpt(unsigned long long int vert, unsigned long long int diag){
    unsigned long long int total = 0;

    total = (vert*(vert-3)/2);

    (total == diag ? cout << "yes" <<endl :cout << "no" <<endl );

}



int main()
{
    unsigned long long int diag; // order 18
    unsigned long long int vert;
    cin >> diag >> vert;
    processDiagOpt(vert, diag);

    return 0;
}
