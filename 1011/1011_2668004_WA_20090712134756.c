﻿#include <stdio.h>
int main(){
int i=1;
double p,q,xj,sj;
scanf("%lf %lf",&p,&q);
p/=100;
q/=100;
while(1){
xj=i*p;
sj=i*q;
if((int)xj+1<sj){
printf("%d",i);
return 0;
}
i++;
}
}
