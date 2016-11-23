#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
    int t;
    cin >> t;
    bool got = false;
    int result = 0;
    vector <long long> diap(40, 0);
    vector <long long> diap_s(40, 0);
    long long temp = 3;
    int diap_i = 0;
    diap[0] = 1;
    
    for (int i = 1; i < 40; i++){
        diap[i] = temp+diap[i-1];
        temp *= 2;
    }
    for (int i = 0; i <= diap.size(); i++){
        if (diap[i] <= t && t < diap[i+1]) {
            diap_i = i;
            break;
        }
    }
    long long right = diap[diap_i+1];
    long long left = diap[diap_i];
    long long mid = (right - left)/2 + left;
    vector <long long> source(right - left, 0);
    cout << mid << endl;
    temp = 3;
    for (int i = 0; i < 40; i++){
        diap_s[i] = temp;
        temp *= 2;
    }
    for (int i = diap_s[diap_i]; i >= 1; i--){
        source[i] = diap_s[diap_i] - i+1;
        cout << source[i] << endl;
    }
    cout << "-------------------------------" << endl;
    while (!got){
        if (mid > t) left = mid;
        if (mid < t) right = mid;
        if (mid == t) {
            result = mid;
            got = true;
        }
        mid = (right - left)/2 + left;
	cout << mid;
    }
    cout << "-----------------------" << endl << result << endl << diap[diap_i] << endl;
    result = result - diap[diap_i];
    cout << source[result];
}
