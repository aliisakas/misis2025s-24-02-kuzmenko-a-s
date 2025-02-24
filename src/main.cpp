#include <iostream>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);


int main() {

	int a{ 25 };
	int b{ 5 };

	std::cout << "new branch" << std::endl;

	std::cout << "let's do some math" << std::endl;
	std::cout << "25 + 5 = " << add(a, b) << std::endl;
	std::cout << "25 - 5 = " << subtract(a, b) << std::endl;
	std::cout << "25 * 5 = " << multiply(a, b) << std::endl;

	return 0;
}