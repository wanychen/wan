#include<stdio.h>
int main(){
	float a,b,max;
	printf("�������������֣�");
	scanf("%f %f",&a,&b); 
	/*if(a>b){
		printf("�������Ϊ��%.1f",a);
	}
	else if(a<b){
		printf("�������Ϊ��%.1f",b);
	}
	else{
		printf("��������һ����");
	}*/
	max=a>b?a:b;
	printf("%f",max);
} 
