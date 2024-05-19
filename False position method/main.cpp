//
//  main.cpp
//  False position method
//
//  Created by Rafsan Sahad on 5/19/24.
//

#include <iostream>
using namespace std;
#define MAX_ITER 10000
double fun(double x){
    return x*x*x - x*x +2;
}
void falsePosition(double a, double b){
    
    if (fun(a)*fun(b)>=0) {
        cout<<"Put the right value for a & b\n"<<endl;
        return;
    }
    double c = a;
    for (int i=0;i < MAX_ITER;i++)
    {
        c=(a*fun(b)-b*fun(a))/(fun(b)-fun(a));
        
        if(fun(c)==0){
            cout<<"Exact root found "<<fun(c)<<endl;
            return;}
        else if (fun(c)*fun(a)>0){
            a=c;}
        else{
            b=c;}
    }
    cout<<"Approximate root Value :"<< c << endl;
}
int main(){
    double a=-200,b=300;
    falsePosition(a, b);
    return 0;
}
