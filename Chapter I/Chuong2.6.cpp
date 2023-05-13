#include<iostream>
using namespace std;

int main(){
	int num;
	do{
	cout << "Nhap so nguyen duong trong khoang tu 100 den 200: "; cin>>num;
	}
	while(num > 200 || num < 100);
	
	cout<<"Cac so nguyen to trong khoang tu 1 den so vua nhap :";
	for(int i=2 ; i <= num ; i++){
		bool check = true;//có the check bang bien count
		for(int j=2 ; j <= i/2 ; j++){
			if( i % j == 0){
				check = false;
				break;
			}
		}
		if(check){
		cout << i << endl;
		}
	}
	return 0;
}

