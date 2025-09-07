//Q22:Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
#include<math.h>

int main()
{
    int cp, sp, profit, loss;
    float percentage;

    printf("Enter the value of cost price: ");
    scanf("%d", &cp);

    printf("\n");

    printf("Enter the value of selling price: ");
    scanf("%d", &sp);
     printf("\n");


    if (sp > cp)
    {
        profit = sp - cp;
        percentage = (float)profit/cp * 100;

        printf("The profit is %d", profit); 
        printf("\n");
        printf("The profit percentage is %f", percentage);

    }  


     else if (cp > sp)
     {
        loss = cp - sp;
        percentage = (float)loss/sp * 100;

        printf("The loss is %d", loss); 
        printf("\n");
        printf("The loss percentage is %f", percentage);
     }

       else
       printf("no loss no profit");

       return 0;

}