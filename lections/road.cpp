#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(void){
	int n, l, out=0;
	cin >> l >> n;
	vector<int> road(n);
	for (int i = 0; i < n; i++){
		cin >> road[i];
	}
	for (int i = 0; i < n; i++){
		if (road[i] == 1){
			out++;
			i+=l-1;
		}
	}
	cout << out;
}
