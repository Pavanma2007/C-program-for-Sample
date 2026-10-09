#include<stdio.h>
int main()
{
int A;
float B, C;
printf("\t CONVERSION TABLE \n\n");
printf("Enter 1 to Convert Kilometres to Meters \n");
printf("Enter 2 to Convert Meters to Kilometers \n");
printf("Enter 3 to Convert Meters to Centimetres \n");
printf("Enter 4 to convert Centimetres to Meters \n\n");
printf("Enter your Choice : ");
scanf("%d", &A);
printf("\n");

    {
        if (A == 1)
            {
                printf("Enter distance in Kilometers : ");
                scanf("%f", &B);
                C = B*1000;
                printf("Distance in Meters : %.2f\n", C);
            }
        else if (A == 2)
            {
                printf("Enter distance in Meters : ");
                scanf("%f", &B);
                C = B/1000;
                printf("Distance in Kilometers : %.2f\n", C);
            }
        else if (A == 3)
            {
                printf("Enter distance in Meters : ");
                scanf("%f", &B);
                C = B*100;
                printf("Distance in Centimeters : %.2f\n", C);
            }    
        else if (A == 4)
            {
                printf("Enter distance in Centimeters : ");
                scanf("%f", &B);
                C = B/100;
                printf("Distance in Meters : %.2f\n", C);
            }    
        else
            {
                printf("\tYou haven't Entered correct number. Please try again\n");
            }
    }
return 0;    
}