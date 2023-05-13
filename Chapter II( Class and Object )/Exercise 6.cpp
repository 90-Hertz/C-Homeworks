#include<iostream>
#include<iomanip>
using namespace std;
//lop SinhVien
class SinhVien{
	private: 
		string  Name;
		string Id;
		float Score[100];
		int Subject;
	public:
		SinhVien(){}
		SinhVien(string Name, string Id, int Subject){
			this->Name = Name;
			this->Id = Id;
			this->Subject = Subject;
		}
		~SinhVien(){}
		
		void importScore();
		float caculateAverageScore();
		void importInfo();
		void printInfo();
};

void SinhVien::importScore(){
	for( int i=0 ; i< Subject ; i++){
		cout << "Score[" << i << "] = " ;
		cin >> Score[i];
	}
}

float SinhVien::caculateAverageScore(){
	float Sum = 0;
	for( int i=0 ; i< Subject ; i++){
		Sum += Score[i];
	}
	return Sum / Subject;
}

void SinhVien::importInfo(){
	cin.ignore();
	cout << "Name: ";
	getline(cin, Name);
	cout << "ID: ";
	getline(cin, Id);
	cout << "Number of subject: ";
	cin >> Subject;
	cin.ignore();
}

void SinhVien::printInfo(){
	cout << left 
		 << setw(20) << Name 
		 << setw(10) << Id
		 << setw(10) << caculateAverageScore()
		 << endl;
}

// lop Class
class Class{
	private:
		string className;
		int numberOfStudent;
		SinhVien Student[60];
	public: 
		Class(){}
		Class(string className, int numberOfStudent){
			this->className = className;
			this->numberOfStudent = numberOfStudent;
		}
		~Class(){}
		
		void addInfoStudent();
		void printClassList();
};

void Class::addInfoStudent(){
	cout << "Class name: ";
	getline(cin, className);
	cout << "Number of student: ";
	cin >> numberOfStudent;
	for ( int i=0 ; i<numberOfStudent ; i++){
		Student[i].importInfo();
		Student[i].importScore();
	}
}

void Class::printClassList(){
	for ( int i=0 ; i<numberOfStudent ; i++){
		cout << i ;
		Student[i].printInfo();
	}
}
int main(){
	Class IT5;
	IT5.addInfoStudent();
	IT5.printClassList();
	return 0;
}

