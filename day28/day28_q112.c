//Write a program to Create contact
//management system.
#include <stdio.h>
#include <string.h>
#define MAX_CONTACTS 100
char contactName[MAX_CONTACTS][30];
char contactPhone[MAX_CONTACTS][15];
char contactEmail[MAX_CONTACTS][40];
int totalContacts = 0;
 
// function to search contact by name, returns index or -1 if not found
int findContact(char name[])
{
    int i;
    for (i = 0; i < totalContacts; i++)
    {
        if (strcmp(contactName[i], name) == 0)
        {
            return i;
        }
    }
    return -1;
}
 
int main()
{
    int choice;
 
    while (1)
    {
        printf("\n=========== CONTACT MANAGEMENT SYSTEM ===========\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
 
        // add new contact
        if (choice == 1)
        {
            if (totalContacts >= MAX_CONTACTS)
            {
                printf("\nContact list is full!\n");
            }
            else
            {
                char name[30];
                printf("\nEnter Name: ");
                scanf("%s", name);
 
                // check kar rahe duplicate naam toh nahi hai
                if (findContact(name) != -1)
                {
                    printf("Contact with this name already exists!\n");
                }
                else
                {
                    strcpy(contactName[totalContacts], name);
 
                    printf("Enter Phone Number: ");
                    scanf("%s", contactPhone[totalContacts]);
 
                    printf("Enter Email: ");
                    scanf("%s", contactEmail[totalContacts]);
 
                    totalContacts++;
                    printf("Contact Added Successfully!\n");
                }
            }
        }
 
        // view all contacts
        else if (choice == 2)
        {
            if (totalContacts == 0)
            {
                printf("\nNo contacts found!\n");
            }
            else
            {
                printf("\n--- All Contacts ---\n");
                for (int i = 0; i < totalContacts; i++)
                {
                    printf("\nName  : %s", contactName[i]);
                    printf("\nPhone : %s", contactPhone[i]);
                    printf("\nEmail : %s\n", contactEmail[i]);
                }
            }
        }
        // search contact
        else if (choice == 3)
        {
            char name[30];
            printf("\nEnter Name to search: ");
            scanf("%s", name);
 
            int idx = findContact(name);
 
            if (idx == -1)
            {
                printf("Contact not found!\n");
            }
            else
            {
                printf("\nName  : %s", contactName[idx]);
                printf("\nPhone : %s", contactPhone[idx]);
                printf("\nEmail : %s\n", contactEmail[idx]);
            }
        }
 
        // update contact
        else if (choice == 4)
        {
            char name[30];
            printf("\nEnter Name to update: ");
            scanf("%s", name);
 
            int idx = findContact(name);
 
            if (idx == -1)
            {
                printf("Contact not found!\n");
            }
            else
            {
                printf("Enter New Phone Number: ");
                scanf("%s", contactPhone[idx]);
 
                printf("Enter New Email: ");
                scanf("%s", contactEmail[idx]);
 
                printf("Contact Updated Successfully!\n");
            }
        }
 
        // delete contact
        else if (choice == 5)
        {
            char name[30];
            printf("\nEnter Name to delete: ");
            scanf("%s", name);
 
            int idx = findContact(name);
 
            if (idx == -1)
            {
                printf("Contact not found!\n");
            }
            else
            {
                // baaki sab ek ek position peeche shift kar rahe hai
                for (int i = idx; i < totalContacts - 1; i++)
                {
                    strcpy(contactName[i], contactName[i + 1]);
                    strcpy(contactPhone[i], contactPhone[i + 1]);
                    strcpy(contactEmail[i], contactEmail[i + 1]);
                }
 
                totalContacts--;
                printf("Contact Deleted Successfully!\n");
            }
        }
        else if (choice == 6)
        {
            printf("\nThank you for using our contact system. Bye!\n");
            break;
        }
 
        else
        {
            printf("\nWrong choice, please try again\n");
        }
    }
    return 0;
}