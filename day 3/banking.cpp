#include <iostream>
#include <string>
using namespace std;

class bank_account{
	private:
	std::string depositor_Name;
    int account_Number;
    std::string account_Type;
    double balance;
    public:
    //constructor
    bank_account(const std::string &name, int accNum, const std::string &type, double initialBalance) {
        depositor_Name = name;
        account_Number = accNum;
        account_Type = type;
        balance = initialBalance;
        std::cout << "Account for " << name << " created" << std::endl;
    }

    // Destructor
    ~bank_account() {
        std::cout << "Account for " << depositor_Name << " removed" << std::endl;
    }

    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited " << amount << " into the account. New balance: " << balance << std::endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawn " << amount << " from the account. New balance: " << balance << std::endl;
        } else {
            std::cout << "Insufficient balance. Withdrawal failed." << std::endl;
        }
    }

    void display() {
        std::cout << "Account Holder: " << depositor_Name << std::endl;
        std::cout << "Account Balance: " << balance << std::endl;
        
    }
};

int main() {
    bank_account account1("karthik", 101, "Savings", 1000.0);
    bank_account account2("pavan", 102, "Current", 1500.0);

    int choice;
    do {
        std::cout << "\nBank Account Options:\n";
        std::cout << "1. Deposit\n";
        std::cout << "2. Withdraw\n";
        std::cout << "3. Display Account Details\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
            	double amount;
            	std::cout<<"enter account number and name = ";
            	int a;
            	std::cin>>a;
            	std::string n;
            	std::cin>>n;
				 if(a == 101 && n == "karthik"){
				 
                std::cout << "Enter the deposit amount: ";
                std::cin >> amount;
                account1.deposit(amount);}
                
                else if(a== 102 && n == "pavan"){
                std::cout << "Enter the deposit amount: ";
                std::cin >> amount;
                account2.deposit(amount);
				}
				else {
					cout<<"invalid account details";
				}
                break;
            }
            case 2: {
                double amount;
            	std::cout<<"enter account number and name = ";
            	int a;
            	std::cin>>a;
            	std::string n;
            	std::cin>>n;
				 if(a == 101 && n == "karthik"){
				 
                std::cout << "Enter the withdrawal amount: ";
                std::cin >> amount;
                account1.withdraw(amount);}
                
                else if(a== 102 && n == "pavan"){
                std::cout << "Enter the withdrawal amount: ";
                std::cin >> amount;
                account2.withdraw(amount);;
				}
				else {
					cout<<"invalid account details";
				}
                break;
            }
            case 3:
            	double acc;
            	cout<<"enter account number";
            	cin>>acc;
            	if(acc == 101){
                account1.display();}
                else{
                	account2.display();
				}
            
                break;
            case 4:
                std::cout << "Exiting the program" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}
