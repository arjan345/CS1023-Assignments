#include <stdio.h>

int main()
{
    int pay_Code;
    double salary;
    double hourly_Wage;
    double hours_Worked;
    double weekly_Sales;
    double payment_Per_Item;
    int number_Of_Items;
    double weekly_Pay;

    printf("Enter pay code from 1-4, and  type -1 to end): ");
    scanf("%d", &pay_Code);

    while (pay_Code != -1)
    {
        switch (pay_Code)
        {
            case 1:
                printf("Enter fixed weekly salary: ");
                scanf("%lf", &salary);

                weekly_Pay= salary;

                printf("Weekly pay: %.2f\n", weekly_Pay);
                break;

            case 2:
                printf("Enter hourly wage: ");
                scanf("%lf", &hourly_Wage);

                printf("Enter hours worked: ");
                scanf("%lf", & hours_Worked);

                if (hours_Worked <= 40)
                {
                    weekly_Pay = hourly_Wage *hours_Worked;
                }
                else
                {
                    weekly_Pay = 40 *hourly_Wage +
                                (hours_Worked - 40) *hourly_Wage * 1.5;
                }

                printf("Weekly pay: %.2f\n",weekly_Pay);
                break;

            case 3:
                printf("Enter weekly sales: ");
                scanf("%lf", & weekly_Sales);

                weekly_Pay = 250 +0.057 * weekly_Sales;

                printf("Weekly pay: %.2f\n",weekly_Pay);
                break;

            case 4:
                printf("Enter payment per item: ");
                scanf("%lf", &payment_Per_Item);

                printf("Enter number of items produced: ");
                scanf("%d",&number_Of_Items);

                weekly_Pay = payment_Per_Item * number_Of_Items;

                printf("Weekly pay: %.2f\n", weekly_Pay);
                break;

            default:
                printf("Invalid pay code.\n");
                break;
        }

        printf("\nEnter pay code (1-4, type -1 to end): ");
        scanf("%d", &pay_Code);
    }
    return 0;
}
