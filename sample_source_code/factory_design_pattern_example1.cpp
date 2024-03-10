#include <iostream>

using namespace std;

class Shape {
	public:
		virtual void draw()=0;
};

class Circle:public Shape {
	public:
		void draw (){
			cout<<"\ndrawing circle\n";
		}
};

class Square:public Shape {
	public:
		void draw () {
			cout <<"\ndrawing square\n";
		}
};

class Factory {
	public:
		static Shape* createShape (string shapename){
			Shape *shapeptr;
			cout<<"creating shape for "<<shapename;
			if(shapename=="circle"){
				shapeptr = new Circle();
			} else if(shapename=="square"){
				shapeptr = new Square();
			} else {
				shapeptr = NULL;
			}
			return shapeptr;
		}
};

int main ( void ){
	string shapename;
	char input[100];
	Shape *myShape = NULL;
	cout<<"enter shape name:";
	cin.getline(input, 90);
	shapename.assign(input);
	myShape = Factory::createShape(shapename);
	if(myShape!=NULL){
		myShape->draw();
	}
}