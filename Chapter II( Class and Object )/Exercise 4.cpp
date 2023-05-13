#include<iostream>
using namespace std;

class Matrix{
	private:
		int row;
		int column;
		float A[100][100];
	public:
		Matrix(int row, int column){
			this->row = row;
			this->column = column;
		}
		
		void dataIn();
		void dataOut();

		Matrix operator*(Matrix B){
		Matrix C(row, B.column);
		for( int i=0 ; i<C.row ; i++){
			for( int j=0 ; j<C.column ; j++){
				C.A[i][j] = 0;
				for( int k=0 ; k<column ; k++){
					C.A[i][j] += A[i][k] * B.A[k][j];
				}	
			}
		}	
		return C;
	}
};


void Matrix::dataIn(){
	for( int i=0 ; i<row ; i++){
		for( int j=0 ; j<column ; j++){
			cin >> A[i][j];
		}
	}
}

void Matrix::dataOut(){
	for( int i=0 ; i<row ; i++){
		for( int j=0 ; j<column ; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}	
}

int main(){
	Matrix A(3, 3);
	A.dataIn();
	A.dataOut();
	Matrix B(3, 2);
	B.dataIn();
	B.dataOut();
	Matrix C = A * B;
	C.dataOut();
	return 0;
}

