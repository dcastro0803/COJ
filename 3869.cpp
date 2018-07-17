#include <iostream>
#include <cmath>

using namespace std;

// problem floors with numbers 1 second per floor starting and ending
// it starts and ends in the first floor
unsigned short int calculate (unsigned short int num, unsigned short int &cont,unsigned short int &ant ){
    unsigned short int aux = 0;
    if(!cont){
        cont++;
        ant = num;
        return num -1;
    }  //(cont > 0 && cont < num-1)
    else {
        cont++;
        aux = ant;
        ant = num;
        return abs(num -aux);
    }

}

// depending of the number of instructions calculate
int main()
{
    unsigned short int num = 0, dat = 0, res = 0, cont = 0, ant = 0;
    cin >> num;
    for (unsigned short int i = num; i >= 1; i--){
        cin >> dat;
        res += calculate(dat,cont, ant);
    }
    res += ant -1;
    cout << res <<endl;
    return 0;
}
