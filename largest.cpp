#include <iostream>
using namespace std;

class set
 {
     int a,b;

    public:
     void input(void);
     void display(void);
     int largest(void);
 };
int set :: largest(void)
 {
     if(a>b)
      return a;
     else
      return b;
 }
 void set :: input(void)
 {
     cout<<"\nEnter two numbers :";
     cin>>a>>b;
 }
 void set :: display(void)
 {
     cout<<"\nLargest number is : "<<largest();
 }
 int main()
 {
     set a;
     
     a.input();
     a.display();
     return 0;
 }