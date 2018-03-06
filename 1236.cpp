/*
input: number calm or agrressive 2 dogs and arrival 3 people
process: less than time determines if it is in the range of calm por agreesive
output: attack by none, one or both

function
*/

#include <iostream>

using namespace std;
// determine if it was attacked by one dog
bool attacked (short int start, short int fin, short int arri){
    short int cont = 0;
    while(cont < arri){
        cont += start;
        if(arri <= cont){
            return true;
        }
        cont += fin;
        if(arri <= cont){
            return false;
        }
    }
}

// determines how many dogs attacked someone depending on user input
string attackedQuantity(short int a, short int b, short int c, short int d, short int p){
    bool val1, val2;
    string result = "none";

    val1 = attacked(a,b,p);
    val2 = attacked(c,d,p);// first agressive

    (val1 && val2? result = "both":(val1 || val2? result="one": result="none"));
    return result;
}


// determine how many dogs attacked someone depending of their arrival
int main()
{
    //input
    short int a, b, c, d;
    short int p1, p2, p3;
    //process
    cin >> a >> b >> c >> d;
    cin >> p1 >> p2 >> p3;

    cout << attackedQuantity(a,b,c,d,p1)<<endl;
    cout << attackedQuantity(a,b,c,d,p2)<<endl;
    cout << attackedQuantity(a,b,c,d,p3)<<endl;

    return 0;
}
