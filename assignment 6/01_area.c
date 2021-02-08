#include <stdio.h>
float dia(int a)
{
    float area = (3.14 * a * a) / 4;
    return area;
}
int main()
{
    dia(5);
    printf("area is %f", dia(5));
    return 0;
}