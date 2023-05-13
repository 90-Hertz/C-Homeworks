#include<iostream>
using namespace std;
void calculate(){
	for(int i=1; i<10; i++){
		for(int j=0;j<10;j++){
			if((i*j)==2*(i+j)){
				cout<<i*10+j<<" ";		
			}
		}
	}
}
void soluongdaySo(){
	int count = 0;
	for(int i=0; i < 10; i++){
		for(int j=0; j < 10; j++){
			for(int k=0; k < 10; k++){
				for(int l=0; l < 10; l++){
					if(i <= j && j <= k && k <= l){
						count++;
					}
				}
			}
		}
	}
	cout<<count;
}
int main(){
	calculate();
	soluongdaySo();
	return 0;
}

