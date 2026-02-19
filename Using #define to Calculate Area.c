#include <stdio.h>

#define PI 3.14

int main()
{
 float r;
 scanf("%f", &r);
 float area = PI * r * r;
 printf("%.2f", area);
 return 0;
}
