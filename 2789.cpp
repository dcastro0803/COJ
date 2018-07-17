/*
input: string with number separated +1
process:

*/

#include <iostream>
#include <queue>
#include <string.h>
#include <cstdlib>

using namespace std;


// just to start is NOT USED
void showReorder (string text){
    string t = text;
    int iBef = 0;
    for(int i = 0; i < text.length(); i++){
        if(text[i] == '+'){
            t = t.substr(iBef, (i- iBef));
            cout << t <<endl;
            iBef = i +1;
            t = text;
        }
    }
    cout << t.substr(iBef, (t.length() - iBef)) <<endl;
}

// Store numbers in a list ordering from - to +
priority_queue<int, vector<int>, greater<int> > storeNumbers (string text){
    string t = text;
    int iBef = 0;
    priority_queue <int, vector<int>, greater<int> > NumList;
    for(int i = 0; i < text.length(); i++){
        if(text[i] == '+'){
            t = t.substr(iBef, (i- iBef));
            NumList.push(atoi(t.c_str()));
            iBef = i +1;
            t = text;
        }
    }
    t = t.substr(iBef, (t.length() - iBef));
    NumList.push(atoi(t.c_str()));

    return NumList;
}

// show the numbers in the correct order from - to +
void showNumList(priority_queue <int, vector<int>, greater<int> > NumList){
    short int tam = NumList.size()-1;
        // using NumList.size() will make it change every time to a smaller size
    for(short int i = 0; i < tam; i++){
        cout << NumList.top();
        NumList.pop();
        cout << "+";
    }
    cout << NumList.top() <<endl;
}

int main()
{
    string  text;
    priority_queue <int, vector<int>, greater<int> > NumList;
    cin >> text;

    NumList = storeNumbers(text);
    showNumList(NumList);
    return 0;
}
