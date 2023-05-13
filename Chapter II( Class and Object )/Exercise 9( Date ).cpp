#include<iostream>
using namespace std;

class Date{
	private:
		int day;
		int month;
		int year;
	public:
		Date(){
			day = 1;
			month = 1;
			year = 2001;
		}
		
		Date(int day, int month, int year){
				if(isValidDate(day, month, year)){
				this->day = day;
				this->month = month;
				this->year = year;
			}
			else {
				this->day = 1;
				this->month = 1;
				this->year = 2001;
			}
		}
		//check leap year
		bool isLeapYear(){
			bool LeapYear;
			if((year % 400 == 0 )||(year % 4 == 0 && year % 100 !=0)){
				LeapYear = true;
			}
			else {
				LeapYear = false;
			}
			return LeapYear;
		}		
		bool isValidDate(int day, int month, int year){
			int maxDay;
			//check month
			if(0 > month || 12 < month){
				return false;
			}
			//find max day in month
			if(month == 4 || month == 6 || month == 9 || month == 11){
				maxDay = 30;
			}
			else if(month == 2){
				if(isLeapYear()){
					maxDay = 29;
				}
				else{
					maxDay = 28;
				}
			}
			else{
				maxDay = 31;
			}
			//check day
			if(day < 1 || day > maxDay){
				return false;
			}

			return true;
		}
		
		~Date(){}
		
		void printTypeOne(){
			cout << day << "/" << month << "/" << year << endl;
		}
		void printTypeTwo(){
			cout << "Day " << day << " Month " << month << " Year " << year << endl;
		}
		void printTypeThree(){
			cout << day << " Month " << month << " Year " << year << endl;
		}
};
int main(){
	Date Date(13, 13 ,2004);
	Date.printTypeOne();
	Date.printTypeTwo();
	Date.printTypeThree();
	return 0;
}

