#include<iostream>
#include<iomanip>

using namespace std;

class Contact{
	private:
		string name;
		string agency;
		string position;
		string phoneNumber;
		string email;
	public:
		Contact(){}
		~Contact(){}
		void enterInfo(){
			cin.ignore();
			cout << "Name: " ; getline(cin, name);
			cout << "Agency: " ; getline(cin, agency);
			cout << "Position: " ; getline(cin, position);
			cout << "Phone Number: " ; getline(cin, phoneNumber);
			cout << "Email: " ; getline(cin, email);
		}
		
		void printInfo(){
			cout << left
				 << setw(30) << name 
				 << setw(30) << agency
				 << setw(20) << position
				 << setw(15) << phoneNumber
				 << setw(30) << email << endl;
		}
		string getName(){
			return name;
		}
		string getAgency(){
			return agency;
		}
};

class PhoneBook{
	private:
		int numberOfContact;
		Contact contact[500];
	public:
		PhoneBook(){}
		~PhoneBook(){}
		
		void enterContact(){
			do{
				cout << "Number Of Contact: " ; cin >> numberOfContact;
			}while(numberOfContact < 0 || numberOfContact > 500);
			
			for(int i=0 ; i<numberOfContact ; i++){
				contact[i].enterInfo();
			}
		}
		
		void findContact(){
			string nameToFind;
			string agencyToFind;
			cout << "Name to find: ";
			getline(cin, nameToFind);
			cout << "Agency to find: ";
			getline(cin, agencyToFind);
			for(int i=0 ; i<numberOfContact ; i++){
					if(nameToFind == contact[i].getName() && agencyToFind == contact[i].getAgency()){
						contact[i].printInfo();
					}
			}
		}
		
		void sortContact(){
			for(int i=0 ; i<numberOfContact - 1 ; i++){
				for(int j=0 ; j<numberOfContact - i - 1 ; j++){
					if(contact[j].getName() > contact[j + 1].getName()){
						swap(contact[j], contact[j + 1]);
					}
				}
			}
		}
		
		void printContact(){
			for(int i=0 ; i<numberOfContact ; i++){
				contact[i].printInfo();
			}
		}
};
int main(){
	PhoneBook phoneBook;
	phoneBook.enterContact();
	phoneBook.findContact();
	phoneBook.sortContact();
	phoneBook.printContact();
	return 0;
}

