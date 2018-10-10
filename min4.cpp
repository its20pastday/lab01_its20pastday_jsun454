#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]){
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
