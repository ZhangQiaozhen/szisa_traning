
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num;
	int sj;
	int n=0;
	srand(time(NULL));
	  sj=rand()%1001;
	do{
		printf("请输入一个整数值:\n");
		scanf("%d",&num);
		n++;
		if(sj>num)
		   printf("小了\n");
		else if(sj<num)
		   printf("大了\n");
	}while(sj!=num);
	printf("恭喜你用了%d次猜对了答案",n);
	return 0;
}
