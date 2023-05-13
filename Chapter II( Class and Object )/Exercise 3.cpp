#include<iostream>
using namespace std;
class SinhVien{
	private:
		string name;
		string className;
		float averageScore;
		float score[20];
		int subject; 
	public: 
		void init();
		void init(string name, string className, int subject);
		void setScore();
		void subjectN(int index);
		float caculateAverageScore();
		void compareStudent(SinhVien X);
};

	void SinhVien::init(){
		name = " ";
		className = " ";
		subject = 0;
	}
		
	void SinhVien::init(string name, string className, int subject){
		this->name = name;
		this->className = className;
		this->subject = subject;
	}
	
	void SinhVien::setScore(){
		for ( int i = 0 ; i < subject ; i++){
			cin >> score[i];
		}
	}
	
	void SinhVien::subjectN(int index){
		cout << "Diem mon thu " << index << "la : " << score[index];
	}
	
	float SinhVien::caculateAverageScore(){
		float S = 0;
		for(int i = 0 ; i < subject ; i++){
			S += score[i];
		}
		return S/subject;
	}
	
	void SinhVien::compareStudent(SinhVien X){
		if( caculateAverageScore() < X.caculateAverageScore()){
			cout << " Diem trung binh sinh vien thu hai cao hon.";
		}
		else if( caculateAverageScore() > X.caculateAverageScore()){
			cout << " Diem trung binh sinh vien thu nhat cao hon.";
		}
		else { 
			cout << "Diem hai sinh vien bang nhau";
		}
	}

	
int main(){
	SinhVien A;
	SinhVien B;
	A.init("Hoang", "67IT5", 3);
	A.setScore();
	cout << A.caculateAverageScore() << endl;
	B.init("Ba", "67IT5", 3);
	B.setScore();
	cout << B.caculateAverageScore() << endl;
	A.compareStudent(B);
	return 0;
}

