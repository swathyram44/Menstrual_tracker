#include "tracker.h"

int main() {
    int choice;
    while (1) {
        printf("\n=== Menstrual Cycle Tracker ===\n");
        printf("1. Add Period Data\n");
        printf("2. View History\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_period_data();
                break;
            case 2:
                view_history();
                break;
            case 3:
                printf("Goodbye! Stay healthy ❤️\n");
                exit(0);
            default:
                printf("❌ Invalid choice! Try again.\n");
        }
    }
    return 0;
}

