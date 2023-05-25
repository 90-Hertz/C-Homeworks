#include<iostream>
#include<math.h>
using namespace std;
	class SoPhuc{
		float thuc;
		float ao;
	public:
		SoPhuc(){
			thuc = 0;
			ao = 0;
		}
		SoPhuc(float t,float a){
			thuc = t;
			ao = a;
		}
		~SoPhuc(){}
		void display(){
			cout << thuc << (ao < 0 ? "" : "+") << ao << "i" << endl; 
		}
		SoPhuc operator+(SoPhuc p){
			SoPhuc x;
			x.thuc = thuc + p.thuc;
			x.ao = ao + p.ao;
			return x;
		}
		SoPhuc operator*(SoPhuc p){
			SoPhuc y;
			y.thuc = thuc * p.thuc - ao * p.ao;
			y.ao = thuc * p.ao + ao * p.thuc;
			return y;
		}
		float module(){
			return sqrt(ao * ao + thuc * thuc);
		}
	};
int main(){
	SoPhuc x(2, 2);
	SoPhuc y(2, -1);
	x.display();
	y.display();
	cout << x.module();
	cout << endl;
	cout << y.module();
	cout << endl;
	SoPhuc z;
	z = x + y;
	z.display();
	return 0;
}

