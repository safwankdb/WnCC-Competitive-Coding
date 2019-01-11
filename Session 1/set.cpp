#include<bits/stdc++.h>
using namespace std ;

int main()
{
	set<int> s ;
	for(int i=0 ; i<10 ; i++){
		s.insert(10-i) ;
	}
	int count_12=s.count(12) ;
	set<int>::iterator it ;
	for(it=s.begin(); it!=s.end() ;it++){
		cout << *it << " " ;
	}
	cout << endl ;

	return 0 ;
}