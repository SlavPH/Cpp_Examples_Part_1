// print '10' random numbers
// with 'srand' !!


#include "iostream"
#include "stdlib.h" 
using namespace std;

int main() // main function
{
    unsigned seed; 
    cout << "Enter the seed value : "; 
    cin >> seed; 
    srand(seed); 
  
    for(int j=1; j<=10; ++j) 
    {
        cout << rand() << "\n";
    }
   
  return 0; 
}
