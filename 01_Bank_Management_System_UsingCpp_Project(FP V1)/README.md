# Bank_Management_System_UsingCpp_Project
#### This project is a Bank Management System implemented in C++. It provides a console-based interface for managing client records, performing transactions, and handling  various banking operations. The system allows users to add, delete, update, and find clients, as well as perform deposit and withdrawal transactions. It also provides  functionality to display the total balances of all clients.

#### The program uses file handling to store and retrieve client data in a text file (Clients.txt). The data is stored in a structured format, and the program leverages functional programming principles to manage client records and transactions.

#### Features
The Bank Management System includes the following functionalities:

### 1. Client Management
Add New Client: Add a new client with details such as Account Number, Pin Code, Name, Phone, and Account Balance.

Delete Client: Delete a client by their Account Number.

Update Client: Update client information (Pin Code, Name, Phone, and Account Balance) using their Account Number.

Find Client: Search for a client by their Account Number and display their details.

Show All Clients: Display a list of all clients with their details.

### 2. Transactions
Deposit: Deposit an amount into a client's account.

Withdraw: Withdraw an amount from a client's account (with validation to ensure the withdrawal amount does not exceed the account balance).

Show Total Balances: Display the total balance of all clients in the system.

### 3. File Handling
The program uses a text file (Clients.txt) to store client data persistently.

Data is stored in a structured format using a separator (#//#) to differentiate between fields.

### 4. Functional Programming Concepts
Pure Functions: Functions like ConvertLinetoRecord and ConvertRecordToLine are pure functions that take input and return output without modifying external state.

Higher-Order Functions: Functions like FindClientByAccountNumber and MarkClientForDeleteByAccountNumber operate on collections of data (vectors) and apply logic to each element.

Immutability: The program avoids modifying global state directly. Instead, it uses local variables and passes data between functions.

Function Composition: Functions like LoadCleintsDataFromFile and SaveCleintsDataToFile are composed to handle file operations and data transformations.

Project Structure
The project is organized into the following components:

### 1. Data Structures
sClient Struct: Represents a client with the following attributes:

AccountNumber: Unique identifier for the client.

PinCode: Security code for the client.

Name: Full name of the client.

Phone: Contact number of the client.

AccountBalance: Current balance in the client's account.

MarkForDelete: Flag to mark a client for deletion.

### 2. Core Functions
SplitString: Splits a string into a vector of substrings based on a delimiter. This is a pure function that takes a string and returns a vector.

ConvertLinetoRecord: Converts a line from the file into an sClient object. This is a pure function that transforms data without side effects.

ConvertRecordToLine: Converts an sClient object into a string for file storage. This is another pure function.

ClientExistsByAccountNumber: Checks if a client with a given Account Number already exists. This function operates on a collection of clients.

ReadNewClient: Reads client details from the user and returns an sClient object.

LoadCleintsDataFromFile: Loads client data from the file into a vector of sClient objects. This function uses file I/O and data transformation.

SaveCleintsDataToFile: Saves client data from a vector of sClient objects back to the file. This function ensures data persistence.

AddDataLineToFile: Appends a new client record to the file. This function handles file operations.

### 3. User Interface Functions
ShowMainMenue: Displays the main menu and handles user input.

ShowTransactionsMenue: Displays the transactions menu and handles user input.

ShowAllClientsScreen: Displays a list of all clients.

ShowTotalBalancesScreen: Displays the total balances of all clients.

ShowAddNewClientsScreen: Allows the user to add new clients.

ShowDeleteClientScreen: Allows the user to delete a client.

ShowUpdateClientScreen: Allows the user to update client information.

ShowFindClientScreen: Allows the user to find a client by Account Number.

ShowDepositScreen: Allows the user to deposit money into a client's account.

ShowWithDrawScreen: Allows the user to withdraw money from a client's account.
