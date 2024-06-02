#include <iostream>
#include <map>
#include <string>


using namespace std;

class IntegerToRoman {
	private:
		int number;
	public:
		IntegerToRoman(int number){
			this->number = number;
		}
		
		map<int, int> getPlaceValues(){
			int temp = number;
			map<int, int> placeValues;
			placeValues[0]=0;
			placeValues[1]=temp%10; temp = temp - (temp%10);
			placeValues[10]=temp%100;temp = temp - (temp%100);
			placeValues[100]=temp%1000; temp = temp - (temp%100);
			return placeValues;
		}
		
		tuple <bool, int, string> getLowboundaryMatching(map<int, string> romanMap, int number){
			map<int, string> :: iterator &iter1 = romanMap.begin();
			for(auto &iter :romanMap){
				if(number==iter.first){
					return make_tuple(true, iter.first, iter.second);
				}
				if(number<iter.first){					
					return make_tuple(false, iter.first, iter.second);
				}
				iter1 = iter;
			}
		}
		
		string covertToRoman(){
			string result;
			map<int, string> romanMap {
									{1,"I"},
									{4,"IV"},
									{5, "V"},
									{9,"IX"},
									{10,"X"},
									{40,"XL"},
									{50,"L"},
									{90,"XC"},
									{100,"C"},
									{400,"CD"},
									{500,"D"},
									{900,"CM"},
									{1000,"M"},
									{4000,"MMMM"}};
			map <int, int> placeVal = getPlaceValues();
			for(auto &iter :placeVal){
				//cout<<iter.first<<":"<<iter.second<<"\n";
			}
			//tie(isMatched, intNumber, romString) =getLowboundaryMatching(placeVal[1]);
			auto res =getLowboundaryMatching(romanMap, placeVal[1]);
			bool isMatched = std::get<0>(res);
			int intNumber = std::get<1>(res);
			string romString = std::get<2>(res);
			
			if(isMatched){
				result = romString+result;
			} else {
				result = romString+result;
				int remaining = placeVal[1]%intNumber;
				while(remaining--){
					result = romanMap[1]+result;
				}
			}
			



		
			
			
			
			
			
			
			return result;
		}
};

int main ( int args, char *argv[]){
	int pos;
	long x = strtol(argv[1], NULL, 10);
	IntegerToRoman converter(x);
	cout<<converter.covertToRoman();
}
