#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'hourglassSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int hourglassSum(vector<vector<int>> arr) {
	int x,y;
	int maxSum = INT_MIN;
	int sum;
	for(int x = 1;x<5;x++){
		for(int y = 1;y<5;y++){
			sum = arr[x-1][y-1]+arr[x-1][y]+arr[x-1][y+1]+
					arr[x][y]+
					arr[x+1][y-1]+arr[x+1][y]+arr[x+1][y+1];
			if(sum>maxSum){
				maxSum=sum;
			}
		}
	}
	return maxSum;
}

int main()
{
    

    vector<vector<int>> arr{
		{ -9, -9, -9,  1, 1, 1 },
			{0, -9,  0,  4, 3, 2},
				{-9, -9, -9,  1, 2, 3},
					{0,  0,  8,  6, 6, 0},
						{0 , 0,  0, -2, 0, 0},
							{0 , 0,  1,  2, 4, 0}
	};



    int result = hourglassSum(arr);

    cout << result << "\n";

    

    return 0;
}

string ltrim(const string &str) {
    string s(str);


    return s;
}

string rtrim(const string &str) {
    string s(str);


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
