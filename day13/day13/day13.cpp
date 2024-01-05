

#include <iostream>
using namespace std;

int main()
{
	//int  n;
	//cin >> n;

	//while (n < 1 || n>99) {

	//	cout << "input n " << endl;
	//	cin >> n;
	//}
	//cout << "nhap dung";

	// tinh tong các so tu 1->n

	int n;
	cout << "input n : ";
	cin >> n;
	while (n<1)
	{
		cout << "input n : ";
		cin >> n;
	}

	int tong = 0,a=0;
	do
	{
		tong += a;
		a++;
	} while (a<=n);
	cout << "tong tu 1 -> n :" << tong;


}


