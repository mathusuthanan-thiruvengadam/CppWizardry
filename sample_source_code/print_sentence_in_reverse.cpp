#include <stdio.h>

void reverse (char *str){
	char *temp;
	temp = str;
	while(*str != ' '&& *str != 0){
		str++;
	}
	if(*str == 0){
		while(*temp!=0){
			printf("%c", *temp);temp++;
		}
		printf(" ");
		return;
	}
	if(*str==' '){
		str++;
		reverse(str);
		while(*temp!=' '){
			printf("%c", *temp);temp++;
		}
		printf(" ");
	}

}

int main ( void ){
	reverse("l love you");
}
