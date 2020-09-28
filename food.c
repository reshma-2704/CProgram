#include<stdio.h>
int main()
{
    printf("Pick an item: \n1. Pizza\n2. Burger\n3. Pasta\n4. FrenchFries\n5. Sandwich");
    int choice=0;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Food Item- Pizza");
        printf("Price- Rs 239");
        break;
    case 2:
        printf("Food item- Burger");
        printf("Price- Rs 129");
        break;
    case 3:
        printf("Food Item- Pasta");
        printf("Price- Rs 179");
        break;   
    case 4:
        printf("Food Item- FrenchFries");
        printf("Price- Rs 99");
        break;
    case 5:
        printf("Food Item- Sandwich");
        printf("Price- Rs 149");
        break; 
    
    default:
        break;
    }
    return 0;
}
