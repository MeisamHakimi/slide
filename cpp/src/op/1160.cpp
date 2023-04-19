#include <iostream>// istream
#include <cmath>
#include <cstring>
using namespace std;
class complexCls{//1140
  double r, i;
 public:
  complexCls(double m = 0, double n = 0):r(m), i(n){}
  double operator()(int index){
    if(index < 0 || index > 1)
      cout << "Index out of range" << endl;
    if(index) return r;
    return i;
  }
  bool operator()(double a, double b)
  {return r == a && i == b;}
  friend ostream& operator<<(ostream& o1, 
      const complexCls& a){
    o1 << a.r << "+i" << a.i;
    return o1;
  }
  friend istream& operator>>(istream& i1,
      complexCls& a){
    cout << "Enter real:"; i1 >> a.r;
    cout << "Enter imaginary:"; i1 >> a.i;
    return i1;
  }
  friend complexCls operator+(const complexCls& a,
      const complexCls& b){
    complexCls c;
    c.r = a.r + b.r;
    c.i = a.i + b.i;
    return c;
  }
  friend complexCls operator-(const complexCls& a,
      const complexCls& b){
    complexCls c;
    c.r = a.r - b.r;
    c.i = a.i - b.i;
    return c;
  }
  complexCls operator++(void)   // ++a
  { i++; r++; return *this;  }
  complexCls operator++(int dummy) // a++
  {complexCls result=*this; r++; i++; return result;}
  complexCls operator--(void)   // --a
  { i--; r--; return *this;  }
  complexCls operator--(int dummy) // a--
  {complexCls result=*this; r--; i--; return result;}
  friend complexCls operator*(const complexCls& a,
      const complexCls& b){
    complexCls c;
    c.r = a.r * b.r - a.i * b.i;
    c.i = a.r * b.i + a.i * b.r;
    return c;
  }
  double& operator[](int index){
    if(index < 0 || index > 1){
      cout << "index is out of range" 
        << index << endl; return r;
    }
    if(index) return i;
    return r;
  }
  double& operator[](const char* s1){
    if(! strcmp(s1, "imaginary")) return i;
    else if( strcmp(s1, "real"))
      cout << "muset be \"real\" or imaginary";
    return r;
  }
};
void f1(void){
  complexCls a(2, 3), b(2, 1), c(a);
  c = 2 + a;  cout << c << endl;
  cout << c["real"] << endl;
  cout << c["imaginary"] << endl;
  cout << c["other"] << endl;
}
int main(){f1();}/*
4+i3
4 3
1,0  */