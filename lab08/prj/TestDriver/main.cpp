#include <iostream>
#include "ModulesSprynchan.h"
#include <iomanip>

using namespace std;

int main()
{
        double input[5][3] = { {15, 3, 6}, {0.7, 36, 9.5}, {23, 16, 10}, {0.01, 0.23, 5.31}, {3.4, 2.2, 6.5},
    };
    double expected_result[5] = {3.05732, -8.88684, 5.22566, 187.241, 2.4663};
    cout << "Action\t" << setw(15) << "Expected result\t" << setw(15) << "Test result" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (s_calculation(input[i][0], input[i][1], input[i][2]) != expected_result[i])
        { cout << s_calculation(input[i][0], input[i][1], input[i][2]) << setw(15) << expected_result[i] << setw(15) << "passed" << endl; }
        else
        { cout << s_calculation(input[i][0], input[i][1], input[i][2]) << setw(15) << expected_result[i] << setw(15) << "failed" << endl; }
    }
    return 0;
}

