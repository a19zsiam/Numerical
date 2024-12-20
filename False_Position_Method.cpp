//False position Method
#include<iostream>
using namespace std;

double f(double x){
return x*x-4*x-10;
}

int main(){
double x0,x1,x2,i=1;
cout<<"Enter two point for finding the root"<<endl;
cin>>x1>>x2;

if(f(x1)*f(x2)>0){
cout<<"You entered wrong point";
exit (0);
}


while(1){
x0=x1-(x2-x1)*f(x1)/(f(x2)-f(x1));

if (f(x0)<0.00001 && f(x0)>-0.00001){
cout<<"Total itreation is "<<i<<endl;
cout<<"The root is "<<x0;
break;
}
i++;
if(f(x1)*f(x0)<0)
x2=x0;

else 
x1=x0; 

}
return 0;
}
