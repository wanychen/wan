#include<stdio.h>
//���գ����ǽ������ķֶ������if��ʾ 
/*��ֶκ���Ϊ�� 
	f(x)={	
			x		(x<1)
			2x-1	(1<=x<10)
			3x-11	(x>=10)	
         }

*/
int main(){
	float x,y;
	printf("������x��ֵ��");
	scanf("%f",&x);
	if(x<1){
		y=x;
	}else if(x<10){
		y=2*x-1;
	}else{
		y=3*x-11;
	}
	printf("y=%f",y);
	return 0;
} 
