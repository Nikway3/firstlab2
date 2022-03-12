#include "files.h"

#include <iostream>

namespace funct {
    void point(int& x, int& y)
    {
        x += y;
    }
    void point(int* x, int* y)
    {
        *x = *x + *y;
    }
    void point2 (double &b, double &a)
    {
        b = a - (int)a;
    }
    void point3_1 (std::complex<double> *q1)
    {
        double Re = abs(*q1);
        double Im = (-1) * arg (*q1);
        *q1 = std::complex<double>(Re, Im);
    }
    void point3_2 (std::complex<double> &w1)
    {
        double Re = abs (w1);
        double Im = (-1) * arg (w1);
        w1 = std::complex<double>(Re, Im);
    }
void point4 (class square)
{
    funct::square firstSquare{};
    int zx;
    firstSquare.size = zx;
    firstSquare.xcord = (sqrt(firstSquare.size)/2);
    firstSquare.ycord = (sqrt(firstSquare.size)/2);
    int xm = 10;
    int yl = 10;
    firstSquare.size = zx;
    firstSquare.xcord = (sqrt(firstSquare.size)/2) + xm;
    firstSquare.ycord = (sqrt(firstSquare.size)/2) + yl;
}
}
