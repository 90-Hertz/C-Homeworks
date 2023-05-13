#include<iostream>
using namespace std;

class Computer{
	private:
		int CPUs;
		int RAMs;
		int GPUs;
	public:
		Computer(int cpu,int ram, int gpu){
			CPUs = cpu;
			RAMs = ram;
			GPUs = gpu;
		}
		void display();
		
		float PriceUnit(float hireHours);
};

void Computer::display(){
	cout << "Cpu : " << CPUs << endl;
	cout << "Gpu : " << GPUs << endl;
	cout << "Ram : " << RAMs << endl;
}

float Computer::PriceUnit(float hireHours){
	float price = 0;
	return price = (CPUs * 0.3 + RAMs * 0.2 + GPUs * 0.5)* hireHours;
}
int main(){
	Computer Acer(1, 4, 1);
	Acer.display();
	cout << Acer.PriceUnit(3);
	return 0;
}

