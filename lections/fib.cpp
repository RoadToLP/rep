#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector <int> memo(1000000, 0);
int fi(int n){
	long long f = 0;
	if (memo[n] > 0) return memo[n];
	if (n <= 2) f = 1;
	else f = fi(n-1) + fi(n-2);
	memo[n] = f;
	return f;
}
int fip(int n){
	map<int,int> fib;
	int f;
	for (int i = 1; i <= n; i++){
		if (i<=2) f=1;
		else f=fib[i-1]+fib[i-2];
		fib[i] = f;
	}
	return fib[n];
}
int main(int argc, char **argv){
	cout << fip(1000);
}
