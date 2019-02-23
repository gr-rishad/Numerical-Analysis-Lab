#include<stdio.h>
double function (double x){
    return x*x*x*x-x-10;
}
main(){

    double lowerLimit,higherLimit;double x;
    printf("Enter your lower limit:\n");
    scanf("%lf",&lowerLimit);

    printf("Enter your higher limit:\n");
    scanf("%lf",&higherLimit);

    double lFunction=function(lowerLimit);
    printf("lFunction== %.2lf\n",lFunction);

    double hFunction=function(higherLimit);
    printf("hFunction== %.2lf\n",hFunction);

    int j;


    for(j=1;j<5;j++){
            double previousX=higherLimit;
        printf("iteration ==%d\n",j);

        double upp=hFunction* (higherLimit-lowerLimit);
        double loo=hFunction-lFunction;
        printf("%lf\n",upp);
        printf("%lf\n",loo);

        double d=upp/loo;
        printf("%lf\n",d);

        double x= higherLimit-d;
        printf("formula==%.2lf\n",x);
        double presentX=x;

        double error;
        error=((presentX-previousX)/presentX)*100;
        error=fabs(error);
        printf("Error== %.2lf\n",error);
        if(error<0){
            break;
        }

lowerLimit= higherLimit;
        higherLimit=x;
        hFunction=function(higherLimit);






    }



}

