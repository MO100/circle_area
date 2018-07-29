#ifndef AREA_h
#define AREA_h
class Area
{
private:
	double const PIE= 3.1415;
	double radius = 0;
	double area = 0;
public:
	void setradius(double);
	void setarea(double, double);
	double getradius() const;
	double getarea() const;
};

#endif