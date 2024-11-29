# User Guide for TA-DA Tour Diary and Transport Bill Generator  

## **Overview**  
The TA-DA Tour Diary and Transport Bill Generator is a command-line application designed to document tour details and calculate transport expenses. Follow these steps to use the program effectively.  

---

## **System Requirements**  
1. **Operating System**: Windows, Linux, or MacOS.  
2. **Terminal/Command-line Interface**: Required to run the application.  

---

## **Step-by-Step Instructions**  

### **1. Start the Program**  
- Download **`TA-DA Tour & Transport Bill Generator.exe`**.  
- Run the downloaded executable file.  

### **2. Journey Type Selection**  
Choose between:  
- **1**: Departed with goods.  
- **2**: Returned with goods.  

### **3. Enter Journey Details**  
Provide the following details:  
- **Goods Name**: Description of the items carried.  
- **Order Date**: Date of the order in **DD MM YYYY** format.  
- **Departure Details**: Location and time of departure.  
- **Arrival Details**: Location and time of arrival.  
- **Distance**: Distance between the locations (in km).  
- **Return Journey Details**:  
  - Departure and arrival locations with times.  
- **Transport Vehicle**: Specify the vehicle used.  

### **4. Enter Expenses**  
Provide expenses for the following categories:  
- **Loading** (in Taka).  
- **Transportation** (in Taka).  
- **Unloading** (in Taka).  

### **5. Generate Reports**  
- **Tour Diary**: Logs journey details into `Tour_Diary.txt`.  
- **Transport Bill**: Records expense details in `Transport_Bill.txt`.  

### **6. Add More or Exit**  
After generating reports, you’ll be prompted to:  
- **1**: Add another journey.  
- **0**: Exit the program.  

---

## **Output Examples**  

### **Tour_Diary.txt**  
```
| 01-11-2024 | Starting On 01-11-2024 at 08:00, I departed from City A and arrived at City B with Electronics on 01-11-2024 at 14:00, total distance: 300 km | While Returning On 02-11-2024 at 10:00, I departed from City B and arrived at City A on 02-11-2024 at 16:00, total distance: 300 km |
```

### **Transport_Bill.txt**  
```
| 01-11-2024 | Expenditure bill for porter/labor wages for loading Electronics in a Truck from the store of City A | 500.00 tk  
| 01-11-2024 | Expense bill for transportation of Electronics from City A to City B via Truck | 2000.00 tk  
| 01-11-2024 | Expenditure bill for porter/labor wages for unloading Electronics from Truck and carrying them to the store of City B | 300.00 tk  
Total expense of Your Journey is 500.00 + 2000.00 + 300.00 = 2800.00 tk  
```

---

## **Notes**  
- Ensure proper formatting of dates and times.  
- Avoid using special characters in text inputs like goods names or locations.  
- Files (`Tour_Diary.txt` and `Transport_Bill.txt`) are created in the same directory as the program if they don't exist.  

---

## **Support**  
For issues or enhancements, contact the developer:  
- **Adibul Jabir**  
- **Email**: adibuljabir@outlook.com  

---

# Developer Guide for TA-DA Tour Diary and Transport Bill Generator  

---

## **Overview**  
This guide explains the internal workings of the program to help developers understand the code and contribute effectively. The program is written in **C** and serves to record transport journeys and calculate expenses for carrying goods.  

---

## **Code Structure**  

### **1. Input Handling**  
- Users input journey details, including dates, locations, goods, and expenses.  
- Inputs are validated for correct journey types and date formats.  

### **2. File Operations**  
- **Files Used**:  
  - `Tour_Diary.txt`: Logs journey details.  
  - `Transport_Bill.txt`: Logs transport expenses.  
- Files are opened in **append mode** to preserve previous data.  

### **3. Logic Flow**  
- **Do-While Loop**: Used for iterative input.  
- **Menu Selection**: Allows selection of journey type (depart or return).  
- Data is processed and written to respective files.  

### **4. Expense Calculation**  
- Individual and total expenses are recorded for each journey.  
- Expense types include loading, transportation, and unloading.  

---

## **Code Walkthrough**  

### **1. File Handling**  
```c
FILE *Tour_Diary = fopen("Tour_Diary.txt", "a");
FILE *Transport_Bill = fopen("Transport_Bill.txt", "a");
if (Tour_Diary == NULL || Transport_Bill == NULL) {
    printf("Error opening files.\n");
    return 1;
}
```
- Opens files in append mode.  
- Ensures data is not overwritten.  

### **2. User Input and Validation**  
```c
int case_;
printf("Declare Your Journey Type:\n1. Departed with goods\n2. Returned with goods\nSelect (ex. 1): ");
scanf("%d", &case_);
```
- Prompts user to select the journey type.  
- Input validation ensures only valid options are accepted.  

---

## **Key Features for Developers**  

### **1. Error Handling**  
- Ensures files are properly opened.  
- Prompts for valid journey type input.  

### **2. File Management**  
- Data is appended to ensure existing logs are preserved.  
- Files are closed after writing to prevent resource leaks.  

### **3. Modular Structure**  
- Inputs are grouped logically (goods, journey, expenses).  
- Output formatting is consistent.  

### **4. User-Friendly Design**  
- Clear prompts guide users.  
- Allows retries for invalid inputs.  

---

## **Areas for Improvement**  
1. **Input Validation**: Validate date/time correctness & prevent negative distances or expenses.  
2. **Error Messages**: Provide specific feedback for invalid inputs.  
3. **Modularity**: Break large functions into smaller helper functions for better readability.  
4. **Cross-Platform Compatibility**: Ensure file paths and newline handling are consistent across OS.  
5. **Dynamic Memory Allocation**: Introduce dynamic memory allocation for large data sets.  
6. **File Formats**: Add support for CSV or JSON file formats.  
7. **GUI**: Develop a graphical user interface for improved usability.  

---
