#include<iostream>
using namespace std;

class Invoice{
	private:
		string itemCode;
		string itemDescription;
		int quantity;
		int price;
	public:
		void init(string itemCode, string itemDescription, int quantity, int price){
			this->itemCode = itemCode;
			this->itemDescription = itemDescription;
			this->quantity = quantity;
			this->price = price;
		}
		//get&set code
		void setItemCode(){
			cout << "Item code: ";
			cin.ignore();
			getline(cin,itemCode);
		}
		string getItemCode(){
			return itemCode;
		}
		//get&set description
		void setItemDescription(){
			cout << "Item Description: ";
			cin.ignore();
			getline(cin,itemDescription);
		}
		string getItemDescription(){
			return itemDescription;
		}
		//get&set quantity
		void setItemQuantity(){
			cout << "Item quantity: ";
			cin >> quantity;
		}
		int getItemQuantity(){
			return quantity;
		}
		//get&set price
		void setItemPrice(){
			cout << "Item price: ";
			cin >> price;
		}
		int getItemPrice(){
			return price;
		}
		
		int getInvoiceAmount(){
			if(quantity < 0){
				quantity = 0;
			}
			if(price < 0){
				price = 0;
			}
			return quantity * price;
		}
};
int main(){
	Invoice eggs;
	eggs.setItemCode();
	eggs.setItemDescription();
	eggs.setItemPrice();
	eggs.setItemQuantity();
	cout << eggs.getInvoiceAmount();
	return 0;
}

