#include <stdio.h>

int main() {
    int itemId[100], quantity[100], choice, i, searchId, found;
    char itemName[100][30];
    float price[100];
    int count = 0, addQty, sellQty;
    float totalValue;

    printf("Inventory Management System\n");

    while(1) {
        printf("Menu\n");
        printf("1. Add New Item\n");
        printf("2. Show All Items\n");
        printf("3. Search Item by ID\n");
        printf("4. Add Stock\n");
        printf("5. Sell Item\n");
        printf("6. Show Total Inventory Value\n");
        printf("7. Show Low Stock Items\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Add New Item
                if(count >= 100) {
                    printf("Inventory Full! Cannot add more items\n");
                }
                else {
                    itemId[count] = 2001 + count;
                    printf("Enter Item Name: ");
                    scanf(" %[^\n]", itemName[count]);
                    printf("Enter Price: ");
                    scanf("%f", &price[count]);
                    printf("Enter Quantity: ");
                    scanf("%d", &quantity[count]);

                    if(price[count] < 0 || quantity[count] < 0) {
                        printf("Price or Quantity negative nahi ho sakta!\n");
                    }
                    else {
                        printf("Item Added! Item ID: %d\n", itemId[count]);
                        count++;
                    }
                }
                break;

            case 2: // Show All Items
                if(count == 0) {
                    printf("Inventory Empty!\n");
                }
                else {
                    printf("\nID Name Price Qty Total\n");
                    for(i = 0; i < count; i++) {
                        printf("%d %s %.2f %d %.2f\n",
                               itemId[i], itemName[i], price[i],
                               quantity[i], price[i] * quantity[i]);
                    }
                }
                break;

            case 3: // Search Item
                printf("Enter Item ID: ");
                scanf("%d", &searchId);
                found = 0;

                for(i = 0; i < count; i++) {
                    if(itemId[i] == searchId) {
                        found = 1;
                        printf("\n--- Item Found ---\n");
                        printf("ID: %d\n", itemId[i]);
                        printf("Name: %s\n", itemName[i]);
                        printf("Price: %.2f\n", price[i]);
                        printf("Quantity: %d\n", quantity[i]);
                        printf("Total Value: %.2f\n", price[i] * quantity[i]);
                        break;
                    }
                }

                if(found == 0) {
                    printf("Item ID %d not found!\n", searchId);
                }
                break;

            case 4: // Add Stock
                printf("Enter Item ID: ");
                scanf("%d", &searchId);
                found = 0;

                for(i = 0; i < count; i++) {
                    if(itemId[i] == searchId) {
                        found = 1;
                        printf("Current Stock: %d\n", quantity[i]);
                        printf("Enter Quantity to Add: ");
                        scanf("%d", &addQty);

                        if(addQty <= 0) {
                            printf("Invalid quantity!\n");
                        }
                        else {
                            quantity[i] = quantity[i] + addQty;
                            printf("Stock Updated! New Qty: %d\n", quantity[i]);
                        }
                        break;
                    }
                }

                if(found == 0) {
                    printf("Item not found!\n");
                }
                break;

            case 5: // Sell Item
                printf("Enter Item ID: ");
                scanf("%d", &searchId);
                found = 0;

                for(i = 0; i < count; i++) {
                    if(itemId[i] == searchId) {
                        found = 1;
                        printf("Item: %s\n", itemName[i]);
                        printf("Available: %d\n", quantity[i]);
                        printf("Enter Quantity to Sell: ");
                        scanf("%d", &sellQty);

                        if(sellQty <= 0) {
                            printf("Invalid quantity!\n");
                        }
                        else if(sellQty > quantity[i]) {
                            printf("Not enough stock! Only %d left\n", quantity[i]);
                        }
                        else {
                            quantity[i] = quantity[i] - sellQty;
                            printf("Sold! Bill Amount: %.2f\n", sellQty * price[i]);
                            printf("Remaining Stock: %d\n", quantity[i]);
                        }
                        break;
                    }
                }

                if(found == 0) {
                    printf("Item not found!\n");
                }
                break;

            case 6: // Total Inventory Value
                if(count == 0) {
                    printf("Inventory Empty!\n");
                }
                else {
                    totalValue = 0;
                    for(i = 0; i < count; i++) {
                        totalValue = totalValue + (price[i] * quantity[i]);
                    }
                    printf("Total Inventory Value: Rs %.2f\n", totalValue);
                    printf("Total Items: %d\n", count);
                }
                break;

            case 7: // Low Stock Alert
                printf("Enter minimum stock limit: ");
                scanf("%d", &sellQty); // reusing variable
                found = 0;

                printf("\nLow Stock Items\n");
                printf("ID Name Qty\n");
                for(i = 0; i < count; i++) {
                    if(quantity[i] <= sellQty) {
                        printf("%d %s %d\n", itemId[i], itemName[i], quantity[i]);
                        found = 1;
                    }
                }

                if(found == 0) {
                    printf("No items below stock limit!\n");
                }
                break;

            case 8: // Exit
                printf("Exiting Inventory System. Bye!\n");
                return 0;

            default:
                printf("Invalid Choice! Enter 1-8\n");
        }
    }

    return 0;
}