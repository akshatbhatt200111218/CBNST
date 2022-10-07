#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x-2*x-4
#define df(x)3*x-2
int main()
{

   float x0,x1,f0,f1 ,dfo; 
  printf("enter the root");
  scanf("%d",&x0);

  do{
    f0=f(x0);
    dfo=df(x0);
    x1=x0-(f0/dfo);
    f1=f(x1);
    x0=x1;
    printf("root of equation%f",x1);
    
  }while(fabs(f1)>e);
  return 0;
 
}