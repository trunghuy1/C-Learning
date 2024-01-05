
#define _USE_MATH_DEFINES
#include <iostream>
#include<math.h>



using namespace std;

int main()
{
    double r;
    cout << "input radius: ";
    cin >> r;
    float cicur = 2 * M_PI * r;
    float S = M_PI * pow (r,2);

    cout << "diameter of a circle: "<<cicur<<endl;
    cout << "circle area: "<<S<<endl;








}

