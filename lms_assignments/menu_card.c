#include <stdio.h>

int main()
{
    int choice, qty, total;

    printf("MENU CARD\n");
    printf("1. COFFEE Rs:15\n");
    printf("2. TEA Rs:10\n");
    printf("3. COLD COFFEE Rs:25\n");
    printf("4. MILK SHAKE Rs:50\n");

    printf("Enter Your choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("You have selected Coffee\n");
        printf("Enter the quantity : ");
        scanf("%d", &qty);
        total = qty * 15;
        printf("Total amount : %d\n", total);
    }
    else if (choice == 2)
    {
        printf("You have selected Tea\n");
        printf("Enter the quantity : ");
        scanf("%d", &qty);
        total = qty * 10;
        printf("Total amount : %d\n", total);
    }
    else if (choice == 3)
    {
        printf("You have selected Cold Coffee\n");
        printf("Enter the quantity : ");
        scanf("%d", &qty);
        total = qty * 25;
        printf("Total amount : %d\n", total);
    }
    else if (choice == 4)
    {
        printf("You have selected Milk Shake\n");
        printf("Enter the quantity : ");
        scanf("%d", &qty);
        total = qty * 50;
        printf("Total amount : %d\n", total);
    }
    else
    {
        printf("Invalid choice\n");
#include <stdio.h>

int main()
{
    int choice, qty, total;

    printf("MENU CARD\n");
    printf("1. COFFEE Rs:15\n");
    printf("2. TEA Rs:10\n");
    printf("3. COLD COFFEE Rs:25\n");
    printf("4. MILK SHAKE Rs:50\n");

    printf("Enter Your choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("You have selected Coffee\n");
        printf("Enter the quantity : ");
        scanf("%d", &qty);
        total = qty * 15;
        printf("Total amount : %d\n", total);
    }
    else if (choice == 2)
    {
        printf("You have selected Tea\n");
        printf("Enter the quantity : ");
        scanf("%d", &qty);
        total = qty * 10;
        printf("Total amount : %d\n", total);
    }
    else if (choice == 3)
    {
        printf("You have selected Cold Coffee\n");
        printf("Enter the quantity : ");
        scanf("%d", &qty);
        total = qty * 25;
        printf("Total amount : %d\n", total);
    }
    else if (choice == 4)
    {
        printf("You have selected Milk Shake\n");
        printf("Enter the quantity : ");
        scanf("%d", &qty);
        total = qty * 50;
        printf("Total amount : %d\n", total);
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}    }

    return 0;
}
