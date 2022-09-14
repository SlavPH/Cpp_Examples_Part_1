// take 10 numbers and sort them in 'Bubble sort' (bigger to smaller)


#include "iostream"
using namespace std;

int main()
{
    float x[10], temp; 
    int i, j; 

    for(i=0; i<10; ++i) 
    {
        cout << "Enter the x " << i + 1 << " : "; 
        cin >> x[i]; 
    }

    for(i=0; i<9; i++) 
    {
        for(j=i+1; j<10; j++) 
        { 
            if(x[i] < x[j]) 
            { 
                temp = x[j];
                x[j] = x[i]; 
                x[i] = temp;
            } 
        }
    }
  
    for(i=0; i<9; i++)
    {
        cout << x[i] << endl; 
    }

    return 0; 
}
