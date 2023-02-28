#include <iostream>
#include "ModulesSprynchan.h"

using namespace std;

dev() {
    cout << "\u00A9" << "Sprynchan Yelysaveta" << endl;
    return 0;
}

logical_exp (char a, char b) {
    if (a + 1 == b + 2)
    {
        cout << "false" << endl;
    }
    else
    {
        cout << "true" << endl;
    }
    return 0;
}

dec_and_hec(int x, int y, int z) {
    cout << "Decimal number system: " << x << ", " << y << ", " << z << endl;
    printf("Hexadecimal number system: %X, %X, %X\n", x, y, z);
    return 0;
}

int main()
{
    dev();
    char a, b;
    cout << "Input a, b: " << endl;
    cin >> a >> b;
    logical_exp (a, b);
    float x, y, z;
    cout << "Input x, y, z: " << endl;
    cin >> x >> y >> z;
    dec_and_hec(x, y, z);
    cout << "Result S: " << s_calculation(x, y, z);
    return 0;
}
