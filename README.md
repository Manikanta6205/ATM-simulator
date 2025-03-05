# ATM Simulator in C

This project is a simple **ATM Simulator** implemented in **C**. It replicates basic ATM functionalities like cash withdrawal, cash deposit, balance inquiry, PIN change, and transaction history.

The program is designed to run in the **Turbo C** environment, using graphics and console features. Follow the installation steps below to set up Turbo C and run the project!

## 🛠️ Features

- **PIN Authentication:** Secure login with a 4-digit PIN.  
- **Cash Withdrawal:** Withdraw amounts in multiples of 50, with balance checks.  
- **Cash Deposit:** Deposit cash with minimum and multiple-of-50 validation.  
- **Balance Inquiry:** View the current account balance.  
- **Mini Statement:** Track up to 4 recent transactions with timestamps.  
- **PIN Change:** Update your PIN after verifying the current one.  
- **Transaction Limits:** Limits unsuccessful PIN entries and transaction attempts.

## 📂 File Structure

```
├── atm_simulator.c   # Main source code
├── README.md         # Project documentation
```

## 🖥️ Requirements

- **Turbo C** compiler  
- **DOSBox** (for modern systems, if needed)

## 🛠️ Installation & Setup

### Step 1: Download Turbo C  
1. Download **Turbo C++** from [here](https://turboc.codeplex.com/).  
2. Extract the ZIP file and install the software.

### Step 2: Set Up Turbo C  
1. Open Turbo C.  
2. Set up the **BGI Graphics Path**:  
   - In Turbo C, go to **Options → Directories**.  
   - Set **Include Directories** to: `C:\TURBOC3\INCLUDE`  
   - Set **Library Directories** to: `C:\TURBOC3\LIB`  
3. Save the settings.

### Step 3: Compile & Run the Program  
1. Create a new file in Turbo C and copy the code from `atm_simulator.c`.  
2. Press **F2** to save the file.  
3. Press **Alt + F9** to compile the code.  
4. Press **Ctrl + F9** to run the program.  
5. Press **Alt + F5** to view the output window (if it closes too quickly).

### Step 4: Test the ATM Simulator  
- **Default PIN:** `1234`  
- **Try out different options:**  
  - Deposit and withdraw money  
  - Check your balance  
  - View the mini statement  
  - Change your PIN

## 🏁 Usage

Once you run the program, you’ll see a welcome screen. Follow the on-screen prompts:  
1. Enter your **PIN** to log in.  
2. Choose an option (Deposit, Withdraw, etc.) from the **main menu**.  
3. After completing your transactions, select **Exit** to close the ATM session.

## 🚩 Known Limitations

- Only supports up to **4 transactions** per session.  
- No persistent storage — balance and transaction history reset on restart.  
- The **graphics functions** require Turbo C’s **BGI library**.

## 📜 License

This project is for educational purposes. Feel free to modify and experiment with the code!

---

