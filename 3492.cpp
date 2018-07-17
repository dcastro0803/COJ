/*
input = test cases # and N number of women and men
process = # possible pairs
output = # possible pairs

ANALYZE BETTER
    // It is a combination when you hav
    4 options , then 3 options, and so on
*/

#include <iostream>

using namespace std;

void processCases (short int NumCases){
    short int NumPairs;
    int Res = 1;
    for(short int i = 0; i < NumCases; i++){
        cin >>NumPairs;
        for(short int x = 1; x <= NumPairs; x++){
            Res *= x;
        }
        cout << "Case #" << i+1 << ": " << Res <<endl;
        Res = 1;
    }
}


int main()
{
    short int NumCases = 0;

    cin >> NumCases;

    processCases(NumCases);

    return 0;
}
