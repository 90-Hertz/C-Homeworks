#include<iostream>
#include<iomanip>
using namespace std;

class Contact{
	private:
		string name;
		string agency;
		string position;
		int birthYear;
		int birthDay;
		string phoneNumber;
		string companyPhoneNumber;
		string homeAddress;
		string companyAddress;
		string email;
		string note;
	public:
		Contact(){}
		~Contact(){}
		void enterContact(){
			cin.ignore();
			cout << "Name: ";
			getline(cin, name);
			cout << "Agency: ";
			getline(cin, agency);
			cout << "Position: ";
			getline(cin, position);
			cout << "Birth year: ";
			cin >> birthYear;
			cout << "Birth day: ";
			cin >> birthDay;
			cin.ignore();
			cout << "Phone number: ";
			getline(cin, phoneNumber);
			cout << "Company phone number: ";
			getline(cin, companyPhoneNumber);
			cout << "Home address: ";
			getline(cin, homeAddress);
			cout << "Company Address: ";
			getline(cin, companyAddress);
			cout << "Email: ";
			getline(cin, email);
			cout << "Note: ";
			getline(cin, note);
		}
		
		void printContact(){
			cout << left
				 << setw(30) << name 
				 << setw(30) << agency
				 << setw(20) << position
				 << setw(15) << phoneNumber
				 << setw(30) << email << endl;
		}
		
		void findContact(){
			string nameToFind;
			string agencyToFind;
			cout << "Name to find: ";
			getline(cin, nameToFind);
			cout << "Agency to find: ";
			getline(cin, agencyToFind);
			
			if(nameToFind == name || agencyToFind == agency)
		}
		
		void sortContact(){
			
		}
};
int main(){

	return 0;
}

