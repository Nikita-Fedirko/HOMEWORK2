#include <iostream>
using namespace std;
int main(){
	for (int i = 10; i <= 20; i++) { //1 задание
		cout << i * i++ << endl;
}

	int n;
	int a = 0;
	cout << "Enter n: ";
	cin >> n;
	if (n > 0) {
		for (int i = 0; i <= n; i++) { // 2 задание
			a += i;
		}
		cout << a;
	}

	int h = 100;
	int g = 1;
	
	for (int i = 1; i <= h; i++) { // 3 задание
		if ( h % i == 0) {
			cout << i << endl;
		}

	}
}


