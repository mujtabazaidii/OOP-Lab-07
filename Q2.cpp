#include<iostream>
using namespace std;
class Rectangle {
	int length, width, Area;
public:
	Rectangle(int a = 0, int b = 0) {
		length = a;
		width = b;
	}
	void setlength(int a) {
		length = a;
	}
	void setwidth(int b) {
		width = b;
	}
	int getlength() {
		return length;
	}
	int getwidth() {
		return width;
	}
	int AreaRec() {
		int Area = length * width;
		cout << "Area of Rectangle = " << Area << endl;
		return Area;
	}
};
class Cuboid :public Rectangle {
	int height;
public:
	Cuboid(int a, int b, int c) :Rectangle(a, b) {
		height = c;
	}
	void setheight(int c) {
		height = c;
	}
	int getheight() {
		return height;
	}
	void AreaCub() {
		cout << "Area of Cuboid = " << AreaRec() * height << endl;
	}
};
int main11() {
	Rectangle r1(7, 8);
	cout << endl;
	r1.AreaRec();
	cout << endl;
	Cuboid c1(4, 5, 6);
	c1.AreaCub();
	cout << endl;
	return 0;
}