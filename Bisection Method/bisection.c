#include <stdio.h>
#include<Math.h>
double functionOfLowerV,functionOfHigherV,midValue,functionOfmid,presentMidValue,pastMidValue=0;
double iterationLimit,lowerValue,higherValue;
double function(double x){
    double y=pow(x,2)-3;
    return y;
}


main(){
    int i,itr=1;
    printf("Enter your lower limit.\n");
    scanf("%lf",&lowerValue);

    printf("Enter your higher limit.\n");
    scanf("%lf",&higherValue);

    printf("Enter your iteration limit.\n");
    scanf("%lf",&iterationLimit);


        functionOfHigherV=function(higherValue);
    printf(" function Of Higher Value = %lf\n",functionOfHigherV);

    functionOfLowerV=function(lowerValue);
    printf(" function Of Lower Value = %lf\n",functionOfLowerV);



    for(i=1;i<=iterationLimit;i++)
    {
        if((functionOfHigherV)*(functionOfLowerV) > 0){
                printf("No root");
                break;

        }
        else {
               //
                  if(functionOfHigherV * functionOfLowerV < 0){
                        printf(" =============iteration ==== %d\n",i);

        midValue=(double)(higherValue+lowerValue)/2;
        printf("midvalue %f\n",midValue);
         presentMidValue=midValue;

        functionOfmid=function(midValue);
        printf("Function of mid value =%lf \n",functionOfmid);
        //printf("------------------------------------.\n");

        if((functionOfLowerV * functionOfmid) > 0){
            lowerValue=midValue;
            higherValue=higherValue;
            printf("lower Value = %f\n",lowerValue);
            printf("higher value = %f\n",higherValue);


        }
         if((functionOfLowerV * functionOfmid) < 0){
            lowerValue=lowerValue;
            higherValue=midValue;
            printf("lower Value = %f\n",lowerValue);
            printf("higher value = %f\n",higherValue);


        }
        if( i==1){
            printf("Error not possible.\n");
        }else {
        double E;
                E=((double)((presentMidValue-pastMidValue)/presentMidValue))*100;
                double error=fabs(E);
                printf("Error %lf\n", error);


        }


            }

        }


      pastMidValue=midValue;

    }


}


