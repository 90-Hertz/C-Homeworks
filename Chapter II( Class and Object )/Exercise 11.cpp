#include<iostream>
#include<iomanip>
using namespace std;

class HangHoa{
	private:
		string name;
		string id;
		float price;
		int quantity;
		float totalPrice;
	public:
		HangHoa(){}
		HangHoa(string name, string id, float price, int quantity){
			this->name = name;
			this->id = id;
			this->price = price;
			this->quantity = quantity;
		}
		~HangHoa(){}
		
		void init(){
			setName();
			setId();
			setPrice();
			setQuantity();
			caculateTotalPrice();
		}
		void setName(){
			cin.ignore();
			cout << "Name: "; getline(cin, name);
		}
		string getName(){
			return name;
		}
		void setId(){
			cout << "Id: " ; getline(cin, id);
		}
		string getId(){
			return id;
		}
		void setPrice(){
			do{
			cout << "Price: " ; cin >> price;	
			}while(price < 0);
		}
		float getPrice(){
			return price;
		}
		void setQuantity(){
			do{
			cout << "Quantity: "; cin >> quantity;	
			}while(quantity < 0);
		}
		int getQuantity(){
			return quantity;
		}
		void caculateTotalPrice(){
			totalPrice = quantity * price;
		}
		float getTotalPrice(){
			return totalPrice;
		}
		
		void printInfo(){
			cout << left << setw(20) << name 
				 << setw(10) << totalPrice << endl;
		}
};

class HoaDon{
	private:
		string idOfBill;
		string dayOfBill;
		string peopleCreateBill;
		int numberOfItem;
		HangHoa hangHoa[100];
		float totalBill;
	public:
		HoaDon(){}
		~HoaDon(){}
		
		void init(){
			setIdOfBill();
			setDayOfBill();
			setPeopleCreateBill();
			setNumberOfItem();
		}
		void setIdOfBill(){
			cout << "ID Of Bill: " ; cin >> idOfBill;
		}
		string getIdOfBill(){
			return idOfBill;
		}
		void setDayOfBill(){
			cin.ignore();
			cout << "Day Of Bill: " ; getline(cin, dayOfBill);
		}
		string getDayOfBill(){
			return dayOfBill;
		}
		void setPeopleCreateBill(){
			cout << "People Create Bill: " ; getline(cin, peopleCreateBill);
		}
		string getPeopleCreateBill(){
			return peopleCreateBill;
		}
		void setNumberOfItem(){
			do{
				cout << "Number Of Item(s): " ; cin >> numberOfItem;
			}while(numberOfItem < 0 || numberOfItem > 100);
		}
		int getNumberOfItem(){
			return numberOfItem;
		}
		
		void enterItem(){
			for(int i=0 ; i<numberOfItem ; i++){
				hangHoa[i].init();
			}
		}
		void totalBillPrice(){
			totalBill = 0;
			for(int i=0 ; i<numberOfItem ; i++){
				totalBill += hangHoa[i].getTotalPrice();
			}
		}
		void printBill(){
			cout << "Hoa don" << endl;
			for(int i=0 ; i<numberOfItem ; i++){
				hangHoa[i].printInfo();
			}
		}
};
int main(){
	HoaDon hoadon;
	hoadon.init();
	hoadon.enterItem();
	hoadon.totalBillPrice();
	hoadon.printBill();
	return 0;
}

