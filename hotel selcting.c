#include<stdio.h>
#include<conio.h>
void main()
{
    int choice;
    int ch;
    int n;
    printf("1.Holiday Inn\n");
    printf("2.TGB\n");
    printf("3.Ginger\n");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("1.Lunch\n");
        printf("2.Dinner\n");
        printf("3.Room\n");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
    switch(ch)
        {
        case 1:
            printf("/n1.Gujarati Dish\n");
            printf("/n2.Punjabi Dish\n");
            printf("Enter your choice:\n");
            scanf("%d",&n);
        case 2:
            printf("/n1.chinese sizler\n");
            printf("/n2.Punjabi sizler\n");
            printf("Enter your choice:\n");
            scanf("%d",&n);
    switch(n)
        {

         case 1:
            printf("1. You have to pay 100 rupees\n");
           break;

        case 2:
            printf("2.You have to pay 150 rupees\n");
            break;
        }

        }


    }

    getch();
}
