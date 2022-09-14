// print 2 dices with 'srand(seed)'

#include "iostream"
#include "stdlib.h"
using namespace std;

int main() 
{
    unsigned seed, dice1, dice2; 
    cout << "Enter the seed value : "; 
    cin >> seed; 
    srand(seed); 
  
    dice1 = 1 + rand() % 6;
    dice2 = 1 + rand() % 6; 

    cout << "first dice  : " << dice1 << endl; 
    cout << "second dice : " << dice2 << endl; 

    return 0; 
}
