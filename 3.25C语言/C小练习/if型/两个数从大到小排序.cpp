#include<stdio.h>
int main(){
	printf("�������������֣�"); 
	int a,b,t;
	scanf("%d %d",&a,&b);
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	printf("�ɴ�С����Ϊ��%d %d",a,b);
}
