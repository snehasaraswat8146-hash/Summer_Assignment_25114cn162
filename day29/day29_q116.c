//Write a program to Create inventory management system.
#include <stdio.h>
#include <string.h>
#define MAX_ITEMS 100
int itemId[MAX_ITEMS];
char itemName[MAX_ITEMS][30];
int itemQty[MAX_ITEMS];
float itemPrice[MAX_ITEMS];
int totalItems = 0;   // kitne products store me hai abhi
 
// low stock ki limit, isse kam hoga toh warning dikhayenge
int lowStockLimit = 5;
 
// function to find item by id, returns index ya -1 agar na mile
int findItem(int id)
{
    for (int i = 0; i < totalItems; i++)
    {
        if (itemId[i] == id)
        {
            return i;
        }
    }
    return -1;
}
 
int main()
{
    int choice;
 
    while (1)   // menu chalta rahega
    {
        printf("\n=========== INVENTORY MANAGEMENT SYSTEM ===========\n");
        printf("1. Add New Item\n");
        printf("2. Stock In (Add Quantity)\n");
        printf("3. Stock Out (Reduce Quantity)\n");
        printf("4. View All Items\n");
        printf("5. Search Item\n");
        printf("6. Update Item Price\n");
        printf("7. Delete Item\n");
        printf("8. Check Low Stock Items\n");
        printf("9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
 
        // ---------------- ADD NEW ITEM ----------------
        if (choice == 1)
        {
            if (totalItems >= MAX_ITEMS)
            {
                printf("\nInventory full, cant add more items!\n");
            }
            else
            {
                int id;
                printf("\nEnter Item ID: ");
                scanf("%d", &id);
 
                // duplicate id check, do products same id ke nahi ho sakte
                if (findItem(id) != -1)
                {
                    printf("Item with this ID already exists!\n");
                }
                else
                {
                    itemId[totalItems] = id;
 
                    printf("Enter Item Name: ");
                    scanf("%s", itemName[totalItems]);
 
                    printf("Enter Quantity: ");
                    scanf("%d", &itemQty[totalItems]);
 
                    printf("Enter Price per unit: ");
                    scanf("%f", &itemPrice[totalItems]);
 
                    if (itemQty[totalItems] < 0 || itemPrice[totalItems] < 0)
                    {
                        printf("Quantity/Price cant be negative, setting to 0\n");
                        itemQty[totalItems] = 0;
                        itemPrice[totalItems] = 0;
                    }
 
                    totalItems++;
                    printf("Item Added Successfully!\n");
                }
            }
        }
 
        // ---------------- STOCK IN ----------------
        else if (choice == 2)
        {
            int id, qty;
            printf("\nEnter Item ID: ");
            scanf("%d", &id);
 
            int idx = findItem(id);
 
            if (idx == -1)
            {
                printf("Item not found!\n");
            }
            else
            {
                printf("Enter quantity to add: ");
                scanf("%d", &qty);
 
                if (qty <= 0)
                {
                    printf("Invalid quantity!\n");
                }
                else
                {
                    itemQty[idx] = itemQty[idx] + qty;   // naya stock add ho gaya
                    printf("Stock Added Successfully!\n");
                    printf("New Quantity: %d\n", itemQty[idx]);
                }
            }
        }
 
        // ---------------- STOCK OUT ----------------
        else if (choice == 3)
        {
            int id, qty;
            printf("\nEnter Item ID: ");
            scanf("%d", &id);
 
            int idx = findItem(id);
 
            if (idx == -1)
            {
                printf("Item not found!\n");
            }
            else
            {
                printf("Enter quantity to remove: ");
                scanf("%d", &qty);
 
                if (qty <= 0)
                {
                    printf("Invalid quantity!\n");
                }
                else if (qty > itemQty[idx])
                {
                    // jitna stock hi nahi hai utna nikal nahi sakte
                    printf("Not enough stock! Available: %d\n", itemQty[idx]);
                }
                else
                {
                    itemQty[idx] = itemQty[idx] - qty;
                    printf("Stock Removed Successfully!\n");
                    printf("Remaining Quantity: %d\n", itemQty[idx]);
                }
            }
        }
 
        // ---------------- VIEW ALL ----------------
        else if (choice == 4)
        {
            if (totalItems == 0)
            {
                printf("\nInventory is empty!\n");
            }
            else
            {
                printf("\n--- All Items in Stock ---\n");
                for (int i = 0; i < totalItems; i++)
                {
                    printf("\nID       : %d", itemId[i]);
                    printf("\nName     : %s", itemName[i]);
                    printf("\nQuantity : %d", itemQty[i]);
                    printf("\nPrice    : %.2f", itemPrice[i]);
                    printf("\nTotal Value: %.2f\n", itemQty[i] * itemPrice[i]);   // qty * price, total value of that item
                }
            }
        }
 
        // ---------------- SEARCH ----------------
        else if (choice == 5)
        {
            int id;
            printf("\nEnter Item ID to search: ");
            scanf("%d", &id);
 
            int idx = findItem(id);
 
            if (idx == -1)
            {
                printf("Item not found!\n");
            }
            else
            {
                printf("\nID       : %d", itemId[idx]);
                printf("\nName     : %s", itemName[idx]);
                printf("\nQuantity : %d", itemQty[idx]);
                printf("\nPrice    : %.2f\n", itemPrice[idx]);
            }
        }
 
        // ---------------- UPDATE PRICE ----------------
        else if (choice == 6)
        {
            int id;
            printf("\nEnter Item ID to update price: ");
            scanf("%d", &id);
 
            int idx = findItem(id);
 
            if (idx == -1)
            {
                printf("Item not found!\n");
            }
            else
            {
                printf("Current Price: %.2f\n", itemPrice[idx]);
                printf("Enter New Price: ");
                scanf("%f", &itemPrice[idx]);
 
                printf("Price Updated Successfully!\n");
            }
        }
 
        // ---------------- DELETE ----------------
        else if (choice == 7)
        {
            int id;
            printf("\nEnter Item ID to delete: ");
            scanf("%d", &id);
 
            int idx = findItem(id);
 
            if (idx == -1)
            {
                printf("Item not found!\n");
            }
            else
            {
                // baki sab items ek position peeche shift kar rahe hai (jaise pehle bhi kiya tha)
                for (int i = idx; i < totalItems - 1; i++)
                {
                    itemId[i] = itemId[i + 1];
                    strcpy(itemName[i], itemName[i + 1]);
                    itemQty[i] = itemQty[i + 1];
                    itemPrice[i] = itemPrice[i + 1];
                }
 
                totalItems--;
                printf("Item Deleted Successfully!\n");
            }
        }
 
        // ---------------- LOW STOCK CHECK ----------------
        else if (choice == 8)
        {
            int found = 0;
            printf("\n--- Low Stock Items (less than %d) ---\n", lowStockLimit);
 
            for (int i = 0; i < totalItems; i++)
            {
                if (itemQty[i] < lowStockLimit)
                {
                    printf("\nID: %d, Name: %s, Quantity left: %d", itemId[i], itemName[i], itemQty[i]);
                    found = 1;
                }
            }
 
            if (found == 0)
            {
                printf("\nNo low stock items, sab theek hai!\n");
            }
            else
            {
                printf("\n");
            }
        }
 
        else if (choice == 9)
        {
            printf("\nExiting program, bye bye!\n");
            break;
        }
 
        else
        {
            printf("\nInvalid choice, try again!\n");
        }
    }
 
    return 0;
}
 