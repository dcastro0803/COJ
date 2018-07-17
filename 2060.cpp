/*
input: n museums (1 to 100 include both) and prices (in visiting order) ; end if -1
process: in order so value % 100 then he ask
Output: # times as money

function
    calculate visit , don't store variables,

Should be faster avoiding ternary
*/


#include <iostream>

using namespace std;

// calculate # of visits
void calculateCases(short int cases){
    int value = 0, cont = 0;
    int total = 0;

    for(short int i = 0; i < cases; i++){
        cin >> value;
        total += value;
        if(total % 100 == 0){
            cont++;
        }
    }
    cout << cont <<endl;
}

// iterate until -1 to calculate cases
int main()
{
    short int cases = 0;

    while(cases != -1){
         cin >> cases;
         if(cases != -1){
            calculateCases(cases);
         }
    }
    return 0;
}
