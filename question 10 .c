#include <stdio.h>
int main()
{
    float p, r, t, si, ci, amount;
    printf("enter principal, rate and time:");
    scanf("%f %f %f", &p, &r, &t);
    si = (p * r * t) / 100;
    amount = p * (1 + r / 100) * (1 + r / 100);
    ci = amount - p;
    printf("simple interest is %f\n", si);
    printf("compound interest is %f\n", ci);
    return 0;
}
