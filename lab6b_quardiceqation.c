#include<stdio.h>
void main()
{
int a,b,c,d;
float x,y,D;
printf("enter the all safisent and constant");
scanf("%d %d %d",&a,&b,&c);
D=b*b-4*a*c;
if(D<0)
{
printf("both roots are imagery");
}
else if(D==0)

{
x=b/(2.0*a);
printf("both roots are equal");
printf("%f",x);

}
else if(D>0)

{
x=b+sqrt(D)/(2*a);
y=-b*sqrt(D)/(2*a);
printf("roots are real");
printf("%f %f",x,y);
}


}
