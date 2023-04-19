#include <iostream>
using namespace std;
struct myArray{ // 100640
  static const int MAX = 100;
  double a[MAX];
  int n;
  void set(const int index, const double value){
    if( index >= 0 && index < n ) a[index] = value;
    cout << "Error accessing myArray " << endl;
  }
  myArray(const double *ma = nullptr, int k = 0){
    if( k > MAX ) 
      k = MAX ;
    for(n = k--; k >= 0; k--)
      a[k] = ma[k];
  }
  void print(void){
    cout << " n = " << n << endl;
    for(int i = 0; i < n; i++)
      cout << "a[" << i << "] = " << a[i] << endl;
  }
};
void f1(void);
int main(){
  f1();
  return 0;
}
void f1(void){
  double x[]{10, 12, 34, 54};
  myArray d(x, sizeof(x) / sizeof(double));
  d.set(300, 500);
  d.print();
}
