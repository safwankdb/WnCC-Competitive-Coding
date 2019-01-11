#include<bits/stdc++.h>
using namespace std ;

int main()
{
	map<int, char> m ;
	m[1]='a' ;
	m[10]='z' ;
	m[100]='c' ;
	m[1000]='m';
	cout << m[100] << endl ;
	map<int, char>::iterator it=m.begin() ;
	for(it=m.begin(); it!=m.end() ; it++){
		int index=it->first ;
		char value=it->second ;
		cout << index << " " << value << endl;
	}
	return 0 ;
}