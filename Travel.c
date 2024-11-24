 #include <stdio.h>
#include <string.h>

struct TravelPackage {
    char name[50];
    char destination[50];
    int duration;
    float cost;
    int seatsAvailable;
};

void addPackage(struct TravelPackage packages[], int *count) {
    printf("Package Name: ");
    scanf("%s", packages[*count].name);
    printf("Destination: ");
    scanf("%s", packages[*count].destination);
    printf("Duration (in days): ");
    scanf("%d", &packages[*count].duration);
    printf("Cost: ");
    scanf("%f", &packages[*count].cost);
    printf("Seats Available: ");
    scanf("%d", &packages[*count].seatsAvailable);

    (*count)++;
    printf("Travel package added successfully!\n");
}

void displayPackages(const struct TravelPackage packages[], int count) {
    if (count == 0) {
        printf("\nNo travel packages available.\n");
        return;
    }

    printf("\nAvailable Travel Packages:\n");
    for (int i = 0; i < count; i++) {
        printf("Package %d:\n", i + 1);
        printf("Name: %s\n", packages[i].name);
        printf("Destination: %s\n", packages[i].destination);
        printf("Duration: %d days\n", packages[i].duration);
        printf("Cost: $%.2f\n", packages[i].cost);
        printf("Seats Available: %d\n", packages[i].seatsAvailable);
        printf("-------------------------\n");
    }
}

void bookPackage(struct TravelPackage packages[], int count) {
    if (count == 0) {
        printf("\nNo travel packages available for booking.\n");
        return;
    }

    char packageName[50];
    printf("\nEnter the name of the package you want to book: ");
    scanf("%s", packageName);

    for (int i = 0; i < count; i++) {
        if (strcmp(packages[i].name, packageName) == 0) {
            if (packages[i].seatsAvailable > 0) {
                packages[i].seatsAvailable--;
                printf("Booking successful! Seats remaining: %d\n", packages[i].seatsAvailable);
            } else {
                printf("Sorry, no seats available for this package.\n");
            }
            return;
        }
    }

    printf("Package not found.\n");
}

int main() {
    struct TravelPackage packages[100];
    int count = 0;
    int choice;

    do {
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPackage(packages, &count);
                break;
            case 2:
                displayPackages(packages, count);
                break;
            case 3:
                bookPackage(packages, count);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
