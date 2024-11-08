#include <stdio.h>
int main()
{

    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;

     int i=0;
    while (8)
    {

        printf("enter the character input q to quit\n  1. kmsToMiles\n  2. inchesToFoot\n 3. cmsToInches\n 4. poundToKgs\n 5. inchesToMeters\n 6. inchesToMeters \n");
        scanf("%c", &input);
        // printf("Hello");
        switch (input)
        {
        case 'q':
            printf("quitting the program");
            goto end;
            break;

        case '1':
            printf("enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%f ikms is equal to %f miles\n", first, second);
            break;

        case '2':
            printf("enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%f ikms is equal to %f miles\n", first, second);
            break;

        case '3':
            printf("enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmsToInches;
            printf("%f ikms is equal to %f miles\n", first, second);
            break;
        case '4':
            printf("enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * poundToKgs;
            printf("%f ikms is equal to %f miles\n", first, second);
            break;
        case '5':
            printf("enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToMeters;
            printf("%f ikms is equal to %f miles\n", first, second);
            break;
        default:
            printf("in default now\n ");
            break;
        }
        fflush(stdin);
    }

    end:
    return 0;
}