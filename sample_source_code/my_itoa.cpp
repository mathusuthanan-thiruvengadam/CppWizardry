#include <stdio.h>
#include <string.h>

char *_itoa(int number){
	static char result[100]={0};
	int index=0;
	char temp;
	int x=0;
	
	while(number>0){
		result[index]='0'+(number%10);
		number=number/10;
		index++; 
	}
	
	while(x<(index/2)){
		temp = result[x];
		result[x] = result[(index-1)-x];
		result[(index-1)-x] = temp;
		x++;
	}
	
	result[index]=0;
	printf("\n%s", result);
	return result;
}

int _atoi(char *number){
	int index = strlen(number)-1;
	int result=0;
	int fact=1;
	while(index>=0){
		result = result + (number[index]-'0')*fact;
		fact = fact * 10;
		index--;
	}
	return result;
}


int main ( void ){
	printf("%d",_atoi("123"));
}