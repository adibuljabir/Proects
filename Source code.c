#include <stdio.h>
#include <string.h>

// TA-DA Tour Diary and Transport Bill Generator. By Adibul Jabir

int main()
{
    int restart; // Variable to control restarting the program
    do
    {
    // Open Tour_Diary file for appending
    FILE *Tour_Diary = fopen("Tour_Diary.txt", "a");
    if (Tour_Diary == NULL)
    {
        printf("Unable to open Tour_Diary for writing.\n");
        return 1; // Exit with error code
    }

    // Open Transport_Bill file for appending
    FILE *Transport_Bill = fopen("Transport_Bill.txt", "a");
    if (Transport_Bill == NULL)
    {
        printf("Unable to open Transport_Bill for writing.\n");
        fclose(Tour_Diary); // Ensure proper cleanup
        return 1;           // Exit with error code
    }

    // journey type
    int case_;
    do
    {
        printf("\nTA-DA Tour Diary and Transport Bill Generato. Only For the purpose of Carrying Document/goods \n \nDeclare Your Journey Type:\n");
        printf("1. Departed with goods\n");
        printf("2. Returned with goods\n");
        printf("Select (ex. 1): ");
        scanf("%d", &case_);
        if (case_ != 1 && case_ != 2)
        {
            printf("enter choice between 1 & 2");
        }

    } while (case_ != 1 && case_ != 2);

    if (case_ == 1 || case_ == 2)
    {

        getchar(); // Clear newline character
        char goods[100];
        printf("Goods name you carried: ");
        fgets(goods, sizeof(goods), stdin);
        goods[strcspn(goods, "\n")] = 0;

        // Depart section
        int day1, month1, year1;
        printf("Order Date (DD MM YYYY): ");
        scanf("%d %d %d", &day1, &month1, &year1);

        getchar(); // Clear newline character
        char location1[100];
        printf("Departed From: ");
        fgets(location1, sizeof(location1), stdin);
        location1[strcspn(location1, "\n")] = 0;

        int day2, month2, year2, hours2, minutes2;
        printf("Departed from %s at (DD MM YYYY HH MM): ", location1);
        scanf("%d %d %d %d %d", &day2, &month2, &year2, &hours2, &minutes2);

        getchar(); // Clear newline character
        char location2[100];
        printf("Destination: ");
        fgets(location2, sizeof(location2), stdin);
        location2[strcspn(location2, "\n")] = 0;

        int day3, month3, year3, hours3, minutes3;
        printf("Reached at %s on (DD MM YYYY HH MM): ", location2);
        scanf("%d %d %d %d %d", &day3, &month3, &year3, &hours3, &minutes3);

        int distance;
        printf("Enter Distance (in km): ");
        scanf("%d", &distance);

        // Return section
        int day4, month4, year4, hours4, minutes4;
        printf("Departed from %s at (DD MM YYYY HH MM): ", location2);
        scanf("%d %d %d %d %d", &day4, &month4, &year4, &hours4, &minutes4);

        int day5, month5, year5, hours5, minutes5;
        printf("Reached at %s on (DD MM YYYY HH MM): ", location1);
        scanf("%d %d %d %d %d", &day5, &month5, &year5, &hours5, &minutes5);

        // Input for Transport_Bill
        getchar(); // Clear newline character
        char vehicle[100];
        printf("Transport Vehicle: ");
        fgets(vehicle, sizeof(vehicle), stdin);
        vehicle[strcspn(vehicle, "\n")] = 0;

        float expense1, expense2, expense3;
        printf("Enter Expenses in tk.paisa (loading, transportation, unloading): ");
        scanf("%f %f %f", &expense1, &expense2, &expense3);

        if (case_ == 1)
        {
            // Writing on Tour_Diary

            fprintf(Tour_Diary, "| %02d-%02d-%04d | Starting On %02d-%02d-%04d at %02d:%02d, I departed from %s and arrived at %s with %s on %02d-%02d-%04d at %02d:%02d, total distance: %d km | While Returning On %02d-%02d-%04d at %02d:%02d, I departed from %s and arrived at %s on %02d-%02d-%04d at %02d:%02d, total distance: %d km |\n",
                    day1, month1, year1, day2, month2, year2, hours2, minutes2, location1, location2, goods, day3, month3, year3, hours3, minutes3, distance,
                    day4, month4, year4, hours4, minutes4, location2, location1, day5, month5, year5, hours5, minutes5, distance);
            fprintf(Tour_Diary, "--------------------------------------------------------------------------------------------------------------------------------\n");

            // Writing on Transport_Bill

            fprintf(Transport_Bill, "| %02d-%02d-%04d | Expenditure bill for porter/labor wages for loading %s in a %s from the store of %s | %.2f tk \n", day2, month2, year2, goods, vehicle, location1, expense1);
            fprintf(Transport_Bill, "| %02d-%02d-%04d | Expense bill for transportation of %s from %s to %s via %s | %.2f  tk \n", day3, month3, year3, goods, location1, location2, vehicle, expense2);
            fprintf(Transport_Bill, "| %02d-%02d-%04d | Expenditure bill for porter/labor wages for unloading %s from %s and carrying them to the store of %s | %.2f tk \n", day3, month3, year3, goods, vehicle, location2, expense3);
            fprintf(Transport_Bill, "                   Total expense of Your Journey is %.2f + %.2f + %.2f = %.2f tk \n", expense1, expense2, expense3, expense1 + expense2 + expense3);
            fprintf(Transport_Bill, "----------------------------------------------------------------------------------------------------------------------------\n");
        }

        else if (case_ == 2)
        {
            // Writing on Tour_Diary

            fprintf(Tour_Diary, "| %02d-%02d-%04d | Starting On %02d-%02d-%04d at %02d:%02d, I departed from %s, arrived at %s on %02d-%02d-%04d at %02d:%02d, total distance: %d km | While Returning On %02d-%02d-%04d at %02d:%02d, I departed with %s from %s and arrived at %s on %02d-%02d-%04d at %02d:%02d, total distance: %d km |\n",
                    day1, month1, year1, day4, month4, year4, hours2, minutes2, location1, location2, day3, month3, year3, hours3, minutes3, distance,
                    day4, month4, year4, hours4, minutes4, goods, location2, location1, day5, month5, year5, hours5, minutes5, distance);
            fprintf(Tour_Diary, "--------------------------------------------------------------------------------------------------------------------------------\n");

            // Writing on Transport_Bill

            fprintf(Transport_Bill, "| %02d-%02d-%04d | Expenditure bill for porter/labor wages for loading %s in a %s from the store of %s | %.2f tk \n", day4, month4, year4, goods, vehicle, location2, expense1);
            fprintf(Transport_Bill, "| %02d-%02d-%04d | Expense bill for transportation of %s from %s to %s via %s | %.2f  tk \n", day5, month5, year5, goods, location2, location1, vehicle, expense2);
            fprintf(Transport_Bill, "| %02d-%02d-%04d | Expenditure bill for porter/labor wages for unloading %s from %s and carrying them to the store of %s | %.2f tk \n", day5, month5, year5, goods, vehicle, location1, expense3);
            fprintf(Transport_Bill, "                   Total expense of Your Journey is %.2f + %.2f + %.2f = %.2f tk \n", expense1, expense2, expense3, expense1 + expense2 + expense3);
            fprintf(Transport_Bill, "----------------------------------------------------------------------------------------------------------------------------\n");
        }
    }
    else
        {
            printf("Invalid choice. Please restart the program and enter a valid option.\n");
        }

        fclose(Tour_Diary);     // Close the file
        fclose(Transport_Bill); // Close the file

        // Prompt user to restart or exit
        printf("\nSuccessfully Generated Your Tour Diary  & Transport Bill \nWant to add more? (1 for Yes, 0 for No): ");
        scanf("%d", &restart);

    } while (restart == 1);

    printf("Program exited. Thank you!\n");
    return 0;
}
