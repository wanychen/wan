#include<stdio.h>
//���ܱ�3���� �� ����3������ �� %3!=0 
int main(){
	int a=100;
	for(a;a<=200;a++){
//		if(a%3!=0){
//			printf("%d\t",a);
//		}
		if(a%3==0) continue;
		printf("%d\t",a); 
	}
	return 0;
}
