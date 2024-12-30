#include<stdio.h>
#include<string.h>
int main(){
	char string[]="cuong le ca tim\n";
	int size=strlen(string);
	char c;
	printf("%s",string);
	printf("moi ban nhap chu muon xoa: ");
	scanf("%c",&c);
	for(int i=0;i<size;i++){
		if(string[i]==c){
			continue;
		}
		printf("%c",string[i]);
	}
}
