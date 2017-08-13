#include<stdio.h>
#include<string.h>
void sortTheString( char str[] );

int main(){
	
	char S[100], T[100];
	printf("Enter S : ");
	scanf("%s",S);
	printf("Enter T : ");
	scanf("%s",T);
	sortTheString(S);
	sortTheString(T);
	if( strcmp(S, T) == 0 )
		printf("The strings are anagrams \n");
	else
		printf("The strings are NOT anagrams \n");
	
	return 0;
}

void sortTheString(char str[]){	
	int i,j,temp;
	int len = strlen(str);
	for(i=0; i<len; i++)
		for(j=0; j< len; j++)
			if( str[i] < str[j]){
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}	
}
