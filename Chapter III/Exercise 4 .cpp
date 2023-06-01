#include<iostream>
using namespace std;

void transposeMatrix(int **array, int row, int col){
	int **arr = new int*[col];
	for(int i=0 ; i<col ; i++){
		arr[i] = new int[row];
	}
	
	for(int i=0 ; i<row ; i++){
		for(int j=0 ; j< col ; j++){
			arr[j][i] = array[i][j];// notice i and j that can make failure
		}
	}
	
	cout << "Transpose Matrix" << endl;
	//notice the row and col of transpose matrix
	for(int i=0 ; i<col ; i++){
		for(int j=0 ; j< row ; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	for(int i=0 ; i<col ; i++){
		delete[] arr[i];
	}
	delete[] arr;
}

void enterMatrix(int **array, int row, int col){
	for(int i=0 ; i<row ; i++){
		for(int j=0 ; j< col ; j++){
			cout << "[" << i << "][" << j << "] " ;
			cin >> array[i][j];
		}
	}
}
void displayMatrix(int **array, int row, int col){
	for(int i=0 ; i<row ; i++){
		for(int j=0 ; j< col ; j++){
			cout << array[i][j];
		}
		cout << endl;
	}
}
int main(){
	int row, col;
	cin >> row >> col;
	int **array = new int*[row];
	for(int i=0 ; i<row ; i++){
		array[i] = new int[col];
	}
	enterMatrix(array, row, col);
	displayMatrix(array, row, col);
	transposeMatrix(array, row, col);
	
	for(int i=0 ; i<row ; i++){
		delete[] array[i];
	}
	delete[] array;
	return 0;
}

