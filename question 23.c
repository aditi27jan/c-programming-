#include <stdio.h>

int main()
{
    float cp, sp, loss, profit, percentage;
    printf("enter the cost price:");
    scanf("%f", &cp);
    printf("enter the selling price:");
    scanf("%f", &sp);
    if (sp > cp)
    {
        profit = sp - cp;
        percentage = (profit * 100) / cp;
        printf("profit amount=%f\n", profit);
        printf("profit percentage=%f\n", percentage);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        percentage = (loss * 100) / cp;
        printf("loss amount=%f\n", loss);
        printf("loss percentage=%f\n", percentage);
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
}
