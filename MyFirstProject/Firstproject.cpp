#include<stdio.h>
#include<math.h>

int main()
{
	char c;
	c=getchar();
	while(c!='\n')
	{
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			if((c>='W'&&c<='Z')||(c>='w'&&c<='z'))c=c-22;
			else c=c+4;
		}
		printf("%c",c);
		c=getchar();
	}
	printf("\n");
	return 0;
}
















int d()
{
	int f1=1,f2=2,f3;
	int i;
	printf("%12d\n%12d\n",f1,f2);
	for(i=1;i<=38;i++)
	{
		f3=f1+f2;
		printf("%12d\n",f3);
		f1=f2;
		f2=f3;
	}
	return 0;
}







int c(){
	int i,j,n=0;
	for(i=1;i<=4;i++)
		for(j=1;j<=5;j++,n++)
	{
		if(n%5==0) printf("\n");
		printf("%d\t",i*j);
	}
		printf("\n");
		return 0;
}





int b(){
	int n;
	for(n=100;n<=200;n++){
		if(n%3==0)
			continue;
		printf("%d",n);
		printf("  ");
	}
	printf("\n");
	return 0;
}





int a(){
	int i=1,sum=0;
	printf("please enter i,i=?");
	scanf("%d",&i);
	while(i<=10)
	{
			sum=sum+i;
		i++;
	}
	printf("hello world!");
	printf("sum=%d\n",sum);
	return 0;
}