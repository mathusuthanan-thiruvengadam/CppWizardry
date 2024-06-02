#include <iostream>

using namespace std;

int main ( void ){
	long long number;
	long long oneKbMask = 1023;
	cout <<"enter bytes:";
	cin >> number;
	
	int gb = (number>>30) & oneKbMask;
	int mb = (number>>20) & oneKbMask;
	int kb = (number>>10) & oneKbMask;
	int bytes = (number) & oneKbMask;
	cout << number <<" bytes = "<< gb <<" GB "<< mb <<" MB and " << kb <<" KB "<<bytes<<" bytes\n";
}

//9458094598 bytes = 8 GB 827 MB and 964 KB 518 bytes
//8GB  	= 8589934592
//824MB = 867172352
//964KB	= 987136
//518	= 518
//8589934592+867172352+987136+518

9458094598
9458094598