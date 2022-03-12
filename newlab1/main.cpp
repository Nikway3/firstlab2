#include <iostream>
#include "files.h"
#include <complex>

    int main() {
    std::cout<<"Enter numbers for the first point"<<"\n";
        int x;
        int y;
        int ll;
        int pp;
        int *py = &ll;
        int *px = &pp;
        std::cin >> ll >> pp;
        funct::point(x, y);
        funct::point(py, px);
        std::cout << *py << std::endl;
        std::cout<<"____________________________________________________________"<<"\n";
        std::cout<<"Enter numbers for the second point"<<"\n";
        double a;
        double b;
        double c;
        std::cin>>a;
        funct::point2(b , a  );
        std::cout<<a<<" "<<b<<"\n";
std::cout<<"____________________________________________________________"<<"\n";
        std::complex<double> ver1(2.0, 1.0);
        funct::point3_1(&ver1);
        std::cout<<ver1<<std::endl;
        std::complex<double> ver2 (1.0, 2.0);
        funct::point3_2 (ver2);
        std::cout<<ver2<<std::endl;
        std::cout<<"____________________________________________________________"<<"\n";
        std::cout<<"Enter the size of the square"<<"\n";
        int zx;
        funct::square firstSquare{};
        std::cin>>zx;
        funct::point4(firstSquare);
        firstSquare.size = zx;
        firstSquare.xcord = (sqrt(firstSquare.size)/2);
        firstSquare.ycord = (sqrt(firstSquare.size)/2);
        std::cout<<firstSquare.xcord<<"\n";
        std::cout<<firstSquare.ycord<<"\n";
        std::cout<<firstSquare.size<<"\n";
        std::cout<<"____________________________________________________________"<<"\n";
        int xm = 10;
        int yl = 10;
        firstSquare.size = zx;
        firstSquare.xcord = (sqrt(firstSquare.size)/2) + xm;
        firstSquare.ycord = (sqrt(firstSquare.size)/2) + yl;
        std::cout<<"Cord X for the first square ="<<firstSquare.xcord<<"\n";
        std::cout<<"Cord Y for the first square ="<<firstSquare.ycord<<"\n";
        std::cout<<"Size of the first square ="<<firstSquare.size<<"\n";
            return 0;
        }

