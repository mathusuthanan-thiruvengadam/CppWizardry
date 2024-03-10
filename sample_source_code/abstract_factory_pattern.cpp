#include <iostream>

using namespace std;

class Car {
	public:
		virtual void leanBackSeats () = 0;
		virtual void turnOnAC() = 0;
};

class Truck {
	public:
		virtual void loadConsignment () = 0;
		virtual void unloadConsignment () = 0;
};


class TataCar: public Car {
	public:
		void leanBackSeats (){
			cout<<"Tata car leanback the seats\n";
		}
		
		void turnOnAC(){
			cout << "Tata car ac is turned on\n";
		}
};

class FordCar: public Car {
	public:
		void leanBackSeats (){
			cout<<"Ford car leanback the seats\n";
		}
		
		void turnOnAC(){
			cout << "Ford car ac is turned on\n";
		}
};

class TataTruck: public Truck {
	public:
		void loadConsignment (){
			cout<<"Tata Truck loading consignment\n";
		}
		
		void unloadConsignment(){
			cout << "Tata Truck unloading consignment\n";
		}
};

class FordTruck: public Truck {
	public:
		void loadConsignment (){
			cout<<"Ford Truck loading consignment\n";
		}
		
		void unloadConsignment(){
			cout << "Ford Truck unloading consignment\n";
		}
};

class VechileFactory{
	public:
		virtual Car* makeCar() = 0;
		virtual Truck* makeTruck() = 0;
};

class TataFactory: public VechileFactory{
	public:
		Car* makeCar (){
			return new TataCar();
		}
		Truck* makeTruck (){
			return new TataTruck();
		}
};

class FordFactory:public VechileFactory {
	public:
		Car* makeCar (){
			return new FordCar();
		}
		Truck* makeTruck (){
			return new TataTruck();
		}
};

VechileFactory* pickFactory (){
	string brandName;
	char brand[100];
	cout<<"enter the branch you are interested in:";
	cin.getline(brand, 100);
	brandName.assign(brand);
	if(brandName=="ford")
		return new FordFactory();
	else if (brandName=="tata")
		return new TataFactory;
	else 
		return NULL;
}

int main ( void ){
	VechileFactory *factory = pickFactory();
	Car* myCar = factory->makeCar();
	myCar->leanBackSeats();
	myCar->turnOnAC();
	return 0;
}