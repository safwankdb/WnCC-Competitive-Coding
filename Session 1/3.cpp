#include <iostream> 
 
using namespace std;
// A function that takes int 'x' and 'y' and returns their max 
int max(int x, int y) 
{ 
    if (x > y) 
      return x; 
    else
      return y; 
} 
  
// main function
int main() 
{ 
    int a = 10, b = 20; 
  
    // Calling above function to find max of 'a' and 'b' 
    int m = max(a, b); 
  
    cout<< "max is " << m << endl; 
    return 0; 
} 
