Personal Expense Tracker: Wallet.c
A menu-driven Personal Expense Tracker developed in C to help students manage their monthly budget, expenses, and savings.
1.Team Details
Batch: B26
Team Name: Byte The Budget
Team Members:
a.Riddhima Negi 590032013
b.Anviti Tripathi 590036807

2. Problem Statement
Build a simple expense tracker to help a student manage a monthly budget.
Requirements:
• Accept a monthly budget and record multiple expenses.
• Categorise expenses, such as food, travel, books, and entertainment.
• Calculate total spending and remaining budget.
• Display the category with the highest expenditure and issue a warning if the budget is exceeded.
Expected output: Expense summary, category-wise totals, and budget status.


3. Project Objectives
The objectives of the Personal Expense Tracker are:
To help users manage their monthly budget.
To record multiple expenses.
To classify expenses into different categories.
To calculate total and category-wise expenditure.
To calculate the amount remaining from the monthly budget.
To identify the category with the highest expenditure.
To warn the user when the monthly budget is exceeded.
To allow users to record and track savings.
To maintain a savings goal.
To store information permanently using file handling.
To maintain previous monthly financial reports.


4. Expense Categories
The program provides four expense categories:
Food
Travel
Stationery
Entertainment
Savings are maintained separately because savings are not considered an expense.

5. Main Features
5.1 Set Monthly Budget
The user enters:
Month name
Monthly budget
Example:
Enter month name: November
Enter monthly budget: Rs. 15000
The month name is stored along with the financial data and is displayed in the monthly reports.
5.2 Add Expense
The user can record an expense by entering:
Description
Category
Amount
The program supports up to 500 expense records in a month.
5.3 Add Savings
The user can allocate part of the monthly budget towards savings.
The program separately maintains:
Saved This Month – savings added during the current month.
Total Savings – accumulated savings carried across months.
5.4 View All Expenses
Displays all expenses recorded during the current month along with:
Description
Category
Amount
5.5 Category-wise Summary
Calculates expenditure under:
Food
Travel
Stationery
Entertainment
The program also identifies the category with the highest expenditure.
5.6 Budget Status
Displays:
Monthly budget
Total expenses
Savings made during the month
Available amount
The available amount is calculated as:
Available Amount = Monthly Budget - Total Expenses - Monthly Savings
If expenses and monthly savings together exceed the monthly budget, the program displays a warning.
5.7 Savings Goal
The user can set a savings target.
The program calculates savings progress using:
Savings Progress = (Total Savings / Savings Goal) × 100
It also informs the user when the savings goal has been achieved.
5.8 Monthly Financial Report
Displays a complete report containing:
Month name
Monthly budget
Total expenses
Monthly savings
Total accumulated savings
Available amount
Category-wise expenditure
Highest-spending category
Budget status
Savings goal and progress
5.9 Start New Month
The program allows the user to close the current month and begin a new one.
Before resetting the current month, its financial report is automatically stored in the monthly history file.
The following information is reset:
Monthly budget
Current expense records
Monthly savings
Savings goal
The user is then given two choices for accumulated savings:
Carry Savings Forward – keep accumulated savings for the next month.
Restart Savings – reset accumulated savings to Rs. 0.
The month name and new monthly budget are entered when the user selects Set Monthly Budget for the new month.
5.10 Previous Monthly Reports
Previous monthly reports can be viewed directly from the program.
Each archived report contains its month name so that reports from different months can be identified easily.

6. Main Menu
========================================
       PERSONAL EXPENSE TRACKER
========================================

Current Month      : November
Monthly Budget     : Rs. 15000.00
Total Expenses     : Rs. 6250.00
Saved This Month   : Rs. 1500.00
Total Savings      : Rs. 4500.00
Available          : Rs. 7250.00

----------------------------------------
1.  Set Monthly Budget
2.  Add Expense
3.  Add Savings
4.  View All Expenses
5.  Category-wise Summary
6.  Budget Status
7.  Savings Goal
8.  Monthly Financial Report
9.  Start New Month
10. View Previous Monthly Reports
0.  Exit
----------------------------------------
The menu uses three different border styles that rotate whenever the main menu is loaded. This makes different menu appearances easier to distinguish in the terminal.

7. C Programming Concepts Used
The project demonstrates the following concepts:
Variables and data types
Constants using #define
Arithmetic operators
Relational operators
Logical operators
Conditional statements (if, else if, else)
switch-case
for loops
do-while loops
Arrays
Character arrays / strings
Structures
Arrays of structures
User-defined functions
Function parameters
Functions with return values
Static variables
File handling
Standard input and output

8. Structure Used
Each expense is represented using a structure:
struct Expense
{
    char description[50];
    int category;
    float amount;
};
An array of structures is then created:
struct Expense expenses[MAX];
MAX is defined as:
#define MAX 500
Therefore, the program can store a maximum of 500 expenses per month.

9. Important Variables


10. Functions Used


11. File Handling
File handling is used so that information is not lost when the program closes.
The project uses two files.
expense_data.txt
Stores the current working data, including:
Current month
Monthly budget
Monthly savings
Total savings
Savings goal
Number of expenses
Expense descriptions
Expense categories
Expense amounts
The program automatically loads this file when it starts.
monthly_history.txt
Stores completed monthly financial reports.
The file is opened in append mode, which allows new reports to be added without deleting previous reports.
Example:
========================================
          MONTHLY FINANCIAL REPORT
             Month: October
========================================
Monthly Budget   : Rs. 15000.00
Total Expenses   : Rs. 8500.00
Saved This Month : Rs. 3000.00
Total Savings    : Rs. 5000.00
...

========================================
          MONTHLY FINANCIAL REPORT
             Month: November
========================================
Monthly Budget   : Rs. 18000.00
Total Expenses   : Rs. 10000.00
Saved This Month : Rs. 4000.00
Total Savings    : Rs. 9000.00
...

12. File Handling Functions Used
The following standard C file-handling functions are used:

The program uses the following file modes:
"r" – Read existing data.
"w" – Write current data and replace the previous current-state data.
"a" – Append a new monthly report without deleting previous reports.

13. Basic Algorithm
Start the program.
Load previously saved information from expense_data.txt, if available.
Display the main menu.
Ask the user to select an option.
Set the current month and monthly budget.
Allow the user to record expenses.
Store each expense using the Expense structure.
Allow the user to add money to savings.
Calculate total expenditure whenever required.
Calculate expenditure for each category.
Find the highest-spending category.
Calculate the available amount.
Compare total monthly allocation with the monthly budget.
Display a warning if the budget is exceeded.
Allow the user to create and monitor a savings goal.
Save changes to expense_data.txt.
Display a complete monthly financial report when requested.
When starting a new month:
Save the current report to monthly_history.txt.
Ask whether accumulated savings should be carried forward or restarted.
Clear the current month's expenses.
Reset the monthly budget.
Reset monthly savings.
Reset the savings goal.
Allow previous monthly reports to be viewed.
Continue until the user selects Exit.
Save the current data.
Stop the program.

14. Program Flow
START
  |
  v
Load Saved Data
  |
  v
Display Main Menu
  |
  v
User Selects Option
  |
  +---- Set Month & Budget
  |
  +---- Add Expense
  |
  +---- Add Savings
  |
  +---- View Expenses
  |
  +---- Category Summary
  |
  +---- Budget Status
  |
  +---- Savings Goal
  |
  +---- Financial Report
  |
  +---- Start New Month
  |        |
  |        +---- Archive Current Report
  |        |
  |        +---- Carry / Restart Savings
  |        |
  |        +---- Reset Monthly Data
  |
  +---- View Previous Reports
  |
  +---- Exit
           |
           v
       Save Data
           |
           v
          STOP


16. Sample Test Cases
Test Case 1 – Set Month and Budget
Input:
Month: November
Monthly Budget: 15000
Expected Output:
Budget set successfully!
Month          : November
Monthly Budget : Rs. 15000.00
Status: Passed

Test Case 2 – Add Expense
Input:
Description: Lunch
Category: 1
Amount: 500
Expected Output:
Expense added successfully!
Status: Passed

Test Case 3 – Category Summary
Input Data:
Food          : Rs. 2500
Travel        : Rs. 1200
Stationery    : Rs. 750
Entertainment : Rs. 1800
Expected Output:
Highest Spending Category: Food
Amount: Rs. 2500.00
Status: Passed

Test Case 4 – Budget Exceeded
Input Data:
Monthly Budget   = Rs. 10000
Total Expenses   = Rs. 9000
Monthly Savings  = Rs. 2000
Calculation:
9000 + 2000 = 11000

11000 > 10000
Expected Output:
WARNING: Budget exceeded!
Exceeded by: Rs. 1000.00
Status: Passed

Test Case 5 – Savings Goal
Input Data:
Savings Goal  = Rs. 5000
Total Savings = Rs. 3000
Expected Output:
Progress: 60.00%
Amount still needed: Rs. 2000.00
Status: Passed

Test Case 6 – File Storage
Steps:
Set the month and monthly budget.
Add expenses and savings.
Exit the program.
Run the program again.
Expected Result:
The previously entered month, budget, expenses and savings should automatically load from expense_data.txt.
Status: Passed

Test Case 7 – Start New Month With Savings Carry Forward
Initial Data:
Month         : November
Total Savings : Rs. 4000
Select:
Start New Month
Carry Savings Forward
Expected Result:
Monthly Budget   : Reset
Expenses         : Reset
Monthly Savings  : Reset
Savings Goal     : Reset
Total Savings    : Rs. 4000
The November report should also be stored in monthly_history.txt.
Status: Passed

Test Case 8 – Restart Savings
Initial Savings:
Total Savings: Rs. 4000
Select:
Start New Month
Restart Savings from Rs. 0
Expected Result:
Total Savings: Rs. 0.00
Status: Passed

17. Limitations
Month names are entered manually by the user.
The program uses text files rather than a database.
Expense categories are predefined.


18. Future Improvements
Possible future improvements include:
Editing or deleting individual expense records.
Adding more expense categories.
Searching expenses.
Adding yearly financial reports.
Comparing expenditure between months.


19. Conclusion
The Personal Expense Tracker is a menu-driven C application developed to help users manage their monthly finances.
The program allows users to record categorised expenses, manage savings, monitor a monthly budget, identify their highest-spending category, track a savings goal, and receive warnings when their 
budget is exceeded.
File handling allows current information to remain available after the program is closed. The monthly reset and history features also allow completed financial reports to be archived while giving 
the user the choice to carry accumulated savings forward or restart savings.
Through this project, we applied C programming concepts including variables, operators, conditional statements, loops, arrays, strings, structures, functions, static variables, and file handling to 
a practical real-world problem.
