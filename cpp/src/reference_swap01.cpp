#include<iostream>
using namespace std;
void mySwap(int& a, int& b){
  int t=a;
  a=b;
  b=t;
}
void mySwap1(int a, int b){
  int t=a;
  a=b;
  b=t;
}
void f1(void){
  int m = 2, n = 8;
  cout << "m: " << m << "\tn: " << n << endl;
  mySwap1(m, n);
  cout << "m: " << m << "\tn: " << n << endl;
  mySwap(m, n);
  cout << "m: " << m << "\tn: " << n << endl;
}
int main(){ 
 f1();
}
