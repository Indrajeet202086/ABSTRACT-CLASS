#include<iostream>
using namespace std;
 
 class shape
 {
     public:
     virtual void side () = 0;
 };
 class Tringle: public shape
 {
     public:
     void side()
      
      {
          cout<< "side of tringle is three"<<endl;
      }
 };
 class hexagon: public shape
 {
     public:
     void side()
     {
         cout<< "side of hexagon is six"<<endl;
     }
 };
 class Trapezoid: public shape 
 {
     
     public:
     void side()
     {
         cout << "side of trapezoid is four"<<endl;
     }
 };
 
 int main()
 {
     
     Tringle e1;
     hexagon e2;
     Trapezoid e3;
     
     e1.side();
     e2.side();
     e3.side();
     
     return 0;
 }