#include<stdio.h>
#include<math.h>
int main(){
	/*
	���������ʽ
	 
	��ΪC��������û��  +- ������ţ�������Ҫ�������ʽ��� 
	p=-b/(2*a); 
	q=sqrt(b*b-4*a*c)/(2*a); 
	p+q	 p-q
	*/
	float a,b,c,p,q;
	printf("������һԪ���η��̵�a,b,c��");
	scanf("%f %f %f",&a,&b,&c);
	p=-b/(2*a);
	q=sqrt(b*b-4*a*c)/(2*a);
	printf("��һԪ���η��̵�������Ϊ��%f %f\n",p+q,p-q);
}
