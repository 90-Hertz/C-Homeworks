#include<iostream>
#include<math.h>
using namespace std;
int findN(){
	int i=1;
	float sum=0;
	while(sum < 2.101999){
		sum += 1.0 / (2 * i - 1);
		i++;
	}
	i--;
	i--;
	return i;
}
int findn(){
	int i=1;
	float s=0;
	while(s < 2000){
		s = exp(i) - 1999 * log10(i);
		i++;
	}
	i--;
	i--;
	return i;
}
int main(){
	cout << findN() <<endl;
	cout << findn() <<endl;
	return 0;
}

