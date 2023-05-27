#include<iostream>
using namespace std;

void enterArr(int array[], int numberOfElement){
	for(int i=0 ; i<numberOfElement ; i++){
		cout << "Arr[" << i << "] ";
		do{
			cin >> array[i];
		}while(array[i] < 0 || array[i] > 1000);	
	}
}

void displayArr(int array[], int numberOfElement){
	for(int i=0 ; i<numberOfElement ; i++){
		cout << array[i] << " ";
	}
}

int mostAppearNumber(int array[], int numberOfElement){
	int maxAppearTime = 0;
	int mostAppearNum = 0;
	//create this to void repeat the time meet each other
	// or you can make another array and use hash like : int count[100] = {0};
	int *visited = new int[numberOfElement];
	for(int i=0 ; i<numberOfElement ; i++){
		if(visited[i] == 1){
			continue;
		}
		int appearTime = 0;
		for(int j=0 ; j<numberOfElement ; j++){
			if(array[i] == array[j]){
				appearTime++;
				visited[i] = 1;
			}
		}
		if(appearTime > maxAppearTime){
			maxAppearTime = appearTime;
			mostAppearNum = array[i];
		}
	}
	return mostAppearNum;
}
int main(){
	int numberOfElement;
	do{
		cin >> numberOfElement;
	}while(numberOfElement < 0);
	int *array = new int[numberOfElement];
	enterArr(array, numberOfElement);
	displayArr(array, numberOfElement);
	cout << mostAppearNumber(array, numberOfElement);
	delete[] array;
	return 0;
}

