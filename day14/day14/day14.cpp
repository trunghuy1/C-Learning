

#include <iostream>
using namespace std;
int main()
{
	//int n,gt=1;
	//cout << "input n: ";
	//cin >> n;
	//for (int i = 1; i <= n; i++) {
	//	gt *= i ;
	//	cout << i << "!= " << gt<<endl;
	//}
	//int k=1,g=1;
	//while (k <= n) {
	//	g *= k;
	//	k++;
	//	cout << k << "! = " << g << endl;
	//}


	//tinh tong casc so chan tu 0-> n

	int n;
	cout << "input n : ";
	cin >> n;
	if (n % 2 == 0) {
		int tong = 0;
		for (int i = 0; i <= n; i+=2) {
			cout << i << endl;
			tong += i;

		}
		cout << "tong cac so chan tu 0->a la : " << tong;
	}
	else
		cout << "khong tinh so le";
}


