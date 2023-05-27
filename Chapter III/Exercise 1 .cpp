#include<iostream>
using namespace std;

void enterArr(int arr[], int numberOfElement){
	for(int i=0 ; i<numberOfElement ; i++){
		cin >> arr[i];
	}
}
void reverseArr(int arr[], int numberOfElement){
	int j=numberOfElement - 1;  // note have to subtract j ; maybe you dont have to assign numberOfElement to j
	for(int i=0 ; i<(numberOfElement/2 +1) ; i++){
		if(i < j){
			swap(arr[i], arr[j]);
			j--;
		}
	}
}
void displayArr(int arr[], int numberOfElement){
	for(int i=0 ; i<numberOfElement ; i++){
		cout << arr[i] << " ";
	}
}
int main(){
	int *arr = new int[100];
	int numberOfElement;
	do{
		cin >> numberOfElement;
	}while(numberOfElement < 0 || numberOfElement > 100 );
	enterArr(arr, numberOfElement);
	reverseArr(arr, numberOfElement);
	displayArr(arr, numberOfElement);
	return 0;
}

