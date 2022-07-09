#include "vector3D.hpp"

#include<iostream>
using namespace std;

vector3D::vector3D()               // default constructor
{
	x=0.0;
	y=0.0;
	z=0.0;	
}
vector3D::vector3D(double m,double n,double o)      // parametrized constructor
{
	x = m;
	y = n;
	z = o;
}

int vector3D::operator==(vector3D v)
{
    if((x==v.x)&&(y==v.y)&&(z==v.z))
       return 1;
    else 
       return 0;
}

vector3D vector3D::operator++()
{
    ++x;
    ++y;
	++z;
    return *this;    // incremented value 
}

vector3D vector3D::operator++(int)
{
    vector3D temp = *this;
    ++x;
    ++y;
    ++z;
    return temp;  //  unincremented value
}

vector3D vector3D::operator+=(vector3D a)
{
	x = x + a.x;
	y = y + a.y;
	z = z + a.z;
	return *this;
}

ostream& operator<<(ostream& os, const vector3D& o)
{
    os << " ["<< o.x << ", " << o.y << ", " << o.z<<" ]";
    return os;
}


