﻿#include <stdio.h>
int main(){
int i,j,c=0,r,ld;
scanf("%d",&r);
for(i=0;i<1000;i++)
for(j=0;j<1000;j++){
ld=2000000000;
if((i-500)*(i-500)+(j-500)*(j-500)<ld)ld=(i-500)*(i-500)+(j-500)*(j-500);
if((i-499)*(i-499)+(j-500)*(j-500)<ld)ld=(i-499)*(i-499)+(j-500)*(j-500);
if((i-500)*(i-500)+(j-499)*(j-499)<ld)ld=(i-500)*(i-500)+(j-499)*(j-499);
if((i-499)*(i-499)+(j-499)*(j-499)<ld)ld=(i-499)*(i-499)+(j-499)*(j-499);
if(ld<(long long)r*r)c++;
}
printf("%d",c);
}