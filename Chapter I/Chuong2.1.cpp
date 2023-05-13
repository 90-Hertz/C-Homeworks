#include<iostream>
using namespace std;

void tamgiac2(){
	for(int i = 0; i < 6; i++) {
    for(int j=0; j<6; j++)
         {
        if(j<6-i-1){
         	 cout<<"  ";
			 }
		else
		{	cout<<"1 ";
			}
		}
      cout<<endl;
      
   }
}

void tamgiac1(){
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
}

void check(){

	char c;
    cout << "Nhap mot ki tu: ";
    cin >> c;

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        cout << "Ky tu nhap vao la chu cai";
    }
    else if (c >= '0' && c <= '9') {
        cout << "Ky tu nhap vao la chu so";
    }
    else {
        cout << "Ky tu nhap vao khong phai la chu cai hoac chu so";
    }
}

void tamgiac3(){
	for( int i =0;i<6;i++){
		for( int j=0;j<11;j++){
			if(j<5-i||j>5+i){
				cout<<"  ";
			}
			else{
				cout<<"1 ";
			}
		}
		cout<<endl;
	}
}

void tamgiac4(){
	for(int i=0;i<5;i++){
		for(int j =0;j<9;j++){
			if(j<4-i||j>4+i){
				cout<<" ";
			}
			else{
				if((i%2==0&&j%2==0)||(i%2==1&&j%2==1))
				cout<<"5";
				else{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
}


int main(){
//	tamgiac2();
//	tamgiac1();
//	tamgiac3();
//	check();
//	tamgiac4();
    return 0;
}





