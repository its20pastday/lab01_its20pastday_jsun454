#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	while(1) {
		int row, col;
		cout << "Enter number of rows and columns:" << endl;
		cin >> row >> col;
		if(row == 0 || col == 0)
			break;
	        for(int i = 0; i < row; i++) {
			for(int j = 0; j < col; j++) {
				cout << "X.";
			}
			cout << endl;
		}	
	}
	return 0;
}
