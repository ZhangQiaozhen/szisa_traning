
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
		printf("������һ������ֵ:\n");
		scanf("%d",&num);
		n++;
		if(sj>num)
		   printf("С��\n");
		else if(sj<num)
		   printf("����\n");
	}while(sj!=num);
	printf("��ϲ������%d�β¶��˴�",n);
	return 0;
}
