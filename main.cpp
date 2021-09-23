#include <iostream>

using namespace std;

class Shape
{
public:
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
protected:
    int width;
    int height;
};
class Triangle: public Shape
{
public:
    int getArea()
    {
        return (width*height)/2;
    }
};

int main()
{
    Triangle Tri;
    Tri.setWidth(5);
    Tri.setHeight(7);

    cout << "Total Triangle area: " << Tri.getArea() << endl;

    return 0;
}