#include<stdio.h>

void main()
{
    signed int a=4294967290;
    unsigned int b=429496729;
    signed short int a1=65530;
    unsigned short int b1=65530;
    signed long int a2=18446744073709551600;
    unsigned long int b2=18446744073709551600;
    signed char ch =128;
    unsigned char ch1=250;
    float c=3.14;
    double d=3.1467;
    long double e=13.14678977;
    printf("%d bytes\n%d bytes\n%d bytes\n%d bytes\n%d bytes\n%d bytes\n",sizeof(a),sizeof(b),sizeof(a1),sizeof(b1),sizeof(a2),sizeof(b2));
    printf("%d byte\n%d byte\n",sizeof(ch),sizeof(ch1));
    printf("%d bytes\n%d bytes\n%d bytes\n",sizeof(c),sizeof(d),sizeof(e));
    printf("%d %i %hi %hu %li %lu\n",a,b,a1,b1,a2,b2);
    printf("%d %d\n",ch,ch1);
    printf("%f %lf %Lf",c,d,e);
}
