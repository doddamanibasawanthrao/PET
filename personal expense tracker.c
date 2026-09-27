#include <stdio.h>

#define MAX 100

struct Expense {
    char name[50];
    float amount;
};

struct Expense expenses[MAX];
int count = 0;

void add_expense()
{
    if (count >= MAX) {
        printf("Expense list is full!\n");
        return;
    }

    printf("Enter expense name: ");
    scanf(" %49[^\n]", expenses[count].name);

    printf("Enter amount: ");
    scanf("%f", &expenses[count].amount);

    count++;

    printf("Expense added successfully!\n");
}

void view_expenses()
{
    int i;

    if (count == 0) {
        printf("No expenses found.\n");
    }
    else {
        printf("\nYour Expenses:\n");

        for (i = 0; i < count; i++) {
            printf("%s - %.2f\n",
                   expenses[i].name,
                   expenses[i].amount);
        }
    }
}

void show_total()
{
    int i;
    float total = 0;

    for (i = 0; i < count; i++) {
        total += expenses[i].amount;
    }

    printf("Total Expenses: %.2f\n", total);
}

int main()
{
    int choice;

    while (1) {
        printf("\n--- Expense Tracker ---\n");
        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Show Total\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            add_expense();
        }
        else if (choice == 2) {
            view_expenses();
        }
        else if (choice == 3) {
            show_total();
        }
        else if (choice == 4) {
            printf("Thank you!\n");
            break;
        }
        else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
