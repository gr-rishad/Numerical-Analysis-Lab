#include<stdio.h>
#include<math.h>

double functionOfLowerV,functionOfHigherV,midValue,functionOfmid,presentR,pastR=0;
double iterationLimit,lowerValue,higherValue,functionOfR,R;

double function(double x){
    double y=pow(x,2)-x-2;
    return y;
}


main(){
        int i,itr=1;
    printf("Enter your lower limit.\n");
    scanf("%lf",&lowerValue);

    printf("Enter your higher limit.\n");
    scanf("%lf",&higherValue);

     functionOfHigherV=function(higherValue);
    printf(" function Of Higher Value = %lf\n",functionOfHigherV);

    functionOfLowerV=function(lowerValue);
    printf(" function Of Lower Value = %lf\n",functionOfLowerV);


    for(i=1;i<=54;i++)
    {
        if((functionOfHigherV)*(functionOfLowerV) > 0){
                printf("No root");
                break;

        }
        else {
               //
                  if(functionOfHigherV * functionOfLowerV < 0){
                        printf(" =============iteration ==== %d\n",i);

                        double functionOfUpper=(double)(functionOfLowerV*higherValue)-(functionOfHigherV*lowerValue);
                        double functionOfLower=(double)functionOfLowerV-functionOfHigherV;

                         R =(double) (functionOfUpper/ functionOfLower);
                        double presentR=R;

                        printf("R==%lf\n",R);

                        double functionOfR=function(R);
                        printf("%lf\n",functionOfR);



                         if((functionOfLowerV * functionOfR) > 0){
                            lowerValue= R;
                            higherValue=higherValue;
                            printf("lower Value = %f\n",lowerValue);
                            printf("higher value = %f\n",higherValue);

                                                    functionOfHigherV=function(higherValue);
                            printf(" function Of Higher Value = %lf\n",functionOfHigherV);

                            functionOfLowerV=function(lowerValue);
                            printf(" function Of Lower Value = %lf\n",functionOfLowerV);



        }
                            if((functionOfLowerV * functionOfR) < 0){
                            lowerValue=lowerValue;
                            higherValue=midValue;
                            printf("lower Value = %f\n",lowerValue);
                            printf("higher value = %f\n",higherValue);

                             functionOfHigherV=function(higherValue);
                            printf(" function Of Higher Value = %lf\n",functionOfHigherV);

                            functionOfLowerV=function(lowerValue);
                            printf(" function Of Lower Value = %lf\n",functionOfLowerV);


        }
                    if( i==1){
                        printf("Error not possible.\n");
                    }else {
                    double E;
                            E=((double)((presentR-pastR)/presentR))*100;
                            double error=fabs(E);
                            printf("Error =%lf\n", error);

                            if(error<4){
                                break;
                            }


        }


      }
        }
        pastR=R;
    }
}

