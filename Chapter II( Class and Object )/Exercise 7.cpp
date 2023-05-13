#include<iostream>
using namespace std;

class Account{
	private: 
		int accountBalance;
		
	public: 
		void create(int accountBalance){
			if(accountBalance >= 0){
				this->accountBalance = accountBalance;
			}
			else{
				this->accountBalance = 0;
				cout << "Error! Invalid initial balance !" << endl;
			}
		}
		
		void credit(){
			int amountOfMoney;
			cout << "Amount of money to add: ";
			cin >> amountOfMoney;
			accountBalance += amountOfMoney;
		}
		
		void debit(){ 
			int amountOfMoney;
			do{
				cout << "Amount of money to subtract:";
				cin >> amountOfMoney;
				if(accountBalance >= amountOfMoney){
					accountBalance -= amountOfMoney;
				}
				else{
					cout << "Error! Debit amount exceeds account balance clause !" << endl;
				}
			}while(accountBalance < amountOfMoney || amountOfMoney < 0);
		}
		
		void getBalance(){
			cout << "Current balance: " << accountBalance;
		}
};
int main(){
	int money = 500000;
	Account acc;
	acc.create(money);
	acc.credit();
	acc.debit();
	acc.getBalance();
	return 0;
}

