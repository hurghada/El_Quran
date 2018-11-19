#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main ()
{
    int * A1; A1 = new int; 
    A1=10;
    //A2=20;
    int * identifiers[2]; 
    identifiers[0]=A1; 
    identifiers[1]="A2"; 
    cout<<identifiers[0]<<identifiers[1]<<endl;
system("pause");
return 0;
}
//wrong 
//string s=a; string s=string(a); 9 es.cpp invalid conversion from `int' to `const char*' 
//string s=s+a; 10 es.cpp no match for 'operator+' in 's + a' 
//string s+=a; 10 es.cpp expected primary-expression before "s"//10 es.cpp expected `;' before "s" //12 es.cpp `s' undeclared (first use this function) 
//declares must come first
//string s=""; s=s+a; 10 es.cpp no match for 'operator+' in 's + a' 
//string s=""; s=s+string(a); 10 es.cpp invalid conversion from `int' to `const char*' 
//string s = a; 10 es.cpp invalid conversion from `int' to `const char*' 
//string s = ""; s=s+a; 9 es.cpp no match for 'operator+' in 's + a' 
//int c = int (s); 10 es.cpp `struct std::string' used where a `int' was expected 
//string s=""; s = 65; s+=50; //s=A2
//int A1=33, A2=22222; int a = A1[1]; //char to int 11 es.cpp invalid types `int[int]' for array subscript 
//string a1; cout<<a1[1]<<endl; quick disappearance
//string identifiers[2]; identifiers[0]=A1; identifiers[1]=A2; this puts the values -ascii- the identifiers hold in the array.
//string identifiers[2]; identifiers[0]="A1"; identifiers[1]="A2"; this puts the names of the identifiers themselves in the array.
//notes
//when u assign an int to a string like s = a...it convert this int value implicitly to the equivilent char value.
//a=48; s=a; cout<<s; means number 0; //ascii
//simple or types declarations comes apart.
//can't convert string to int
// can i convert a string to an identifier ? 
//the only way is to write the names of the identifiers in an array of strings.
//now we need to get the value which the identifier holds. 
//yes u can do an array of size 2 of type pointers to addresses holding strings. 
//can u get the address of an int directly. 
