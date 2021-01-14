#include <stdio.h>

int main(int argc, char const *argv[])
{
    char user;
    float km_to_mile = 0.621317;
    float inche_to_feet = 0.621317;
    float cm_to_inches = 0.621317;
    float pound_to_kg = 0.621317;
    float inche_to_meters = 0.621317;
    float first, second;
    printf("Hello");
    while (1)
    {
        printf("1. Press q for quit.\n2. Press 1 for converting kilometers to miles.\n2. Press 2 for converting inches to feet.\n3. Press 3 for converting centimeters to inches.\n4. press 4 for converting pound to kilogramas.\n5. Press 5 for converting inches to meters.");
        printf("\nEnter the choice:- ");
        scanf(" %c", &user);
        switch (user)
        {
        case 'q':
            goto end;
            break;

        case '1':
            printf("Enter the kilometers:- ");
            scanf("%f", &first);
            second = first * km_to_mile;
            printf("%.2f kilometers is equal to %.2f miles.\n", first, second);
            break;

        case '2':
            printf("Enter the inches:- ");
            scanf("%f", &first);
            second = first * inche_to_feet;
            printf("%.2f inches is equal to %.2f feet.\n", first, second);
            break;

        case '3':
            printf("Enter the centimeters:- ");
            scanf("%f", &first);
            second = first * cm_to_inches;
            printf("%.2f centimeters is equal to %.2f inches.\n", first, second);
            break;

        case '4':
            printf("Enter the pound:- ");
            scanf("%f", &first);
            second = first * pound_to_kg;
            printf("%.2f pounds is equal to %.2f kilogramas.\n", first, second);
            break;

        case '5':
            printf("Enter the inches:- ");
            scanf("%f", &first);
            second = first * inche_to_meters;
            printf("%.2f inches is equal to %.2f meters.\n", first, second);
            break;

        default:
            break;
        }
    }
end:
    return 0;
}