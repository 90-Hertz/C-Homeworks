#include<iostream>
#include<math.h>
using namespace std;

void enterArr(int arr[], int numberOfElement){
	for(int i=0 ; i<numberOfElement ; i++){
		cin >> arr[i];
	}
}

void displayArr(int arr[], int numberOfElement){
	for(int i=0 ; i<numberOfElement ; i++){
		cout << arr[i] << " ";
	}
}

bool isEvenNum(int num){
	if(num % 2 != 0){
		return false;
	}
	return true;
}

bool isPrime(int num){
	if(num < 2){
		return false;
	}
	for(int i=2 ; i<=sqrt(num) ; i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}

void bubbleSort(int arr[], int numberOfElement){
	for(int i=0 ; i<numberOfElement-1 ; i++){
		for(int j=0 ; j<numberOfElement-i-1 ; j++){
			if(arr[j] > arr[j + 1]){
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
int main(){
	int numberOfElement;
	do{
		cin >> numberOfElement;
	}while(numberOfElement < 0 || numberOfElement > 100);
	int *arr = new int[100];
	int *arrA = new int[100];
	int *arrB = new int[100];
	enterArr(arr, numberOfElement);
	
	int j=0;
	for(int i=0 ; i<numberOfElement ; i++){
		if(isEvenNum(arr[i])){
			arrA[j] = arr[i];
			j++;
		}
	}
	if(j == 0){
		cout << "Day con rong" ;
	}
	else{
		bubbleSort(arrA, j);
		displayArr(arrA, j);
	}
	int k=0;
	for(int i=0 ; i<numberOfElement ; i++){
		if(isPrime(arr[i])){
			arrA[k] = arr[i];
			k++;
		}
	}
	if(k == 0){
		cout << "Day con rong" ;
	}
	else{
		bubbleSort(arrA, k);
		displayArr(arrA, k);
	}
	
	return 0;
}

