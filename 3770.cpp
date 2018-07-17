#include <iostream>
#include <algorithm>

using namespace std;

// problem you have the size num
// you require the median of the word size num
int main()
{
    unsigned short int num;
    string word = "";
    cin >> num;
    cin >> word;

    sort(word.begin(), word.end());
    cout <<word[num/2] << endl;

    return 0;
}
