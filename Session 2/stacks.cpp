#include <bits/stdc++.h>
using namespace std ;

int main()
{
	stack<int> s ;
	s.push(1);
	s.push(3) ;
	s.push(2) ;
	cout << s.top() << endl ;// should return 2
	s.push(1) ;
	s.push(5) ;
	cout << s.top() << endl ;//should return 5
	s.pop() ;
	cout << s.top() << endl ;//should return 1
	if(s.empty())
		cout << "EMPTY" << endl ;
	cout << s.size() << endl ;
	return 0 ;
}