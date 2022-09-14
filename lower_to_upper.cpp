// take lowercase character and change it to uppercase

#include "iostream"
using namespace std;


char low_to_up(char c1)
{
    char c2;
    c2 = (c1 >= 'a' && c1 <= 'z') ? ('A' + c1 - 'a') : c1;
    return c2; 
}

int main() 
{
    char x; 
    cout << "Enter a character : ";
    x = cin.get();
    cout << "Upper : " << low_to_up(x) << endl; 
    return 0; 
}
