#include<iostream>
#include<string>
#include<fstream>
using namespace std;

typedef struct{ 
	string id; 
	string name; 
	float subject[15]; 
	int numOfSubject;  
	float averageScore; 
} Student;

const int MAX = 80;
typedef struct { 
	Student studentList[MAX]; 
	string className; 
	int numOfStudent; 
} Class;

void enterStudentList(Class* IT5){
	cout << "Class Name:" ; getline(cin, IT5->className);
	do{
		cout << "Number Of Student: "  ; cin >> IT5->numOfStudent;
	}while(IT5->numOfStudent < 0 || IT5->numOfStudent > 80);
	
	for(int i = 0 ; i < IT5->numOfStudent ; i++){
		cout << "Student [" << i << "]" << endl; 
		
		cin.ignore();
		cout << "Name: " ; 
		getline(cin, IT5->studentList[i].name);
		cout << "Id: " ; 
		getline(cin, IT5->studentList[i].id);
		do{
			cout << "Number Of Subject: " ; 
			cin >> IT5->studentList[i].numOfSubject;
		}while(IT5->studentList[i].numOfSubject < 0 || IT5->studentList[i].numOfSubject > 15);
		
		for(int j=0 ; j< IT5->studentList[i].numOfSubject ; j++){
			cin >> IT5->studentList[i].subject[j];
		}		
	}
}
void calculateAverageScore(Student studentList[], int numberOfStudent){
		for(int i=0 ; i<numberOfStudent ; i++){
			float averScore = 0;
			for(int j=0 ; j<studentList[i].numOfSubject ; j++){
				averScore += studentList[i].subject[j];
			}
			studentList[i].averageScore = averScore/studentList[i].numOfSubject;
		}
	}

void printClassList(Student studentList[], int numOfStudent){
	cout << "Class list:" << endl;
	for(int i=0 ; i<numOfStudent ; i++){
		cout << "Ma so SV | Ho ten | Diem trung binh" << endl;
		cout << studentList[i].id << " " 
			 << studentList[i].name << " " 
			 << studentList[i].averageScore << endl;
	}
}

void findStudentFollowScore(Class* IT5, float score){
	ofstream outputFile;
	outputFile.open("SV.out", ios::out);
	
	
	cout << "Enter Score: " ; cin >> score;
	for(int i=0 ; i<IT5->numOfStudent ; i++){
		if(IT5->studentList[i].averageScore >= score){
		outputFile << IT5->studentList[i].id << " " 
			 << IT5->studentList[i].name << " " 
			 << IT5->studentList[i].averageScore << endl;
		}
	}	
	
	outputFile.close();
}
int main(){
	Class* IT5 = new Class();
	enterStudentList(IT5);
	calculateAverageScore(IT5->studentList, IT5->numOfStudent);
	printClassList(IT5->studentList, IT5->numOfStudent);
	float score;
	findStudentFollowScore(IT5, score);
	
	return 0;
}
