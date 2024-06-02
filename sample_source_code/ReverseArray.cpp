#include <iostream>
#include <vector>
#include <string>


using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

vector<int> reverseArray(vector<int> a) {
    int noOfIterations, lastIndex;
	int i;
	int temp;
	cout<<"number of elements in given array:"<<a.size()<<"\n";
	noOfIterations = a.size()/2;
	lastIndex = a.size()-1;
	for(i=0;i<noOfIterations;i++){
		temp = a[i];
		a[i] = a[lastIndex-i];
		a[lastIndex-i] = temp;
		cout<<"Swapping "<<i<<" with "<<lastIndex-i<<"\n";
	}
	return a;
}

int main()
{
    string arr_count_temp;
    int arr_count;
	cin >> arr_count;

	int i=arr_count;
	int no;
	vector<int> arr;
	cout<<"number of elements in given array:"<<arr.size()<<"\n";
	while(i--){
		cin >> no;
		arr.push_back(no);
	}


    vector<int> res = reverseArray(arr);

    for (size_t i = 0; i < res.size(); i++) {
        cout << res[i];

        if (i != res.size() - 1) {
            cout << " ";
        }
    }

    cout << "\n";

    
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), [](int c) {return std::isspace(c);})
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.begin(), s.end(), [](int c) {return std::isspace(c);}),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
