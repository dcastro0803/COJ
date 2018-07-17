/*
input : n with # of words x to follow
process: process x lines of text if they are +10 characters
output: processed word with abbreviation

*/

#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;
// processing Text
string processText(string s){
    string text = "";
    ostringstream convert;
    if(s.length() > 10){
        text+= s[0];
        convert << s.length()-2;
        text += convert.str();
        text+= s[s.length()-1];
    } else{
        text = s;
    }
    return text;
}
int main()
{
    unsigned short int num = 0;
    string text = "";
    cin >> num;
    for(unsigned short int i = num; i >= 1; i--){
        cin >> text;
        cout << processText(text) <<endl;
    }
    return 0;
}
