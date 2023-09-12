#include <iostream>;
#include <math.h>
#include <stdio.h>
#define M_PI acos(-1.0)


int main() {
	int rad;
	
	std::cin >> rad;

	if (rad <= 0 || rad >= 100) return 0;
	
	std::cout << (rad * rad * M_PI);
}