//Newton Raphson Method
#include<iostream>
using namespace std;

double f(double x){
return x*x-4*x-10;
}
double f1(double x){
return 2*x-4;
}

int main(){
double x0,x1,i=1;
cout<<"Enter a point for finding the root"<<endl;
cin>>x1;

while(1){
x0=x1-f(x1)/f1(x1);

if (f(x0)<0.00001 && f(x0)>-0.00001){
cout<<"Total itreation is "<<i<<endl;
cout<<"The root is "<<x0;
break;
}
i++;
x1=x0;

}
return 0;
}
