#include <math.h>

float s_calculation(float x, float y, float z)
{
    float S = log(x - y) + sqrt(M_PI) * pow(x, 2) / x + z / (2 * pow(y, 2));
    return S;
}

