#include <stdio.h>

int main(void){
    int tens_place , ones_place ;
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &tens_place, &ones_place);
    printf("You entered the number ");

    switch (tens_place)
    {
    case 1:
        switch (ones_place)
        {
        case 0:
            printf("Ten");
            break;
        case 1:
            printf("Eleven");
            break;
        case 2:
            printf("Twelve");
            break;
        case 3:
            printf("Thirteen");
            break;
        case 4:
            printf("Fourteen");
            break;
        case 5:
            printf("Fifteen");
            break;
        case 6:
            printf("Sixteen");
            break;
        case 7:
            printf("Seventeen");
            break;
        case 8:
            printf("Eighteen");
            break;
        case 9:
            printf("Nineteen");
            break;
        default:
            break;
        }
        printf(".\n");
        return 0;
        break;
    case 2:
        printf("Twenty");
        break;  
    case 3:
        printf("Thirty");
        break;
    case 4:
        printf("Forty");        
        break;
    case 5:
        printf("Fifty");        
        break;
    case 6:
        printf("Sixty");        
        break;              
    case 7:
        printf("Seventy");        
        break;              
    case 8:                     
        printf("Eighty");        
        break;            
    case 9:                    
        printf("Ninety");        
        break;                                  
    default:
        break;
    }

    switch (ones_place)
    {
    case 1:
        printf("-one");
        break;
    case 2:
        printf("-two");
        break;
    case 3:
        printf("-three");
        break;
    case 4:
        printf("-four");
        break;
    case 5:
        printf("-five");
        break;
    case 6:
        printf("-six");
        break;
    case 7:
        printf("-seven");
        break;
    case 8:
        printf("-eight");
        break;
    case 9:
        printf("-nine");
        break;

    default:
        break;
    }

    printf(".\n");
    return 0;
}