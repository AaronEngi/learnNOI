#include <iostream>

using namespace std;

int main() {
	int N, N0, rc=0;
	cout << "请输入整数：";
	cin >> N;
	N0 = N;
	while (N) {
		rc++;
		N /= 10;
	}
//	printf("%d是%d位整数\n", N0, rc);
	cout<<N0<<"是"<<rc<<"位整数"<<endl; 

	return 0;
}
