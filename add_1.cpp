#include <iostream>

using namespace std;

//int addOne(int x) {
//	int m = 1;
//	while (x & m) {
//		x = x ^ m;
//		m = m << 1;
//	}
//	x = x ^ m;
//	return x;
//}

int addOne(int x) {
	return -(~x);
}

int main() {
	cout << addOne(14);
	return 1;
}