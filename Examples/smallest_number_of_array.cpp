// Take 20 numbers and make array and print the smallest number in array


#include "iostream"

using namespace std;

int main() // main function
{
    float x[20], s; 
    int j; 

    for(j=0; j<20; ++j)
    {
        cout << "Enter the x " << j + 1 << " : "; 
        cin >> x[j]; 
    }
    s = x[0];

    for(j=0; j<20; ++j) 
    {
        if(x[j] < s)
        {
            s = x[j];
        }
    }

    cout << "Smallest element is : " << s << endl; 
    return 0; 
}
