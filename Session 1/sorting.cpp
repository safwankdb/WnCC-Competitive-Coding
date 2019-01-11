#include<bits/stdc++.h>
using namespace std ;

struct fraction
{
	int num, den ;
	fraction(int x, int y){
		num=x ; den=y ;
	}
	fraction(){}
};

bool compare_frac(fraction a, fraction b)
{
	return ((a.num*b.den)<(b.num*a.den)) ;
}

int main()
{
	vector<int> v ;
	for(int i=10 ; i>=0 ; i--){
		v.push_back(i) ;
	}
	// v-> 10, 9, 8, ... , 0
	sort(v.begin(), v.end()) ;
	// v-> 0, 1, ... , 9, 10
	for(int i=0 ; i<v.size() ; i++){
		cout << v[i] << " " ;
	}
	cout<< endl;
	int arr[11] ;
	for(int i=10 ; i>=0 ; i--){
		arr[i]=10-i ;
	}
	// &arr[0]
	sort(arr, arr+11) ;
	for(int i=0; i<11; i++)
		cout << arr[i] << " " ;
	cout << endl ;

	fraction arr2[10] ;
	for(int i=0 ; i<10 ; i++){
		arr2[i].num=i ;
	}
	for(int i=0 ; i<10; i++){
		arr2[i].den=10-i ;
	}
	sort(arr2, arr2+10, compare_frac) ;

	return 0 ;
}