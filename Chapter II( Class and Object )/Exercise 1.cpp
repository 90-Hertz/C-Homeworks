#include<iostream>
using namespace std;

class Point3D{
	private:
		int x, y, z;
	public:
		void init(int x, int y, int z);
		void init();
		void move(int x, int y, int z);
		void display();
};

void Point3D::init(int x, int y, int z){
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point3D::init(){
	x = 0; y = 0; z = 0 ;
}

void Point3D::move(int dx, int dy, int dz){
	x += dx;
	y += dy;
	z += dz;
}

void Point3D::display(){
	cout << x << " "<< y << " " << z << endl;
}
int main(){
	Point3D point;
	point.init(1 ,2 ,3);
	point.display();
	point.move(3 ,2 ,1);
	point.display();
	return 0;
}

