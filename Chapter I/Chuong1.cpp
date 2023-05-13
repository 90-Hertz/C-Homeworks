#include<iostream>
#include<iomanip>
using namespace std;


int caculateTax( int IBT ){
	int Tax;
	 if ( IBT < 4000000 ){
		Tax = 0;
	}
	else if( IBT > 4000000 ){
		Tax = 5 * IBT / 100;
		}
	else if( IBT >= 9000000 ){
		Tax = 10 * IBT / 100;
	}
	return Tax;
}


int main(){
//	bai1 chuong1 
//	float a , b , c;
//	cin >> a >> b >> c;
//	cout << setprecision(2) << fixed << a << "x^2" << ( b < 0 ? "" : "+" ) << b << " x + " << (c < 0 ? "" : "+") << c;


//bai2
// 	  char a;
//    int b;
//    long c;
//    double d;
//    float e;
//    
//    cin>>a>>b>>c>>d;
//    if (((a+b)/2.0 > c) && ((b-a)/2.0 < c)) {
//        e = d;
//    }
//    else {
//    	++b ;
//        e = a + b;
//    }
//
//    cout << "**************************************************"<<endl;
//    cout << setw(24) << right<< "* Value table"<< setw(24) << right << "*" << endl;
//    cout << setw(9) << "* a = "<< a << setw(28) << "*"<<right	 << endl;
//    cout << setw(9) << "* b = "<< b << setw(28) << "*"<<right << endl;
//    cout << setw(9) << "* c = "<< c << setw(28) << "*"<<right << endl;
//    cout << setw(9) << "* d = "<< fixed << setprecision(2) << d << setw(26) <<right << "*" << endl;
//    cout << setw(9) << "* e = "<< fixed << setprecision(2) << e << setw(26) <<right << "*" << endl;
//    cout << "**************************************************"<<endl;


	string Name;
	float salaryRate;
	int Allowance, socialInsurance;
	int BS = 1050000;
	int ICP1 = 5, ICP2 = 10;
	int T1 = 4000000, T2 = 9000000;
	
	cout <<  "Name               : " ; getline(cin, Name);
	cout <<  "Salary Rate        : "; cin>> salaryRate;
	cout <<  "Allowance(%)       : "; cin>> Allowance;
	cout <<  "Social Insurance(%): "; cin >> socialInsurance;
	cout << "--------------------------------------------"<< endl;
	
	int IBT, Salary, Tax, netIncome;
	
	Salary = salaryRate * BS;
	Allowance = Salary * Allowance / 100;
	socialInsurance = Salary * socialInsurance / 100;
	IBT = Salary + Allowance - socialInsurance;
	Tax = caculateTax(IBT);
	netIncome = IBT - Tax;
	
	cout << "Salary           : "<< Salary <<" vnd"<< endl;
	cout << "Allowance        : "<<Allowance<<" vnd"<<endl;
	cout << "Social Insurance : "<<socialInsurance<<" vnd"<<endl;
	cout << "Income Before Tax: "<<IBT<<" vnd"<<endl;
	cout << "Net Income       : "<<netIncome<<" vnd"<<endl;

	return 0;
}

