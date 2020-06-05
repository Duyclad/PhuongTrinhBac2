#include <iostream>
#include <math.h> 
#include <stdio.h>
using namespace std;
int main (){
    float a,b,c, delta,x,y,z;
    cin >>a>>b>>c;
    if (a!=0){
        delta = pow(b,2)-4*a*c;
        if (delta>0){
            x = (-b+sqrt(delta))/(2*a);
            printf("%.4f",x);
            cout<<endl;
            y = (-b-sqrt(delta))/(2*a);
            printf("%.4f",y);
        }
        else if (delta=0){
            z = -b/(2*a);
            printf("%.4f",z);
        }
        else cout<<"VN";
    }
    if (a==0){
        if (b==0){
            if (c==0){
             cout<<"VSN";
            }
            else if (c!=0){
                    cout<<"VN";
                }
        }               
    else if (b!=0){
        float k = -c/b;
        printf("%.4f",k);
    }
    }
}
