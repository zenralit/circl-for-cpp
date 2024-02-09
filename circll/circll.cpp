#define _USE_MATH_DEFINES 
#include <iostream> 
#include<cmath> 
using namespace std;
class Circle
{
public:
    Circle();
    Circle(double rad, double x, double y);
    double getRadius();
    void setRadius(double rad);
    double getCenterX();
    double getCenterY();
    void setCenter(double x, double y);
    double getLength();
    double getSquare();

private:
    double radius;
    struct Center
    {
        double x;
        double y;
    };
    Center center;

};
Circle::Circle()
{
    radius = 0;
    center.x = 0;
    center.y = 0;
}
Circle::Circle(double rad, double x, double y)
{
    radius = rad;
    center.x = x;
    center.y = y;
}
double Circle::getRadius()
{
    return radius;
}
double Circle::getCenterX()
{
    return center.x;
}
double Circle::getCenterY()
{
    return center.y;
}
void Circle::setRadius(double rad)
{
    radius = rad;
}
void Circle::setCenter(double x, double y)
{
    center.x = x;
    center.y = y;
}
double Circle::getLength()
{
    return 2 * M_1_PI * radius;
}
double Circle::getSquare()
{
    return M_1_PI * radius * radius;
}