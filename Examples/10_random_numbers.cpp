// print '10' random numbers
// without 'srand' !!

#include "iostream"
#include "stdlib.h"
using namespace std;

int main() 
{ 
    for(int j=1; j<=10; ++j)
    {
        cout << rand() << "\n"; 
    }
  
    return 0; 
}
