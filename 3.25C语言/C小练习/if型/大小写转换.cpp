#include<stdio.h>

int main(){
	/*
	//��дתСд 
	char c;
	printf("������һ����дӢ����ĸ��"); 
	c=getchar();
	c+=32;
	putchar(c);
	return 0; 
	*/
	
	/*Сдת��д 
	char c;
	printf("������һ��СдӢ����ĸ��"); 
	c=getchar();	
	c-=32;
	putchar(c);
	return 0;  
	*/
	
	char c;
	printf("������һ����ĸ��");
	c=getchar();
	if(c>='A'&&c<='Z'){
		c+=32;
	    putchar(c);
	}
	else if(c>='a'&&c<='z'){
		c-=32;
	    putchar(c);
	}
	else{
		printf("����Ĳ�����ĸ"); 
	}
	return 0;
} 
