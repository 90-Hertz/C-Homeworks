#include<iostream>
#include<math.h>
using namespace std;
void pi(){
	int i=1;
	float sum=0;
	while(i < 1000){
		sum += 1.0 / ( i * i);
		i++;
	}
	sum = sqrt(6 * sum);
	cout << sum;
}
void loganepeX(){
	int i=0;
	float sum=0;
	float x = pow(1,i) / tgamma(i+1);//o day x=1 nen dap an la 2,7 ; tgamma(i+1)tinh giai thua cua i
	while(x > pow(10, -6)){
		x = pow(1,i) / tgamma(i+1);
		sum +=x;
		i++;
	}
	cout << sum;//co the o day da cong them x cuoi cung nen phai tru di nhung chua tru
}
//void sinX(){
//	int x;
//	cout<<"Nhap x( Deg ): ";cin>>x;
//	float y=x*M_PI/180;
//	int i=0;
//	float sum=0;
//	float a=(pow((-1),i)*pow(y,2*i+1))/(tgamma(2*i+1));//o day x=10 
//	float b=(pow(y,2*i+1))/(tgamma(2*i+1));
//	cout << "Sin(x) = ";
//	while(b>pow(10,-6)){
//		b=(pow(y,2*i+1))/(tgamma(2*i+1));
//		a=(pow((-1),i)*pow(y,2*i+1))/(tgamma(2*i+1));
//		sum+=a;
//		i++;
//	}
//	cout<<sum;
//}
void sinX(){
    int x;
    cout << "Nhap x( Deg ): "; 
    cin >> x;
    float y = x * M_PI / 180.0;
    int i = 0;
    float sum = 0;
    float a = (pow((-1), i) * pow(y, 2 * i + 1)) / tgamma(2 * i + 1);
    float b = (pow(y, 2 * i + 1)) / tgamma(2 * i + 1);
    while (b > pow(10, -6)){
        sum += a;
        i++;
        b = (pow(y, 2 * i + 1)) / tgamma(2 * i + 1);
        a = (pow((-1), i) * pow(y, 2 * i + 1)) / tgamma(2 * i + 1);
    }
    cout << sum;
}

int main(){
//	pi();
//	loganepeX();
	sinX();
	return 0;
}

