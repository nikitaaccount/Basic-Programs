// In this we explicitly create copy constructor so that pointer of new object points to 
// new memory location and not to the location where earlier object pointer points to

#include<iostream>
using namespace std;

class Point
{ 
  private:
  	    double _x, _y, _z;
  	    
  public:
  	    Point(double a=0, double b=0, double c=0)
  	    {
  	    	_x = a;
  	    	_y = b;
  	    	_z = c;
		}
//  	    ~Point();
//  	    double getX() const;
//  	    double getY() const;
//	    double getZ() const;
//	    void setPoint(double ,double,double);
	   
};

class PointVector
{
	private:
		int size;
		Point *p;
		
	public:
		PointVector(int num =5)
		{
			size = num;
			p = new Point;
		}
		~PointVector()
		{
			delete p;
		}
     	PointVector(const PointVector &obj) // copy constructor
		{
			size = obj.size;
			p=new Point;
			*p = *(obj.p);
		}
		PointVector& operator=(const PointVector &obj)
		{
			size = obj.size;
			if(this != &obj)
			    *p = *(obj.p); 
			return *this;
		}	
		void inputVector();
		
		void printVector()
		{
			cout<<size<" "<<*p.Point(_x)<<"\n";
		}
};

int main()
{
	PointVector o1;
	PointVector o2=o1;
	o2.printVector();
	PointVector o3;
	o3=o1;
	o2.printVector();
    return 0;	
}
