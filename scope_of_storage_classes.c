#include<stdio.h>
int add();
int mystrlen();//function declaration
int a=9;//Global variable declaration

void total()
{
  static int total;//static variable declaration
  int i;
  for(i=0;i<5;i++)
  {
	  total = total + i;
  }
  printf("SUM = %d\n",total);
  return ;
}

int main()
{
	int a=8;//local variable declaration
	
	printf("a=%d\n",a);

	/* prints value of local variable, 
	because scope is within the function in which we have declared */
	
	total();//prints sum = 10.
	total();//prints sum = 20 because static keyword used in total(), life of a variable is throught the program & scope of the variable is within the file or function in which we have declared.

	register int b=10;
	/* register keyword won't contain address , so it prints value directly*/
	printf("Register variable : %d\n",b);

	mystrlen();

	printf("ADD:%d\n",add());
	return 0;
}
char str[10]="hareesh";//global string declaration

int mystrlen()
{
	int i;
	for(i=0;str[i]!='\0';i++);
	printf("String Length :%d\n",i);
	return 0;
}
