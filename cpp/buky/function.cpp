#include <iostream>

using namespace std;

int add(int a, int b, int c);

int main() 
{
	cout << add(5, 10, 15) << endl;

	return 0;
}

int add(int a, int b, int c) {
	int sum = a + b + c;

	return sum;
}