#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
bool extractIntFromStr(char **str,int&a){
  for(;**str==' '||**str=='\t';(*str)++);
  a=0;
  if(!**str || **str == '\n') return false;
  for(;**str && !(**str ==' '|| **str == '\t'||**str == '\n'); (*str)++){
    a = a*10 +**str-48;
  }
  return true;
}
class myIntArray{ int **a; 
 fstream f1;int n,m;
 public:
  myIntArray(const char*fileName="input2.txt"){
    int i,b,j,k; char str[3000];char *p;
    f1.open(fileName); 
    if(!f1){cout<<"file ";exit(0);}
    for(i=0,j=0;f1.getline(str,3000-1);i++)
    {
      for(p=str,k=0; extractIntFromStr(&p,b);k++);
      if(i==0) m=k;
      else if(m!=k){cout<<"m!=k"<<endl;}
    }
    n=i;
    cout<<m<<"  "<<n<<endl;
    f1.close(); 
    a = new int*[n=i];
    for(i=0;i<n;i++)
      a[i]=new int[m];
    //f1.seekg(0,ios::beg);
    f1.open(fileName);
    for(i=0,j=0;f1.getline(str,3000-1);i++)
    {
      for(p=str,k=0;
	   extractIntFromStr(&p,b);k++)
	  *(*(a+i)+k)=b;
    }

    f1.close();
  }/*
  ~myIntArray(){delete[] a;}
  void sort(void){
    int i,j;
    for(i=0;i<n-1;i++)
      for(j=i+1;j<n;j++)
        if(a[i]>a[j]){int temp = a[i]; a[i]=a[j]; a[j]=temp;}
  }
  int search(int key){
    for(int i=0;i<n;i++) if(a[i]==key) return i;
    return -1;
  }*/
  void print(void){
    for(int i=0; i<n; i++){
      cout<<endl;
      for(int j=0;j<m;j++)
      cout<<*(a[i]+j)<<"  ";
    }
    cout<<endl;
  }
};
int main(){
  myIntArray m1("input2.txt");
  //m1.sort();cout<<m1.search(12)<<endl;
  m1.print();
  return 0;
}
