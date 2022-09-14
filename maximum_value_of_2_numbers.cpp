// take 2 numbers and print the maximum of 2 value

#include "iostream"
using namespace std;


long int maximum(long int x, long int y)
{
  long int z; 
  z = (x > y) ? x : y; 
  return z;
}

int main()
{
  long int a, b;
  cout << "Enter Two numbers : "; 
  cin >> a >> b;
  cout << "Maximum value is : " << maximum(a, b) << endl;
  return 0;
}
