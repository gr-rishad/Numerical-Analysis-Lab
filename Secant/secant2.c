#include <stdio.h>
double function(double x){
    return x*x*x*x-x-10;

}

int main(){
    double lowerLimit,higherLimit,Rpresent,Rprevious;
    printf("Enter your lower limit:\n");
    scanf("%lf",&lowerLimit);
    printf("Enter your higher limit:\n");
    scanf("%lf",&higherLimit);
    int i;

    for(i=1;i<9;i++){
             Rprevious=higherLimit;

            printf("=========== iteration  %d=======\n",i);

    double functionOfLower=function(lowerLimit);
    printf("%.2lf\n",functionOfLower);

    double functionOfHigher=function(higherLimit);
    printf("%.2lf\n",functionOfHigher);

    double upp= functionOfHigher * (higherLimit-lowerLimit);
    printf("%.2lf\n",upp);

     double loo= functionOfHigher -functionOfLower;
    printf("%.2lf\n",loo);

    double root= higherLimit -(upp/loo);
    printf("%.2lf\n",root);

   Rpresent=root;

    double error= ((Rpresent-Rprevious)/Rpresent)* 100;
    error=fabs(error);
    printf("%.2lf\n",error);


      if(("%.2lf",Rpresent) == ("%.2lf",Rprevious)){

        break;

    }

    lowerLimit=higherLimit;
    higherLimit=root;
    printf("Root == %.2lf\n",higherLimit);

    }

    return 0;

}
