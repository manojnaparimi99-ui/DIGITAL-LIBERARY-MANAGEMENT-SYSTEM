#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Node structure
struct Node {
    int id;
    char name[50];
    struct Node* next;
};

// Head pointer
struct Node* head = NULL;

// CREATE - Insert at beginning
void create() {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter ID: ");
    scanf("%d", &newNode->id);

    printf("Enter Name: ");
    scanf("%s", newNode->name);

    newNode->next = head;
    head = newNode;

    printf("Record added successfully!\n");
}

// READ - Display all records
void read() {
    struct Node* temp = head;

    if (temp == NULL) {
        printf("No records found!\n");
        return;
    }

    printf("\n--- Records ---\n");
    while (temp != NULL) {
        printf("ID: %d, Name: %s\n", temp->id, temp->name);
        temp = temp->next;
    }
}

// UPDATE - Modify record by ID
void update() {
    int id;
    char newName[50];

    printf("Enter ID to update: ");
    scanf("%d", &id);

    struct Node* temp = head;

    while (temp != NULL) {
        if (temp->id == id) {
            printf("Enter new name: ");
            scanf("%s", newName);
            strcpy(temp->name, newName);
            printf("Record updated successfully!\n");
            return;
        }
        temp = temp->next;
    }

    printf("Record not found!\n");
}

// DELETE - Remove record by ID
void deleteNode() {
    int id;
    printf("Enter ID to delete: ");
    scanf("%d", &id);

    struct Node *temp = head, *prev = NULL;

    // If head node itself holds the ID
    if (temp != NULL && temp->id == id) {
        head = temp->next;
        free(temp);
        printf("Record deleted successfully!\n");
        return;
    }

    // Search for the node
    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    // If ID not found
    if (temp == NULL) {
        printf("Record not found!\n");
        return;
    }

    // Unlink and delete node
    prev->next = temp->next;
    free(temp);

    printf("Record deleted successfully!\n");
}

// MAIN MENU
int main() {
    int choice;

    while (1) {
        printf("\n--- CRUD MENU ---\n");
        printf("1. Create\n");
        printf("2. Read\n");
        printf("3. Update\n");
        printf("4. Delete\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                read();
                break;
            case 3:
                update();
                break;
            case 4:
                deleteNode();
                break;
            case 5:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}