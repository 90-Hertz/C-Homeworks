#include<iostream>
#include<iomanip>
using namespace std;

void Import(int m, int n, int arr[][100]){
	for( int i=0 ; i<m ; i++){
		for( int j=0 ; j<n ; j++){
			cout << " Phan tu [" << i <<"][" << j << "] : ";
			cin >> arr[i][j];
		}
	}
}

void Export( int m, int n, int arr[][100]){
	for( int i=0 ; i<m ; i++){
		for( int j=0 ; j<n ; j++){
			cout << " " << setw(3) << arr[i][j] << "    ";
		}
		cout << endl;
	}
}

int Sum(int m, int n, int arr[][100]){
	int sum=0;
	for( int i=0 ; i<m ; i++){
		for( int j=0 ; j<n ; j++){
			sum += arr[i][j];
		}
	}
	return sum;
}

void evenOddSum(int m, int n, int arr[][100]){
	int oddSum=0;
	int evenSum=0;
	for( int i=0 ; i<m ; i++){
		for( int j=0 ; j<n ; j++){
			if(arr[i][j]%2 == 0){
				evenSum += arr[i][j];
			}
			else{
				oddSum += arr[i][j];
			}
		}
	}
	cout << " Tong chan : " << evenSum;
	cout << " Tong le : " << oddSum;
}

void maxRow(int m, int n, int arr[][100]){
	int extraArr[100];
	for( int i=0 ; i<m ; i++){
		int max = arr[i][0];
		for( int j=0 ; j<n ; j++){
			if(max < arr[i][j]){
				max = arr[i][j];

			}
		}
		extraArr[i] = max;
	}
	for( int i=0 ; i<m ; i++){
		cout << " Max hang "<< i << " : " << extraArr[i] << endl;
	}
}

void minColumn(int m, int n, int arr[][100]){
	int extraArr[100];
	for( int j=0 ; j<n ; j++){
		int min = arr[j][0];
		for( int i=0 ; i<m ; i++){
			if(min > arr[i][j]){
				min = arr[i][j];

			}
		}
		extraArr[j] = min;
	}
	for( int j=0 ; j<n ; j++){
		cout << " Min cot " << j << " : " << extraArr[j] <<endl;
	}
}

void minNum(int m, int n, int arr[][100]){
	int min = arr[0][0];
	int a[100],b[100];
	int count=0;
	for(int i=0 ; i<m ; i++){
		for(int j=0 ; j<n; j++){
			if(min > arr[i][j]){
				min = arr[i][j];
			}
		}
	}
	int k=0;
	for(int i=0 ; i<m ; i++){
		for(int j=0 ; j<n; j++){
			if(min == arr[i][j]){
				a[k] = i;
				b[k] = j;
				k++;
				count++;
			}
		}
	}
	cout << " Vi tri va gia tri cac phan tu nho nhat : " << endl;
	for(int i=0 ; i<count ; i++){
			cout << " [" << a[i] << "][" << b[i] << "] :" << min ;
	}

}
int main(){
	int m, n; // m hang n cot
	int arr[100][100];
	do{
	cout << " Nhap hang va cot( nho hon 100 ) : "; cin >> m >> n;
	}
	while(m < 0 || n < 0 || m > 100 || n > 100);
	cout << endl;
	
	Import( m, n, arr);
	cout << " Matrix vua nhap : " << endl;
	Export( m, n, arr);
	
	cout << " Tong cac phan tu : " << Sum(m, n, arr) <<endl;
	
	evenOddSum( m, n, arr);
	cout << endl;
	
	maxRow( m, n, arr);
	cout << endl;
	
	minColumn( m, n, arr);
	cout << endl;
	
	minNum( m, n, arr);
	return 0;
}

