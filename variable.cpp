#include<iostream>
using namespace std;
//int c=56;   // it is a global value
int main()
 // ******* Build in Data types*******************88
   // int a=3,b=4,c;
    //cout<<"\n enter the value of a:";
    //cin>>a;
    //cout<<"\n enter the value of b:";
    //cin>>b;
    //c=a+b;
    //cout<<"\n the sum is"<<c;
    //cout<<"\n the global c is"<<::c;  //  when we can use global value we can use the "::"
    //return 0;


    //********** Float ,double and long double Literals *******

  { 
  float s=4.15F;
  long double r=4.15L;
  cout<<"\n the size of 4.15 is"<<sizeof(4.15);
  cout<<"\n the size of 4.15f is"<<sizeof(4.15f);
  cout<<"\n the size of 4.15F is"<<sizeof(4.15F);
  cout<<"\n the size of 4.15l is"<<sizeof(4.15l);
  cout<<"\n the size of 4.15L is"<<sizeof(4.15L);
  cout<<"\n the value of s is"<< s;
  cout<<"\n  the value of r is"<< r;
  return 0;
  
}