#include <iostream>
using namespace std;
vecrot <int> memo(N, 0);
int fi(int n){
	if (memo[n] > 0) then return memo[n];
	if (n <= 2) f = 1;
	return fi(n-1)+fi(n-2);
	else f = fi(n-1) + fi(n-2);
	memo[n] = f;
	return f;
}
