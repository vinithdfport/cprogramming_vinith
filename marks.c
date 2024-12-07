#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, sub4, perc;
    printf("Enter marks for Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &sub3);

    printf("Enter marks for Subject 4: ");
    scanf("%f", &sub4);

    perc = (sub1 + sub2 + sub3 + sub4) / 4;

    if (perc >= 90)
    {
        printf("A grade\n");
    }
    else if (perc >= 70)
    {
        printf("B grade\n");
    }
    else if (perc >= 60)
    {
        printf("C grade\n");
    }
    else if (perc >= 50)
    {
        printf("D grade\n");
    }
    else
    {
        printf("Better luck next time\n");
    }

    return 0;
}
