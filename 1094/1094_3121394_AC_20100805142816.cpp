﻿#include<iostream>
using namespace std;
char s[81]={0};
char input[80001]={0};
int len,pi,ps,i;
int main(){
cin.getline(input,10002);
len=strlen(input);
pi=0;
ps=0;
for(i=0;i<=79;i++)s[i]=32;
for(pi=0;pi<len;pi++){
if(input[pi]=='>')ps++;
else if(input[pi]=='<')ps--;
else{s[ps]=input[pi];ps++;}
if(ps>79 || ps<0)ps=0;}
for(i=0;i<=79;i++)cout<<s[i];
}