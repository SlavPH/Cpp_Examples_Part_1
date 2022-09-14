// Take 10 float number and make array and print the sum of elements


#include "iostream"
#include "iomanip" 
using namespace std;

int main() 
{
    const int arrsize = 10; 
    float x[arrsize], tot=0.0; 
  
    for(int j=0; j<arrsize; j++) 
    {
        cout << "Enter the x " << j + 1 << " : "; 
        cin >> x[j]; 
    }

    for(int j=0; j<arrsize; j++)
    {
        cout << setiosflags(ios::fixed | ios::showpoint) 
             << setw(12) 
             << setprecision(2) 
             << x[j] 
             << endl; 
    }
  
    for(int j=0; j<arrsize; j++) /
    {
        tot += x[j]; 
    }

    cout << "The sum of elements is : " << tot << endl; 
    return 0; 
}
