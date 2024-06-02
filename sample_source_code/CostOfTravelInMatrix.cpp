#include <iostream>

using namespace std;


int minCost (int matrix[][3], int targetRow, int targetColumn ,int rowIndex, int columnIndex){
	int down, right, diag;
	
	if(rowIndex>targetRow || columnIndex > targetColumn){
		return INT_MAX;
	}
	if(rowIndex==targetRow && columnIndex == targetColumn){
		return matrix[rowIndex][columnIndex];
	}
	
	right = minCost(matrix, targetRow, targetColumn, rowIndex, columnIndex+1);
	down = minCost(matrix, targetRow, targetColumn, rowIndex+1, columnIndex);
	diag = minCost(matrix, targetRow, targetColumn, rowIndex+1, columnIndex+1);//1,1 >> 
	
	return matrix[rowIndex][columnIndex]+min(right, min(down, diag)); //1+
	
}


int main ( void ){
	int matrix[3][3] = {
		{
			1,2,3
		},
		{
			4,8,2
		},
		{
			1,5,3
		}
						};
	int m=2;
	int n=2;
	cout<<"min cost:"<<minCost(matrix, 2,2, 0,0);
	return 0;
}