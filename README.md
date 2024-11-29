Here is the **Markdown file** for the "User Guide for TA-DA Tour Diary and Transport Bill Generator":

```markdown
# User Guide for TA-DA Tour Diary and Transport Bill Generator

## Overview
The TA-DA Tour Diary and Transport Bill Generator is a command-line application designed to document tour details and calculate transport expenses. Follow these steps to use the program effectively.

---

## System Requirements
1. **Operating System**: Windows/Linux/MacOS.
2. **Required Tools**: A terminal/command-line interface.

---

## Step-by-Step Instructions

### 1. Start the Program:
- Download **TA-DA Tour & Transport Bill Generator.exe**.
- Run **TA-DA Tour & Transport Bill Generator.exe**.

### 2. Journey Type Selection:
- Choose between:
  - **1**: Departed with goods.
  - **2**: Returned with goods.

### 3. Enter Journey Details:
- **Goods Name**: Describe the items carried.
- **Order Date**: Provide the date of order in **DD MM YYYY** format.
- **Departure Details**: Input the location and time of departure.
- **Arrival Details**: Input the location and time of arrival.
- **Distance**: Provide the distance between the locations.
- **Return Journey Details**:
  - Input the location and time of departure and arrival.
- **Transport Vehicle**: Specify the type of vehicle used.

### 4. Enter Expenses:
- Enter amounts for:
  - **Loading (tk)**.
  - **Transportation (tk)**.
  - **Unloading (tk)**.

### 5. Generate Reports:
- **Tour Diary**: Logs your journey details in `Tour_Diary.txt`.
- **Transport Bill**: Records expense details in `Transport_Bill.txt`.

### 6. Add More or Exit:
- After generating reports, you’ll be prompted:
  - **1**: Add another journey.
  - **0**: Exit the program.

---

## Output Examples

### **Tour_Diary.txt**
```
| 01-11-2024 | Starting On 01-11-2024 at 08:00, I departed from City A and arrived at City B with Electronics on 01-11-2024 at 14:00, total distance: 300 km | While Returning On 02-11-2024 at 10:00, I departed from City B and arrived at City A on 02-11-2024 at 16:00, total distance: 300 km |
```

### **Transport_Bill.txt**
```
| 01-11-2024 | Expenditure bill for porter/labor wages for loading Electronics in a Truck from the store of City A | 500.00 tk 
| 01-11-2024 | Expense bill for transportation of Electronics from City A to City B via Truck | 2000.00  tk 
| 01-11-2024 | Expenditure bill for porter/labor wages for unloading Electronics from Truck and carrying them to the store of City B | 300.00 tk 
                   Total expense of Your Journey is 500.00 + 2000.00 + 300.00 = 2800.00 tk 
```

---

## Notes
- Ensure proper formatting of dates and times.
- Avoid using special characters in text inputs like goods names or locations.
- Files (`Tour_Diary.txt` and `Transport_Bill.txt`) are created in the same directory as the program if they don't exist.

---

## Support
For issues or enhancements, please contact the developer:

**Developer**: Adibul Jabir  
**Email**: [adibuljabir@outlook.com](mailto:adibuljabir@outlook.com)
```

Save this content as `User_Guide.md`. Let me know if you need further modifications!
