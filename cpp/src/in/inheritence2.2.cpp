#include<iostream>
using namespace std;
class A{};
class Shape: public A{
  string name = "shape";
  string color = "shape";

protected:

  int test = 1;
public:
  int Area(void){return 0;}
  Shape() = default;
  friend ostream& operator <<(ostream& o1, const Shape& s1){
    o1 << "name: " << s1.name << "\tcolor: " << s1.color;
    return o1;
  }
};
class Square: public Shape{
  int d = 1;
public:
  int Area(void){test = 2; Shape::Area(); return d*d;}
  Square(int d){this->d=d;}
  int testValue(void){return test;}
  Square() = default;
  friend ostream& operator <<(ostream& o1, const Square& s1){
    o1 << Shape(s1) << "\tside: " << s1.d;
    return o1;
  }
};
int main(){
  Shape s;
  cout << s.Area() << endl;
  Square sq(3);
  cout << sq.Area() << endl;
  Shape* ps = &s;
  cout << ps->Area() << endl;
  ps = &sq;
  cout << ps->Area() << endl;
  cout << sq.testValue() << endl;
  // cout << sq.test << endl;
  return 0;
}
