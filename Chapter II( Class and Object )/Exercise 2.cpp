#include<iostream>
#include<math.h>
using namespace std;

class Car{
	private: 
		string color;
		int speed;
		float price;
		int x,y;
	public: 
		void init(int speed, int x, int y);
		void init();
		void setColor(string color);
		void setPrice(float price);
		float getDistance(Car Lamborghini);
};

void Car::init(int speed, int x, int y){
	this->speed = speed;
	this->x = x;
	this->y = y;
}

void Car::init(){
	speed = 0;
	x = 0;
	y = 0;
}

void Car::setColor(string color){
	this->color = color;
}

void Car::setPrice(float price){
	this->price = price;
}

float Car::getDistance(Car Lamborghini){
	float distance;
	distance = sqrt((x-Lamborghini.x)*(x-Lamborghini.x)+(y-Lamborghini.y)*(y-Lamborghini.y));
	return distance;
}
int main(){
	Car Ferari;
	Ferari.init(20 ,2 ,2);
	Ferari.setPrice(1.5);
	Car Lamborghini;
	Lamborghini.init(20, 1, 1);
	cout << Ferari.getDistance(Lamborghini);
	return 0;
}

