#include <stdio.h>
int main()
{
int i,n;
float s1=0,s2=0,y[5],a,b,h,s;
printf("enter a,b and number of intervals: ");
scanf("%f%f%d",&a,&b,&n);
h=(b-a)/n;
printf("enter y values: ");
for(i=0;i<n;i++)
{
scanf("%f", &y[i]);
}
for(i=1;i<n;i++)
{
if(i%2==0)
s1=s1+y[i];
else
s2=s2+y[i];
}
s=(h/3)*(y[0]+y[n]+4*s2+2*s2);
printf("approximate integer value: %f\n",s);
return 0;
}
