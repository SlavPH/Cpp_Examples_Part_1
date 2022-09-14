// print '10' random numbers between '0' and '1'

#include "iostream"
#include "stdlib.h"
using namespace std;

int main() 
{
    unsigned seed;
    cout << "Enter the seed value : "; 
    cin >> seed;
    srand(seed);

    for(int i=1; i<=10; ++i)
    {
        cout << rand() / 32768.0 << endl;
    }
   
    return 0; 
}
