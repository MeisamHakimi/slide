#include<iostream>
using namespace std;
class myString;
//void mystrcpy((char *dst, const char *src)
//{for(*dst=*src;*src;src++,dst++); *dst=0;}
void mystrcpy((char *dst, const char *src);
void mystrcpy((myString & dst, const char *src);
int myStringLength(const char *s){
	if(*s) return 1+myStringLength(s+1);
	return 0;
}
class myString{
	char *st;
	void copy(const char *s){
		st=new char[myStringLength(s)+1];
		mystrcpy((st,s);
	}		
  public:
	myString(const char *s){copy(s);}
	myString(const myString&m1)
	{copy(m1.st);}		
	int len(void){return myStringLength(st);}
	void print(void){cout<<st<<endl;}
	//char get(int index);
	void set(char c='a', int index=0){
		if(index<myStringLength(st))st[index]=c;
	}
	//myString substr(int start,int end)
	~myString(){delete[]st;}
	friend void mystrcpy((myString & dst, const char *src);
	char & operator[](const int i){
		if(i<myStringLength(st)) return st[i];
		cout<<"Error :: out of range "<<endl;
		return st[0];
	}
	void operator=(myString &m){
		delete[] st;
		copy(m.st);
	}
};
myString f1(myString m1){m1.set();m1.print();return m1;}
int main(){myString s1("Ali"),s2="Reza";f1(s1);
	s1.print();s1[1]='d';s1.operator[](1)='l';s1.print();cout<<s1[1]<<endl;
	s1.operator=(s2); s1[0]='p'; s2.print();
	return 0;
}
void mystrcpy((char *dst, const char *src=""){
	*dst=*src;
	if(*src) mystrcpy((dst+1,src+1);
}
void mystrcpy((myString & dst, const char *src){
	int i=0;
	for(i=0;src[i];i++) dst.st[i]=src[i];
	dst.st[i]=src[i];
}
