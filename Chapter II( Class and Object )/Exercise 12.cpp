#include<iostream>
#include<iomanip>
using namespace std;

class Student{
	private: 
		string  name;
		string id;
		float attendanceScore;
		float homeWorkScore;
		float practiseScore;
		float midTermScore;
		float finalTermScore;
		float processScore;
		float testScore;
		float courseScore;
	public:
		Student(){}
		Student(string name, string id){
			this->name = name;
			this->id = id;
		}
		~Student(){}
		//tra ve
		float getCourseScore(){
			return courseScore;
		}
		float getMidTermScore(){
			return midTermScore;
		}
		float getFinalTermScore(){
			return finalTermScore;
		}
		void setName(){
			cout << "Name: "; getline(cin, name);
		}
		string getName(){
			return name;
		}
		
		void setId(){
			cout << "Id: "; cin >> id;
		}
		string getId(){
			return id;
		}
		
		void setScores(){
			do{
				cout << "Attendance Score: ";  cin >> attendanceScore;
			}while(attendanceScore < 0 || attendanceScore > 10);
			do{
				cout << "Home Work Score: ";   cin >> homeWorkScore;
			}while(homeWorkScore < 0 || homeWorkScore > 10);
			do{
				cout << "Practise Score: ";    cin >> practiseScore;
			}while(practiseScore < 0 || practiseScore > 10);
			do{
				cout << "Mid Term Score: ";    cin >> midTermScore;
			}while(midTermScore < 0 || midTermScore > 10);
			do{
				cout << "Final Term Score: ";  cin >> finalTermScore;
			}while(finalTermScore < 0 || finalTermScore > 10);
		}
		//ep kieu
		void caculateProcessScore(){
			processScore = (attendanceScore + homeWorkScore + practiseScore) / 3.0 ;
		}
		void caculateTestScore(){
			testScore = (3.0 / 7.0) * midTermScore + (4.0 / 7.0) * finalTermScore;
		}
		void caculateCourseScore(){
			courseScore = (3.0 / 10.0) * processScore + (7.0 / 10.0) * testScore;
		}
};


class Class{
	private:
		string className;
		int numberOfStudent;
		Student student[60];
	public: 
		Class(){}
		Class(string className, int numberOfStudent){
			this->className = className;
			this->numberOfStudent = numberOfStudent;
		}
		~Class(){}
		
		void addInfoClass(){
			cout << "Class name: ";
			getline(cin, className);
	
			do{
				cout << "Number of student: ";
				cin >> numberOfStudent;
			}while(numberOfStudent < 0 || numberOfStudent > 60);
		}
		
		void addInfoStudent(){
			for ( int i=0 ; i<numberOfStudent ; i++){
				cout << "Student[" << i << "]: " << endl;
				cin.ignore();
				student[i].setName();
				student[i].setId();
			}	
		}
		
		void addScoreStudent(){
			for ( int i=0 ; i<numberOfStudent ; i++){
				cout << left << setw(3) << i 
					 << setw(15) <<	student[i].getName()
					 << setw(15) << student[i].getId() << endl;
				student[i].setScores();
				student[i].caculateProcessScore();
				student[i].caculateTestScore();
				student[i].caculateCourseScore();
			}
		}
		
		void printClassList(){
			cout << "STT" << setw(15) << "Name" 
					 << setw(15) << "ID" 
					 << setw(15) << "Mid Term Score" 
					 << setw(15) << "Final Term Score" 
					 << setw(15) << "Course Score" << endl;
			for ( int i=0 ; i<numberOfStudent ; i++){
				cout << left << setw(3) << i
					 << setw(15) << student[i].getName()
					 << setw(15) << student[i].getId()
					 << setw(15) << student[i].getMidTermScore()
					 << setw(15) << student[i].getFinalTermScore()
					 << setw(15) << student[i].getCourseScore() << endl;
			}
		}
		
		void sortStudent(){
			for ( int i=0 ; i<numberOfStudent - 1 ; i++){
				for( int j=0 ; j<numberOfStudent - i - 1 ; j++){
					if(student[j].getCourseScore() < student[j+1].getCourseScore()){
						swap(student[j], student[j+1]);
					}
				}
			}
		}
		
		void printClassListFollowHighScore(){
			for ( int i=0 ; i<numberOfStudent ; i++){
				if(student[i].getCourseScore() < 5.50){
				break;
				}
				cout << "STT" << setw(15) << "Name" 
					 << setw(15) << "ID" 
					 << setw(15) << "Mid Term Score" 
					 << setw(15) << "Final Term Score" 
					 << setw(15) << "Course Score" << endl;
				cout << left << setw(3) << i
					 << setw(15) << student[i].getName()
					 << setw(15) << student[i].getId()
					 << setw(15) << student[i].getMidTermScore()
					 << setw(15) << student[i].getFinalTermScore()
					 << setw(15) << student[i].getCourseScore() << endl;
			}
		}
};

int main(){
	Class IT5;
	IT5.addInfoClass();
	IT5.addInfoStudent();
	IT5.addScoreStudent();
	IT5.sortStudent();
	cout << "Danh sach lop" << endl;
	IT5.printClassList();
	
	cout << "Danh sach sinh vien co diem lon hon 5.5" << endl;
	IT5.printClassListFollowHighScore();
	return 0;
}


