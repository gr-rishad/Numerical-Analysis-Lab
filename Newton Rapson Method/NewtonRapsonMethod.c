#include<stdio.h>
#include<math.h>

float fx(float x){
    return x*x*x-20;
}
float dfx(float x){

    return 3*x*x;
}
main(){
    int i=1;
    float x, h;
    printf("Enter X value:\n");
    scanf("%f",&x);

    while(1==1){

     printf("==========After %d iteration =======:\n ",i);

        printf("\t f(x) is =%.3f\n",fx(x));
        printf("\t df(x) is =%.3f\n",dfx(x));


        h=(x)- fx(x) / dfx(x);

        printf("\t Root is =%.3f\n",h);

        float error= ((h-x)/h) *100;
        error=fabs(error);
        printf("\t Error=%f \n",error);

        if(("%.3f",h) == ("%.3f",x)){

        break;

    }

        x=h;
        i++;


    }

    printf("After %d iteration root value is equal...\n",i);

}

