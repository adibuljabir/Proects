# User Guide for TA-DA Tour Diary and Transport Bill Generator

## Overview
The **TA-DA Tour Diary and Transport Bill Generator** is a command-line application designed to document journey details and calculate transport expenses with ease. Follow this guide to effectively use the program.

---

## System Requirements
1. **Operating System**: Compatible with Windows, Linux, and MacOS.
2. **Tools Required**: A terminal or command-line interface.

---

## How to Use the Program

### 1. Start the Program
- Download the program: **TA-DA Tour & Transport Bill Generator.exe**.
- Double-click to run the executable.

### 2. Select Journey Type
- Choose one of the following options when prompted:
  - **1**: Departed with goods.
  - **2**: Returned with goods.

### 3. Enter Journey Details
You’ll be asked to provide the following information:
- **Goods Name**: Describe the items being transported.
- **Order Date**: Enter the order date in **DD MM YYYY** format.
- **Departure Details**:
  - Starting location.
  - Departure date and time (**DD MM YYYY HH MM**).
- **Arrival Details**:
  - Destination location.
  - Arrival date and time (**DD MM YYYY HH MM**).
- **Distance**: Specify the distance (in kilometers) between the locations.
- **Return Journey Details**:
  - Repeat the above for the return journey (if applicable).

### 4. Specify Transport Vehicle
Provide the type of vehicle used (e.g., Truck, Van).

### 5. Enter Expenses
Input the expenses incurred during the journey:
- **Loading costs** (in tk).
- **Transportation costs** (in tk).
- **Unloading costs** (in tk).

### 6. Generate Reports
The program will create or update the following files:
- **`Tour_Diary.txt`**: Logs journey details.
- **`Transport_Bill.txt`**: Records expense details.

### 7. Add More Records or Exit
Once the reports are generated, you will be asked:
- Enter **1** to add another journey.
- Enter **0** to exit the program.

---

## Output Examples

### **Sample Entry in Tour_Diary.txt**

---

## Notes and Best Practices
- Ensure proper formatting of **dates** and **times** (e.g., **DD MM YYYY HH MM**).
- Avoid special characters in inputs (e.g., goods names, locations).
- Files (`Tour_Diary.txt` and `Transport_Bill.txt`) will be created in the same directory as the program if they don’t already exist.

---

## Support
For assistance or feedback, reach out to the developer:

**Developer**: Adibul Jabir  
**Email**: [adibuljabir@outlook.com](mailto:adibuljabir@outlook.com)

