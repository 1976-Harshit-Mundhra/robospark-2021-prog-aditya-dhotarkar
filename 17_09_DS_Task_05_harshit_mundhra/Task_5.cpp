#include <iostream>
using namespace std;

class Rectangle
{
	public:
		int length;
		int breadth;
		void setter0();
		void setter1(int n);
		void setter2(int l,int b);
		int getArea();
}rec;

void Rectangle:: setter0(){
    length=0;
    breadth=0;
}

void Rectangle:: setter1(int n){
    length=n;
    breadth=n;
}

void Rectangle::setter2(int l,int b)
{
	length = l;
    breadth = b;
}
int Rectangle::getArea()
{
	return length * breadth;
}

int main()
{
rec.setter0();
	int area = rec.getArea();
	cout << "Area : " << area << endl;
rec.setter1(5);
	int area1 = rec.getArea();
	cout << "Area : " << area1 << endl;
rec.setter2(7,8);
	int area2 = rec.getArea();
	cout << "Area : " << area2 << endl;
	return 0;
}
