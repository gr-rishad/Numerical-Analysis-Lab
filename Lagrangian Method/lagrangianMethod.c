#include <stdio.h>
#include<math.h>

double functionLnot(double x, double xl,double xm,double xh){
 double leftSight=(x-xm)/(xl-xm);
 double rightSight=(x-xh)/(xl-xh);
 return leftSight*rightSight;

}
double functionLtwo(double x, double xl,double xm,double xh){
 double leftSight=(x-xl)/(xm-xl);
 double rightSight=(x-xh)/(xm-xh);
 return leftSight*rightSight;

}
double functionLone(double x, double xl,double xm,double xh){
 double leftSight=(x-xl)/(xh-xl);
 double rightSight=(x-xm)/(xh-xm);
 return leftSight*rightSight;

}
double formula(double l,double m,double h,double fxl,double fxm,double fxh ){
    //return l*fxl;
    //return m*fxm;
   // return h;
   /*double b=fxh;
   double c=h;
   double r=b*c;
   return r;
   */
    //double a= (double)fxh*h;
    //return a;
    return (l*fxl)+(m*fxm)+(h*fxh);
}

main(){
    double lLower,lmiddle,lHigh;
    double xl,xh,xm;
    double fxl,fxh,fxm;
    int x;
    printf("Enter your x(16) Value:\n");
    scanf("%d",&x);

    printf("Enter your xl(10),xm(15),xh(20) value:\n");
    scanf("%lf %lf %lf",&xl,&xh,&xm);

    printf("Enter your f(xl)(227.04),f(xm)(362.78),f(xh)(517.35) value:\n");
    scanf("%lf %lf %lf",&fxl,&fxm,&fxh);

    double l= (double)functionLnot(x,xl,xm,xh);
    printf("Lnot=== %.2lf\n",l);

    double m= (double)functionLone(x,xl,xm,xh);
    printf("LOne====%.2lf\n",m);

    double h= (double)functionLtwo(x,xl,xm,xh);
    printf("LTwo====%.2lf\n",h);



    double f=(double)formula(l,m,h,fxl,fxm,fxh);
    printf("%.2lf\n",f);


}
