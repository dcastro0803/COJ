/*
input Vector size N , 2 vectors with size N
process: Check lowest combination
Output: lowest # possible



start practicing with dynamic programming
function:
    determine lowest of 2 vectors
*/



#include <iostream>
#include <algorithm>

using namespace std;

// important  & to allocate correctly the values
void addValues(int * &vect, short int tSize){
    vect = new int[tSize];
    for(short int i = 0; i < tSize; i++){
        cin >> vect[i];
    }
}

int exchangeVectorCross(int *vect1, int *vect2, short int tSize){
    short int tam = tSize;
    int total = 0;
    for(short int i = 0; i < tSize/2; i++){
        total += vect1[i] * vect2[tam-1];
        total += vect1[tam-1] * vect2[i];
        tam--;
    }
    if(tSize % 2 != 0){
        total += vect1[tSize/2] * vect2[tSize/2];
    }
    return total;

}

// A function to implement bubble sort
void bubbleSort(int *arr, int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(arr[j], arr[j+1]);
}

// main program
int main()
{
    short int vSize = 0;
    int *Vect1, *Vect2;

    cin >>vSize;

    addValues(Vect1, vSize);
    addValues(Vect2, vSize);

    bubbleSort(Vect1, vSize);
    bubbleSort(Vect2, vSize);

    cout << exchangeVectorCross(Vect1, Vect2, vSize) <<endl;

    delete [] Vect1;
    delete [] Vect2;

    return 0;
}
