#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	while(1) {
		int n;
		cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
		cin >> n;
		if(n == -1)
			break;
		double sum = 0.0;
		for(int i = 0; i <= n; i++) {
			sum += pow(-1, i) / (2.0 * i  + 1);
		}
		cout << "The approximate value of pi using " << n+1 << ((n > 0) ? " terms" : " term") << " is: " << (4 * sum) << endl;
	}
	return 0;
}
