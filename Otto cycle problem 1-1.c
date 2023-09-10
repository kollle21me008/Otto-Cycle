#include<stdio.h>

int main()
{
    float l,d,vc, vs,v,m;
    float r,n,eff,ad,qs,qr,w,pm;
    float t2,t1,t3,p1,p3,p2,t4;
    float cv=0.718;
    float R=0.287;
    printf("enter the clearance volume in m^3 : ");
    scanf("%f",&vc);
    printf("\nenter diameter and stroke length(in metre): ");
    scanf("%f%f",&d,&l);
    vs=(3.14*d*d*l)/4;
    printf("enter the adiabatic index: ");
    scanf("%f",&ad);
    r=((vc+vs)/vc);
    n=pow(r,(ad - 1));
    eff=(1-(1/n))*100;
    printf("\nthe air standard efficiency is : %f ",eff);
    printf("\nenter the initial temperature of process in K : ");
    scanf("%f",&t1);
    printf("\nenter minimum pressure and maximum pressure in cycle: ");
    scanf("%f%f",&p1,&p3);
    t2=t1*n;
    printf("\ntemperature after isentropic compression:%f K",t2);
    p2=p1*pow(r,ad);
    printf("\npressure after isentropic compression is %f bar",p2);
    t3=t2*(p3/p2);
    printf("\ntemperature at maximum pressure: %f K",t3);
    t4= t3*(1/n);
    printf("\ntemperature after isentropic expansion: %f K",t4);
    v=vc+vs;
    m=((p1*100*v)/(R*t1));
    printf("\nmass of air is :%f",m);
    qs=m*cv*(t3-t2);
    qr=m*cv*(t4-t1);
    w=qs-qr;
    pm=w/vs;
    printf("\nAt Constant Volume process \nHeat Addition=%f Kj \nHeat Rejection=%f Kj",qs,qr);
    printf("\nwork done during the Cycle = %f Kj",w);
    printf("\nMean Effective pressure of the Cycle is : %f Kpa",pm);
    return 0;
    
}