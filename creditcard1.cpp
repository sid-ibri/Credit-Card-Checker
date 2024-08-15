#include<iostream>
using namespace std;

int main(){
long a;
int b,i=1,p,sum1=0,q,m,n;
cout<<"ENTER CARD NUMBER"<<endl;
cin>>a;
while(a>0){
b=a%10;
a=a/10;
if(i%2!=0)
  {
  sum1=sum1+b;
  }
else{
p=b*2;
if(0<=p && p<=9)
  {
  sum1=sum1+p;
  }
else{
m=p%10;
n=p/10;
sum1=sum1+m+n;
}
}
i++;
} 
 if(sum1%10==0 && i-1==13 && b==4 || sum1%10==0 && i-1==16 && p==8)
           {
           cout<<"Valid card - VISA"<<endl;
           }
else if(sum1%10==0 && i-1==15)
  {
  cout<<"Valid card - AMERICAN EXPRESS"<<endl;
  }
  else if(sum1%10==0 && i-1==16){
  cout<<"Valid card - MASTERCARD"<<endl;
  }
  else{
  cout<<"Not a valid card"<<endl;
  }
  }











