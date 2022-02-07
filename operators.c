#include<stdio.h>

void main()
{//arthimatic
    int a,b,c,d,e,f,g;
    printf("enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    c=a+b;//addition
    d=a-b;//substraction
    e=a*b;//multiplication
    f=a%b;//modulus
    g=a/b;//division
    float h=(float)a/b;
    printf("\n%d %d %d %d %d %f\n",c,d,e,f,g,h);
    
    //logical
    if(a||b){
        printf("condition is true\n");
    }
    else{
        printf("condition is false\n");
    }
    if(!a&&b){
        printf("condition is true\n");
    }
    else{
        printf("condition is false\n");
    }
    
    //relational
    if(a==b){
        printf("both are equal\n");
    }
    else{
        printf("not equal\n");
    }
    if(a>b){
        printf("a is biggest number\n");
    }
    else{
        printf("b is biggest number\n");
    }
    if(a<=b){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    
    //bitwise 
    
    int p,q,r,s,t,u;
    p=a&b;
    q=a|b;
    r=a^b;
    s=~a;
    t=a<<2;
    u=a>>2;
    printf("%d %d %d %d %d %d\n",p,q,r,s,t,u);
    
    //assignment
    int A=10,B=50;
    B+=A;
    printf("%d  ",B);
    B-=A;
    printf("%d  ",B);
    B*=A;
    printf("%d  ",B);
    B/=A;
    printf("%d  ",B);
    B<<=2;
    printf("%d  ",B);
    B&=1;
    printf("%d  ",B);
    
}
