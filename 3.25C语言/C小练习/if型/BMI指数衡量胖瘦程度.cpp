#include<stdio.h>
int main(){
	float h,w,t;
	printf("��������ߺ����أ�");
	scanf("%f %f",&h,&w);
	t=w/(h*h);
	printf("t=%f\n",t);
	if(t<18){
		printf("����ƫ��");
	}
	else if(t<25){
		printf("��������");
	}
	else{
		printf("����ƫ��");
	} 
	
	return 0;
}
