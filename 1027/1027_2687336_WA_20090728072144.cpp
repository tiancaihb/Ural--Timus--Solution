﻿#include<fstream>
using namespace std;
ifstream cin("1027.in");
ofstream cout("1027.out");

int main(){
    char c,ct,s[10001]={0},sl=0,f=0;
    while(cin>>c){
        next:
        if(c=='('){
            if(cin>>ct){
                if(ct=='('){
                    if(sl!=0&&s[sl-1]=='*'){
                        c=ct;
                        goto next;
                    }
                    s[sl]='(';
                    sl++;
                    c=ct;
                    goto next;
                }else if(ct=='*'){
                    if(sl!=0&&s[sl-1]=='*'){
                        c=ct;
                        goto next;
                    }
                    s[sl]='(';
                    s[sl]='*';
                    sl++;
                    continue;
                }else if((ct>=48&&ct<=57)||ct=='+'||ct=='-'||ct=='*'||ct=='/'||ct=='='||ct=='('||ct==')'){
                    s[sl]='(';
                    sl++;
                    c=ct;
                    goto next;
                }else{
                    if(sl!=0&&s[sl-1]=='*'){
                        c=ct;
                        goto next;
                    }
                    f=1;
                    goto out;
                }
            }
            f=1;
            goto out;
        }else if(c=='*'){
            if(cin>>ct){
                if(ct==')'){
                    if(sl==0||(s[sl-1]!='('&&s[sl-1]!='*')){
                        f=1;
                        goto out;
                    }else{
                        sl--;
                        continue;
                    }
                }else{
                    if(sl==0||s[sl-1]!='*'){
                        c=ct;
                        goto next;
                    }else{
                        if((ct>=48&&ct<=57)||ct=='+'||ct=='-'||ct=='*'||ct=='/'||ct=='='||ct=='('||ct==')'){
                            c=ct;
                            goto next;  
                        }else{
                            f=1;
                            goto out;
                        }
                    }
                }
            }
        }else if(c==')'){
            if(sl!=0&&s[sl-1]=='*'){
                continue;
            }
            if(sl==0||(s[sl-1]!='('&&s[sl-1]!='*')){
                f=1;
                goto out;
            }else{
                if(s[sl-1]=='('){
                    sl--;
                    continue;
                }else if(s[sl-1]=='*'){
                    continue;
                }else{
                }
            }
        }else{
            if(sl==0||s[sl-1]!='*'){
                continue;
            }else{
                if((ct>=48&&ct<=57)||ct=='+'||ct=='-'||ct=='*'||ct=='/'||ct=='='||ct=='('||ct==')'){
                    continue;
                }else{
                    f=1;
                    goto out;
                }
            }
        }
    }
    if(sl!=0)f=1;
    out:
    if(f==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
