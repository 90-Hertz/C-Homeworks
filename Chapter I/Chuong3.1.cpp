#include<iostream>
#include<iomanip>
using namespace std;
 
void Import(int n, int arr[]){
		for( int i=0 ; i<n ; i++){
			cout << " Phan tu ["<< i <<"] : "; cin >> arr[i];
		}
}

int Sum(int n, int arr[]){
	int sum=0;
	for( int i=0 ; i<n ; i++){
		sum += arr[i];
	}
	return sum;
}

float Medium(int n, int arr[]){
	float medium=0;
	for( int i=0 ; i<n ; i++){
		medium += arr[i];
	}
	medium /= n;
	return medium;
}

void soSanh(int n, int arr[]){
	int oddTotal,evenTotal;//even là chan , odd la le
	for ( int i=0 ; i<n ; i++){
		if(i % 2 == 0){
			evenTotal += arr[i];
		}
		else{
			oddTotal += arr[i];
		}
	}
	
	if(oddTotal > evenTotal){
		cout<< " Tong le lon hon.";
	}
	else{
		cout<< " Tong chan lon hon.";
	}
}
//tim in ra vi tri xuat hien dau tien cua x nhap tu ban phim
void Find(int n, int arr[], int x){
	int temp=0;
	bool check=false;
	for(int i=0 ; i<n ;i++){
		if(arr[i] == x){
			temp = i;
			check = true;
			break;
		}
	}
	if(check){
		cout << " Vi tri dau tien xuat hien x : "<< temp;
	}
	else{
		cout << " Khong co phan tu x trong day. ";
	}
}
//tim max
int Max(int n , int arr[]){
	int max = arr[0];
	for( int i=1 ; i<n ; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}
//nhap so nguyen a va chen vao vi tri thu k
void Insert(int n, int arr[]){
	int a, k;
	cout << " Nhap so muon chen : "; cin>> a;
	do{
	cout << " Nhap vi tri muon chen : " ; cin>> k;
	}
	while(k>=n || k<0);
	n++;
	for( int i = n ; i>k ; i--){
		arr[i] = arr[i-1];
	}
	arr[k] = a;
	cout << " Chuoi sau chen : ";
	for( int i=0 ; i<n ; i++){
		cout << arr[i] << " ";
	}
}

void Delete(int n, int arr[]){
	int d;
	do{
	cout << " Nhap vi tri muon xoa : " ; cin>> d;
	}
	while(d>=n || d<0);
	for( int i = d ; i<n ; i++){
		arr[i] = arr[i+1];
	}
	n--;
	cout << " Chuoi sau xoa : ";
	for( int i=0 ; i<n ; i++){
		cout << arr[i] << " ";
	}
}

void Sort(int n, int arr[]){
	for( int i=0 ; i<n ; i++){
		for(  int j=0 ; j<n ; j++){
			if(arr[i] < arr[j]){//khong hieu tai sao sap xep nhu vay ?
			
				swap(arr[i] , arr[j]);
			}
		}
	}
	
}

void Export(int n, int arr[]){
	for( int i=0 ; i<n ; i++){
		cout << arr[i] << " ";
	}
}
int main(){
	int n;
	int arr[50];
	cout <<  " Nhap so luong phan tu "; cin>>n;
	Import(n, arr);
	
	cout << " Tong day so : "<< Sum(n, arr)<< endl; 
	cout << " Trung binh day so : "<< Medium(n,arr)<< endl;
	soSanh(n,arr);	cout << endl;

	int x;
	cout << " Nhap phan tu x : "; cin>> x;
	Find(n , arr, x);	cout << endl;
	
	cout << " Max = "<< Max(n,arr)<< endl;
// Tu doan code nay do da sap xep truoc nen tiep tuc chay se van them phan tu duoc them va phan sap xep cung sap xep phan tu da duoc them	
	Insert(n,arr);
	Delete(n,arr);
	
	Sort(n,arr);
	cout << " Chuoi sau sap xep tang dan : ";
	Export(n,arr);
	return 0;
}

