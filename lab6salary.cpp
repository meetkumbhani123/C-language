#include<stdio.h>
void main()
{
 float basicsalary;
 float hra,da,grosssalary=0;

 scanf("%f",&basicsalary);
 
 
 if(basicsalary>=30000)
 {
 
  hra=basicsalary*0.30;
  
  da=basicsalary*0.95;
  printf("hra= %f",hra);
  printf("da= %f",da);
  grosssalary=basicsalary+hra+da;
  printf("%f",grosssalary);
  
}

  else if(basicsalary>=20000)
  {
hra=basicsalary*25;
da=basicsalary*0.90;
printf("hra= %f",hra);
  printf("da= %f",da);
grosssalary=basicsalary+hra+da;
  printf("%f",grosssalary);

}
  
  else if(basicsalary>=10000)
  {
  hra=basicsalary*0.20;
  da=basicsalary*0.80;
  printf("hra= %f",hra);
  printf("da= %f",da);
  grosssalary=basicsalary+hra+da;
  printf("%f",grosssalary);
  }
  
  
  
}

