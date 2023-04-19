#include<iostream>
using namespace std;

class complexCls{
  double r = 0 ,i = 0;
public:
  complexCls(double m, double n=0)
  {r = m; i = n;}
  complexCls() = default;
  friend complexCls operator +(const complexCls& a,const complexCls& b){
    complexCls result;
    result.r = a.r + b.r;
    result.i = a.i + b.i;
    return result;
  }

  friend complexCls operator -(const complexCls& a,const complexCls& b){
    complexCls result;
    result.r = a.r - b.r;
    result.i = a.i - b.i;
    return result;
  }

  friend complexCls operator *(const complexCls& a,const complexCls& b){
    complexCls result;
    result.r = a.r * b.r;
    result.i = a.i * b.i;
    return result;
  }

  friend bool operator==(const complexCls& a,const complexCls& b)
  {return a.r==b.r && a.i==b.i;}

  friend ostream& operator<<(ostream& o1, complexCls& a)
  {o1<<'('<<a.r<<" , "<< a.i << ')' ; return o1;}
};

class myArray{
  string a[300];
  int n = 0;
  complexCls s[300];
public:
  myArray() = default;

  string& operator[](const complexCls& m1){
    int i;
    for(i=0; i<n; i++)
      if(s[i] == m1 )
        return a[i];
    s[n]=m1;
    return a[n++];
  }
};

int main(){
  myArray m1;
  complexCls b1=3;
  m1[b1]="b1";
  m1[complexCls(3, 1)] = "ali";
  m1[complexCls(4, 3)] = "reza";
  m1[complexCls(5, 7)] = "kamran";
  cout << m1[b1] << endl;
  cout << m1[complexCls(5, 7)] << endl;
  return 0;
}
