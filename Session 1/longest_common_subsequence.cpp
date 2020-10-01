#include <bits/stdc++.h>
using namespace std;

int LCS_Size(string X, string Y, int m, int n, unordered_map<string, int> &lookup)
{
	// return if we have reached the end of either string
	if (m == 0 || n == 0) return 0;

	// construct an unique map key from dynamic elements of the input
	string key = to_string(m) + "|" + to_string(n);

	// if sub-problem is seen for the first time, solve it and store its result in a map
	if (lookup.find(key) == lookup.end())
	{
		// if last character of X and Y matches
		if (X[m - 1] == Y[n - 1])
			lookup[key] = LCS_Size(X, Y, m - 1, n - 1, lookup) + 1;

		// else if last character of X and Y don't match
		else
		    lookup[key] = max(LCS_Size(X, Y, m, n - 1, lookup),LCS_Size(X, Y, m - 1, n, lookup));
	}

	// return the subproblem solution from the map
	return lookup[key];
}

int main()
{
	//define and read two strings
	string X, Y ;
	cin >> X >> Y;

	// create a map to store solutions of subproblems
	unordered_map<string, int> lookup;

	cout << "The length of LCS is " << LCS_Size(X, Y, X.length(), Y.length(), lookup);

	return 0;
}
