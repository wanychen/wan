#include<stdio.h>
#include<math.h>	//Ҫ�ø��������������ѧ�� 
int main(){
	/*
	����������ʽ��
	s=(a+b+c)/2		���ܳ���һ��
	area= sqrt(s*(s-a)*(s-b)*(s-c));	�������ʽ 
	*/
	float a,b,c,s,area;
	printf("�����������ε����߳���");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	area= sqrt(s*(s-a)*(s-b)*(s-c));	//sqrt()����������� 
	printf("�����ε����Ϊ��%f\n",area);
	 
	return 0;
}
