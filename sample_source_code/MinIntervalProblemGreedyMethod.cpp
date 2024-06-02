// C++ program for the above approach

//#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

// Function to find the minimum number
// of intervals in the array A[] to
// cover the entire target interval
int minimizeSegment(vector<pair<int, int> > A,
					pair<int, int> X)
{
	// Sort the array A[] in increasing
	// order of starting point
	//sort(A.begin(), A.end());

	// Insert a pair of INT_MAX to
	// prevent going out of bounds
	A.push_back({ INT_MAX, INT_MAX });

	// Stores start of current interval
	int start = X.first;

	// Stores end of current interval
	int end = X.first - 1;

	// Stores the count of intervals
	int cnt = 0;

	cout<<"Before starting iteration, start:"<<start<<" end:"<<end<<"\n";

	// Iterate over all the intervals
	for (int i = 0; i < A.size();) {
		int temp;
		// If starting point of current
		// index <= start
		cout<<"iteration "<<i<<" : ( "<<A[i].first<<" , "<<A[i].second<<" ) - " ;
		if (A[i].first <= start) {
			temp=A[i].first;
			end = max(A[i++].second, end);
			cout<<temp<<"(range start) <= "<< start<<" (start) so, end is "<<end<<"\n";
		}
		else {
			int temp;
			// Update the value of start
			temp = start;
			start = end;

			// Increment the value
			// of count
			++cnt;
			cout<<A[i].first<<"(range start) > "<< temp<<" (start)so, end is "<<end<<" and count:"<<cnt<<"\n";

			// If the target interval is
			// already covered or it is
			// not possible to move
			// then break the loop
			if (A[i].first > end
				|| end >= X.second) {
				cout<<"breaking the loop ...\n";
				break;
			}
		}
	}

	// If the entire target interval
	// is not covered
	if (end < X.second) {
		return -1;
	}

	// Return Answer
	return cnt;
}

// Driver Code
int main()
{
	vector<pair<int, int> > A = {
		//{ 1, 3 },  { 1, 1 }, { 2, 4 }, { 2, 10 }, { 2, 3 }
		{ 1, 3 },  { 1, 1 }, {2,5},{ 4, 10 }
	};
	vector<pair<int, int> >:: iterator iter;
	pair<int, int> X = { 1, 10 };
	
	iter = A.begin();
	while(iter!= A.end()){
		cout<<"("<<iter->first<<","<<iter->second<<")\n";
		iter++;
	}
	cout << minimizeSegment(A, X);

	return 0;
}
