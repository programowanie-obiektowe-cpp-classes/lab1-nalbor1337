#include <iostream>
#include <cmath>

using namespace std;

class Wektor2D
{
    Wektor2D() 
    {
        x = 0;
        y = 0;
        cout << "Wspolrzedne utworzonego wektora to: [" <<x << ", " << y << "]" << "\n";
    }
      Wektor2D(double X, double Y) 
    {
        x = X;
        y = Y;
        cout << "Wspolrzedne utworzonego wektora to: [" <<x << ", " << y << "]" << "\n";
    }

    ~Wektor2D() 
    {
        cout << "Wspolrzedne niszczonego wektora to: [" <<x << ", " << y << "]" << "\n";
    }

    void setX(double X)
    {
        x = X;
    }

    void setY(double Y)
    {
        y = Y;
    }

    double getX()
    {
        return x;
    }

    double getY()
    {
        return y;
    }

    private: 
        double x, y;
};

Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
    return Wektor2D{w1.getX() + w2.getX(), w1.getY() + w2.getY()};
}

double operator*(Wektor2D w1, Wektor2D w2)
{
    return (w1.getX() * w2.getX()) + (w1.getY() * w2.getY());
}
