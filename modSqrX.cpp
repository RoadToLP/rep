#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float a, b, c;
	bool two = false;
	cin >> a >> b >> c;
	float d = pow(b, 2)-(4*a*c);
	if (d < 0){
		cout << "No answers" << endl;
		return 1;
	} else if (d == 0) {
		cout << "One answer here" << endl;
	} else {
		cout << "Two answers here" << endl;
		two = true;
	}
	float x1 = (((-1)*b+sqrt(d))/(2*a)), x2 = (((-1)*b-sqrt(d))/(2*a));
	if (two){
		cout << "X1: " << x1 << " X2: " << x2 << endl;
	} else {
		cout << "X1: " << x1 << endl;
	}
	cout << "Discriminant: " << d;
	float peakX = (((-1)*b)/(2*a));
	cout << "Peak: X = " << peakX << "; Y = " << (pow(peakX, 2) * a) + (peakX * b) + c << endl;
	return 0;
}	
