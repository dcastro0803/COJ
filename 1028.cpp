
/*
input: pairs 2 words max 20 pairs
process: find substring
Output: is there message

function
    read file, while reading you must check it to void storing

    execute
    find substring
*/

#include <iostream>
#include <string>

using namespace std;

// EOF doesn't mean file
// no importa si se pasa en string, en arreglo si
bool findSubstring(string n1, string n2){
    char c1 = n1[0];
    short int contText = 0;
    int n2total = n2.length();

    for(short int x = 0; x < n2total; x++){
        if(c1 == n2[x]){
            contText++;
            c1 =n1[contText];
        }
    }
    return (contText < n1.length() ? false: true);
}



// read string to determine if there is a substring
int main()
{
    //input
    string x = "", y="";
    short int cont = 0;
    //process
    while (cin >> x >> y){

        (findSubstring(x, y) ? cout << "Yes"<<endl: cout << "No"<<endl);
        cont++;
    }
    //output

    return 0;
}
