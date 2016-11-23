#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        bool got = false;
        int n, temp = 0;
        cin >> n;
        vector<int> in;
        long long sum = 0, rem = 0;
        for (int j = 0; j < n; j++){
            cin >> temp;
	        in.push_back(temp);
            sum+=temp;
        }
        in.push_back(0);
        for (int j = n; j >= 0; --j){
            sum -= in[j];
            rem += in[j+1];
            if (sum == rem){
                cout << "YES" << endl;
                got = true;
                break;
            }
        }
        if (!got) cout << "NO" << endl;
    } 
    return 0;
}

