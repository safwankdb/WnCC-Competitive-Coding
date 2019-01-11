#include <iostream> 
 
using namespace std;
// A function that takes int 'x' and squares it
void square(int &x) 
{
	// cout << x << endl;
	// cout << &x << endl;
    x = x*x;	
    return;
} 
  
// main function
int main() 
{ 
    int a = 10, b = 20; 
  
    // Calling above function to find squares of 'a' and 'b' 
  	square(a);
  	square(b);

    cout<< "squares are " << a <<" and " <<	 b << endl; 
    return 0; 
} 
