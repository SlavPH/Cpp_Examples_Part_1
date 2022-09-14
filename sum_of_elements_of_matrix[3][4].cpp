// take matrix[3][4] and prints the sum of elements

#include "iostream"
#include "curses.h"
// use 'conio.h' if you are using windows ! mine is linux, so i'm using 'curses.h' 
// #include "conio.h"

using namespace std;

int main() 
{
    float x[3][4]; 
    float total=0.0; 
    int i,j;

 
    for(i=0; i<3; ++i) 
    {
        for(j=0; j<4; j++) 
        {
            cout << "Enter the x " << i+1 << j+1 << " : "; 
            cin >> x[i][j]; 
        }
    }

  
    for(i=0; i<3; ++i) 
    {
        for(j=0; j<4; j++) 
        {
            total += x[i][j]; 
        }
    }

    cout << "Total : " << total << endl;
    return 0; 
}
