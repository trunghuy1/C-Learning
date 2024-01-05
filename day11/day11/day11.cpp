
#include <iostream>
using namespace std;


int main()
{
	float n;
	cout << "input dtb: ";
	cin >> n;
	string kq = (n >= 8) ? "gioi" : ((n >= 6.5 && n > 8) ? "kha" : (n > 5 && n < 6.5) ? "trung binh" : "yeu");
	// thực hiện biểu thức 1 rồi tới 2 .....
	cout << "studient is : " << kq;


}


