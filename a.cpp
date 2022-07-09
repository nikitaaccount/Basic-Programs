#include<iostream>
using namespace std;

class vector3D
{
	private:
		double x,y,z;
	public:
		vector3D();
		vector3D(double m,double n,double o);
        int operator==(vector3D v);
        vector3D operator++();                       // prefix 
        vector3D operator++(int);                   // postfix
		vector3D operator+=(vector3D a);             
        friend ostream& operator<<(ostream& os, const vector3D& o);
};

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
    os << " ["<< o.x << ", " << o.y << ", " << o.z<<" ]"<<endl;
    return os;
}

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
