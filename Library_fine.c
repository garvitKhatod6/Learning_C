//Q23: Write a program to calculate library fine based on late days as follows:
//First 5 days late: ₹2/day
//Next 5 days late: ₹4/day
//Next 20 days days late: ₹6/day
//More than 30 days: Membership Cancelled.


#include<stdio.h>
#include<math.h>

int main()
{
    int days;
    int fine;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    if (days <=5)
    {
        fine = days * 2;
        printf("The fine is %d" , fine);
    }

    else if (days <= 15 && days > 5)
      {
        fine = days * 4;
        printf("The fine is %d" , fine);
    }

      else if (days <= 30 && days > 15)
      {
        fine = days * 6;
        printf("The fine is %d" , fine);
     }

      else 
      {
        printf("The membership is cancelled");
      }
      
     return 0;

      }




















