#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]){
	if (argc == 1) {
		cerr << "Usage: ./min4 num1 num2 num3 num4" << endl;
		cerr << "Prints smallest of the four numbers" << endl;
		return -1;
	}

	int min = atoi(argv[1]);
	for (int i = 1; i < 3; ++i){
		if (min < atoi(argv[1+i]))
			continue;
		else
			min = atoi(argv[1+i]);
	}
	cout << min << endl;
	return 0;
}
