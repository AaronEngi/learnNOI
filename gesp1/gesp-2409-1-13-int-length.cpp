#include <iostream>

using namespace std;

int main() {
	int N, N0, rc=0;
	cout << "������������";
	cin >> N;
	N0 = N;
	while (N) {
		rc++;
		N /= 10;
	}
//	printf("%d��%dλ����\n", N0, rc);
	cout<<N0<<"��"<<rc<<"λ����"<<endl; 

	return 0;
}
