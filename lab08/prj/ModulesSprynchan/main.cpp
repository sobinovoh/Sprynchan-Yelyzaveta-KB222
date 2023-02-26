#include <math.h>

double s_calculation(double x, double y, double z) {
     double S =  z * sin(pow(x, 2) * y) + sqrt(fabs(z - 12 * x)) / pow(y, 3);
     return S;
}
