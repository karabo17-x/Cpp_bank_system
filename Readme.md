##ATM Console Application (C++)

This is a simple ATM-style console application written in C++. It allows users to:

- View their current balance  
- Deposit money into their account  
- Withdraw cash in predefined or custom amounts  
- Exit the application

## 🧾 Features

- Menu-driven interface  
- Input validation  
- Support for custom withdrawal amounts  
- Basic error handling (invalid options, insufficient funds, etc.)

## 💻 Getting Started

### Prerequisites

You'll need a C++ compiler such as:

- g++
- clang++
- Microsoft Visual C++

### 🔧 How to Compile

Using g++ (on Linux, macOS, or Windows with MinGW):

```bash
g++ -o atm_app atm.cpp

###📝 Sample intersection 
**********MENU**********
1. Balance
2. Deposit
3. Withdrawal
4. Exit
Enter an option to proceed: 1
Balance: R50

**********MENU**********
1. Balance
2. Deposit
3. Withdrawal
4. Exit
Enter an option to proceed: 2
Enter deposit amount: R100
New balance: R150


### File Structure 📁
atm.cpp        # Main source code file
README.md      # Project description and instructions 
