//ejemplo de uso

#include<bits/stdc++.h>
using namespace std;

#include "Book.h"
#include "Library.cpp"

int main(){
	Book b1, b2(45, "XD", "asd", 2), b3;
	Library a;
	
	cin>>b1>>b3;
	
	a.Insert(b1);
	a.Insert(b3);
	a.Insert(4, "How to Program", "Deitel", 4);
	a.Insert(b2);
	
	a.Remove("XD", "asd");
	
	a.Show();
}
