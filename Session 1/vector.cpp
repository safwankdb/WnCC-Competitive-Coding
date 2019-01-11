#include<bits/stdc++.h>
using namespace std ;

int main()
{
	vector<int> v ;
	for(int i=0 ; i<10 ; i++){
		v.push_back(i) ;
	}
	cout << v[2] << endl ;
	vector<int> v1(10, 2) ;
	v1.resize(100) ;
	cout << v1.size() << endl ;// should output 100
	v[3]=200 ;

	return 0 ;
}