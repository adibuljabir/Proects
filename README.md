# TA-DA Tour Diary and Transport Bill Generator

**Author**: Adibul Jabir  
**Version**: 1.0  
**License**: Open Source  

---

## **Overview**
The **TA-DA Tour Diary and Transport Bill Generator** is a simple C program designed to assist in managing tour diaries and generating transport bill records. It logs journey details and calculates expenses related to the transportation of goods, making it ideal for small-scale operations or personal use.

---

## **Features**
- Supports two journey types:
  - Departure with goods.
  - Return with goods.
- Logs journey details:
  - Dates, times, and locations.
  - Distances traveled.
  - Goods transported.
- Records transport expenses:
  - Loading, transportation, and unloading costs.
- Outputs logs in two separate text files:
  - `Tour_Diary.txt`
  - `Transport_Bill.txt`

---

## **Setup Instructions**

### **Prerequisites**
- C compiler (e.g., GCC).
- Text editor or Integrated Development Environment (IDE).

### **Compilation**
1. Save the source code in a file named `TourDiaryGenerator.c`.
2. Compile the program using the following command:
   ```bash
   gcc -o TourDiaryGenerator TourDiaryGenerator.c
   ```

### **Execution**
Run the program using:
```bash
./TourDiaryGenerator
```

---

## **Usage Instructions**
1. **Select Journey Type**:  
   - Option 1: Departed with goods.  
   - Option 2: Returned with goods.  
2. **Provide Journey Details**:  
   - Departure and destination locations.  
   - Dates, times, and distances.  
   - Goods carried.  
   - Vehicle details and associated costs.  
3. **View Results**:  
   - Journey logs are saved in `Tour_Diary.txt`.  
   - Expense breakdown is saved in `Transport_Bill.txt`.  
4. **Repeat or Exit**:  
   - You can restart the process or exit the program.

---

## **File Output Details**

### **Tour_Diary.txt**
Logs journey details, including:
- Departure and destination locations.
- Dates, times, and distances.
- Goods carried.

**Example**:
```
| 25-11-2024 | Starting On 25-11-2024 at 08:30, I departed from City A and arrived at City B with Electronics on 25-11-2024 at 12:00, total distance: 150 km | While Returning On 26-11-2024 at 14:00, I departed from City B and arrived at City A on 26-11-2024 at 18:30, total distance: 150 km |
--------------------------------------------------------------------------------------------------------------------------------
```

### **Transport_Bill.txt**
Provides a breakdown of expenses:
- Loading, transportation, and unloading costs.
- Total expense for the journey.

**Example**:
```
| 25-11-2024 | Expenditure bill for porter/labor wages for loading Electronics in a Truck from the store of City A | 150.00 tk
| 25-11-2024 | Expense bill for transportation of Electronics from City A to City B via Truck | 1200.00 tk
| 25-11-2024 | Expenditure bill for porter/labor wages for unloading Electronics from Truck and carrying them to the store of City B | 200.00 tk
                   Total expense of Your Journey is 150.00 + 1200.00 + 200.00 = 1550.00 tk
----------------------------------------------------------------------------------------------------------------------------
```

---

## **Error Handling**
- Displays an error if the program cannot open `Tour_Diary.txt` or `Transport_Bill.txt`.
- Ensures inputs are validated for journey type and date formats.

---

## **Future Improvements**
- Add more journey types.
- Support CSV or PDF export.
- Include a graphical interface for user convenience.

---

## **Contribution**
Feel free to contribute by:
1. Forking the repository.
2. Creating a branch for your feature or bug fix.
3. Submitting a pull request with a clear description.

---

**Happy Logging! 😊**
