#include <iostream>
using namespace std;

int main()
{
	int i, a, b, c, d, e, s, n, work;
	a = b = c = d = e = s = 0;

	cout << "How many voters: ";
	cin >> n;

	int count[n];

	cout << "Choose between 1 to 5" << endl;

	for(i = 0; i < n; i++) {
		cout << "Who got " << i+1 << " no vote: ";
		cin >> work;

		switch(work) {
			case 1:
				a += 1;
				break;

			case 2:
				b += 1;
				break;

			case 3:
				c += 1;
				break;

			case 4:
				d += 1;
				break;

			case 5:
				e += 1;
				break;

			default :
				s += 1;

		}
	}

	cout << "1st candidate got " << a << " votes" << endl;
	cout << "2nd candidate got " << b << " votes" << endl;
	cout << "3rd candidate got " << c << " votes" << endl;
	cout << "4th candidate got " << d << " votes" << endl;
	cout << "5th candidate got " << e << " votes" << endl;
	cout << s << " votes were spolited" << endl;
	
}