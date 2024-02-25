#include <iostream>

using namespace std;

class purchase;

template <typename T>
class calculation;

class purchase {
	private:
		string item_name;
		int price;
	public:
		purchase (string item, int rate){
			item_name = item;
			price = rate;
		}
		
		friend ostream& operator <<(ostream &out, purchase &obj){
			out << "iteamname:"<<obj.item_name<<" price:"<<obj.price;
			return out;
		}
		
		friend class calculation <class purchase>;
};


template <typename T>
class calculation{
	public:
		T add (T a, T b){
			return a+b;
		}
		
		T sub (T a, T b){
			return a - b;
		}
};


template <>
class calculation <string>{
	public:
		string add (string a, string b){
			return a+b;
		}
		
		string sub (string a, string b){
			int size = b.size();
			int index;
			while(a.find(b)!=-1){
				index = a.find(b);
				a.erase(index, size);
			}
			return a;
		}
};

template <>
class calculation <class purchase>{
	private:
		string sub (string a, string b){
			int size = b.size();
			int index;
			while(a.find(b)!=-1){
				index = a.find(b);
				a.erase(index, size);
			}
			return a;
		}
	
	public:
		purchase add (purchase a, purchase b){
			return purchase(a.item_name+b.item_name, a.price+b.price);
		}
				
		purchase sub (purchase a, purchase b){
			return purchase(sub(a.item_name,b.item_name), a.price-b.price);
		}
};

int main ( void ){
	calculation <int> intmanipulator;
	calculation <string> strmanipulator;
	calculation <purchase> purchasemanipulator;
	
	cout<<"int manipulation add:"<<intmanipulator.add(20,10)<<" sub:"<<intmanipulator.sub(50,10)<<"\n";
	cout<<"string manipulation add:"<<strmanipulator.add("hi mathu, how are you mathu", "mathu")<<" sub:"<<strmanipulator.sub("hi mathu, how are you mathu", "mathu")<<"\n";
	cout<<"purchase manipulation add:"<<purchasemanipulator.add(purchase("rice oil", 200), purchase ("rice", 100))<<" sub:"<<purchasemanipulator.sub(purchase("rice oil", 200), purchase ("rice", 100))<<"\n";
	
	return 0;
}
