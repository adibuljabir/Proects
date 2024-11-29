```markdown
# TA-DA Tour Diary and Transport Bill Generator

A command-line application for documenting tour details and calculating transport expenses.

---

## Table of Contents

- [Overview](#overview)
- [System Requirements](#system-requirements)
- [User Guide](#user-guide)
- [Developer Guide](#developer-guide)
- [Testing and Improvements](#testing-and-improvements)
- [Support](#support)

---

## Overview

The **TA-DA Tour Diary and Transport Bill Generator** enables users to record transport journeys and calculate associated expenses. It outputs logs and expense reports in easily readable formats.

---

## System Requirements

1. **Operating System**: Windows/Linux/MacOS
2. **Software**: A terminal/command-line interface

---

## User Guide

### Step-by-Step Instructions

1. **Start the Program**  
   - Download `TA-DA Tour & Transport Bill Generator.exe`.  
   - Run the program in your terminal.

2. **Journey Type Selection**  
   Choose the type of journey:  
   - `1`: Departed with goods  
   - `2`: Returned with goods  

3. **Enter Journey Details**  
   - **Goods Name**: Describe the items carried.  
   - **Order Date**: Provide the order date in `DD MM YYYY` format.  
   - **Departure and Arrival**: Input locations and times for both legs of the journey.  
   - **Distance**: Specify the distance in kilometers.  
   - **Transport Vehicle**: Indicate the type of vehicle used.

4. **Enter Expenses**  
   - Loading cost in Tk.  
   - Transportation cost in Tk.  
   - Unloading cost in Tk.

5. **Generate Reports**  
   - **Tour Diary**: Logs journey details in `Tour_Diary.txt`.  
   - **Transport Bill**: Records expenses in `Transport_Bill.txt`.

6. **Add More or Exit**  
   - Enter `1` to log another journey.  
   - Enter `0` to exit the program.

---

### Example Outputs

**Tour_Diary.txt**  
```
| 01-11-2024 | Starting On 01-11-2024 at 08:00, I departed from City A and arrived at City B with Electronics on 01-11-2024 at 14:00, total distance: 300 km | While Returning On 02-11-2024 at 10:00, I departed from City B and arrived at City A on 02-11-2024 at 16:00, total distance: 300 km |
```

**Transport_Bill.txt**  
```
| 01-11-2024 | Expenditure bill for porter/labor wages for loading Electronics in a Truck from the store of City A | 500.00 tk 
| 01-11-2024 | Expense bill for transportation of Electronics from City A to City B via Truck | 2000.00 tk 
| 01-11-2024 | Expenditure bill for porter/labor wages for unloading Electronics from Truck and carrying them to the store of City B | 300.00 tk 
                   Total expense of Your Journey is 500.00 + 2000.00 + 300.00 = 2800.00 tk 
```

---

### Notes

- Use correct date/time formats.  
- Avoid special characters in goods names or locations.  
- Logs are stored in the same directory as the program.

---

## Developer Guide

### Code Structure

1. **Input Handling**  
   - Collects journey details, expenses, and goods names.  
   - Validates journey type and date formats.

2. **File Operations**  
   - Appends data to `Tour_Diary.txt` and `Transport_Bill.txt`.  

3. **Expense Calculation**  
   - Records individual and total expenses.

4. **Restart Mechanism**  
   - Allows users to log multiple journeys in one session.

---

### Code Walkthrough

1. **File Handling**  
   - Opens files in append mode:
   ```c
   FILE *Tour_Diary = fopen("Tour_Diary.txt", "a");
   FILE *Transport_Bill = fopen("Transport_Bill.txt", "a");
   ```

2. **Journey Type Input**  
   - Ensures valid input:
   ```c
   do {
       printf("Declare Your Journey Type:\n1. Departed with goods\n2. Returned with goods\n");
       scanf("%d", &case_);
   } while (case_ != 1 && case_ != 2);
   ```

3. **Data Logging**  
   - Logs journey details using `fprintf`.

4. **Restart Option**  
   - Prompts users to continue or exit.

---

## Testing and Improvements

### Test Cases

1. Valid journey details for both options.  
2. Validates file creation and data writing.  
3. Handles invalid inputs gracefully.  
4. Checks restart functionality.

### Areas for Improvement

1. Input validation:  
   - Validate dates and prevent negative distances or expenses.  

2. Enhanced user experience:  
   - Implement a GUI.  
   - Support CSV/JSON output formats.  

3. Modular Code:  
   - Split large functions into smaller, reusable ones.

4. Cross-platform compatibility:  
   - Ensure file handling works across OS environments.

---

## Support

For issues or enhancements, contact the developer:  
**Adibul Jabir**  
Email: [adibuljabir@outlook.com](mailto:adibuljabir@outlook.com)
```
