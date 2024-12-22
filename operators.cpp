#include<iostream>
using namespace std;
int main(){
    int a=4,b=5;
    //1. Arithematic operator
    cout<<"\n Following are the Arithematic operator";
    cout<<"\n the value of a+b is "<<a+b;
    cout<<"\n the value of a-b is "<<a-b;
    cout<<"\n the value of a*b is "<<a*b;
    cout<<"\n the value of a/b is "<<a/b;
    cout<<"\n the value of a%b is "<<a%b;
    cout<<"\n the value of a++ is "<<a++;
    cout<<"\n the value of a-- is "<<a--;
    cout<<"\n the value of ++a is "<<++a;
    cout<<"\n the value of --a is "<<--a;

    cout<<endl;

    //2.Assignment operators .........>used to assign values to variables
    // int a=3, b=9;
    // char d='d';

    //3. Comparison operator
    cout<<"\n Following are the Comparison operator";
    cout<<"\n the value of a==b is"<<(a==b);
    cout<<"\n the value of a>b is"<<(a>b);
    cout<<"\n the value of a<b is"<<(a<b);
    cout<<"\n the value of a>=b is"<<(a>=b);
    cout<<"\n the value of a<=b is"<<(a<=b);
    cout<<"\n the value of a!=b is"<<(a!=b);
    cout<<endl;

    //4.Logical operator
    cout<<"\n the value of logical AND operator ((a==b)&&(a<b))is:"<<((a==b)&&(a<b));
    cout<<"\n the value of logical OR operator((a==b)||(a<b)):"<<((a==b)||(a<b));
    cout<<"\n the value of logical NOT operator(!(a==b)):"<<(!(a==b));
    cout<<endl;
    
    //5.Bitwise operator

return 0;
}