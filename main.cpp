#include "vector3D.hpp"
#include <iostream>

using namespace std;

int main()
{
	vector3D c1(1.0,1.0,1.0),c2(2.0,2.0,2.0),c3;
	c3 = c1++;
	cout<<c3;
	c3 = ++c2;
	cout<<c2;
	if(c1==c2)
	   cout<<" c1 is equal to c2!"<<endl;
	else
	   cout<<" c1 is not equal to c2!"<<endl;
	c3 += c2;
	cout<<c3;
	   
}


