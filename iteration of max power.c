#include<stdio.h>
#include<math.h>
float fun(float x){
    float result=cbrt(2*x*x+4);

    return result;
}
double dif(int x){
    double result=pow((2*x*x+4),2);
    double temp=cbrt(result);
    
    return (4*x)/(3*temp);

}
int main(){
    int val1,val2;

    printf("\nEnter value 1 and value 2:");
    scanf("%d%d",&val1,&val2);

    if(dif(val1)>1 && dif(val2)>1){
        printf("\nWrong value.");
        return 0;
    }

    float x=(val1+val2)/2;
    float x1;
    int count=0;

    while(1){
        count++;
        x1=fun(x);
        if((x1-x)<=0.001)
            break;
        x=x1;
    }

    printf("\nNo. of iterations: %d",count);
    printf("\nValue of root: %f",x1);

    return 0;

}