
/*
input: groups and word nmultiple of Groups
process: reverse each group
Output: entire word reversed

function
    read file, while reading you must check it to void storing

    execute
    find substring
*/


#include <iostream>
#include <string>

using namespace std;
// change 1 string the order
void changeSubstring(string &x, int ini, int fin, int camb){
    char aux;
    for(int i = ini; i < fin; i++){
        aux = x[i];
        x[i] = x[camb];
        x[camb] = aux;
        camb--;
    }
}

// change each of the groups defined by the user
// changes the order of the words of each substring
string changeDependingGroups(string x, int groups){
    int tam = x.length()/groups;
    int ini = 0, fin=0, cambio=0;
    for(int g = 0; g < groups; g++){
        ini = tam*(g);
        fin = (tam*(g+1)+tam*g)/2;
        cambio = tam*(g+1)-1;
        changeSubstring(x,ini,fin,cambio);
    }
    return x;
}

int main()
{
    //input
    string x = "";
    short int groups = 0;
    short int cont = 0;
    //process
    while (cin >> groups >> x){
        if(groups == 0){
            break;
        }
        cout << changeDependingGroups(x, groups)<<endl;
    }

    return 0;
}
