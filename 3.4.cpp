#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i;
	float v, p, r, n;
	p = 1000;
	r = 0.1;
	n = 1;

	for(i = 0; i < 10; i++) {
		v = pow( (1 + r), n );
		v = v*p;

		p += 1000;
		r += 0.01;
		n += 1;	

		cout << v << endl;
	}
}