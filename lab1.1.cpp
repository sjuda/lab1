#include <math.h>
#include <iostream>
#include <stdio.h>
#include <tchar.h>

int main() {
std::cout << "3.14" << std::endl;
std::cout << "1 13 49" << std::endl;
std::cout << "1x13x49" << std::endl;
{
int u = 2;
int b = 3;
int c = 4;
std::cout << u << " " << b << " " << c << std::endl;
}
{
/*
std::cout << "Enter value: " << std::endl;
double a;
std::cin >> a;
*/
    }
    {
    double x;
        double y;
       double a;
    std::cout << "Enter a:  " << std::endl;
        std::cin >> a;
        x = 12 * a * a + 7 * a - 12;
        y = 3 * x * x * x + 4 * x * x - 11 * x + 1;
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
    }
    {
        double mass;
        std::cout << "Enter mass: " << std::endl;
        std::cin >> mass;
        double o;
        std::cout << "Enter objom: " << std::endl;
        std::cin >> o;
       double ro;
        ro = mass / o;
        std::cout << "Plotnost' = " << ro << std::endl;
    }
    {
        double a;
        double b;
        double x;
        std::cout << "a = " << std::endl;
        std::cin >> a;
        std::cout << "b = " << std::endl;
        std::cin >> b;
        if (a != 0) {
            x = (-b) / a;
            std::cout << "x = " << x << std::endl;
        }
        else
        {
            std::cout << "Error: a = 0" << std::endl;
        }
    }
    {
        double x1;
        std::cout << "Enter x1: " << std::endl;
        std::cin >> x1;
        double x2;
        std::cout << "Enter x2: " << std::endl;
        std::cin >> x2;
        double y1;
        std::cout << "Enter y1: " << std::endl;
       std::cin >> y1;
        double y2;
        std::cout << "Enter y2: " << std::endl;
        std::cin >> y2;
        double dist;
        dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        std::cout << "Distance is " << dist << std::endl;
    }
    {
        double m;
        std::cout << "Enter m: " << std::endl;
        std::cin >> m;
        double n;
        std::cout << "Enter n: " << std::endl;
        std::cin >> n;
        double h;
        std::cout << "Enter h: " << std::endl;
        std::cin >> h;
        double p;
        p = 2 * (sqrt(pow(((m - n) / 2), 2) + h * h)) + m + n;
        std::cout << "Perimiter is: " << p << std::endl;
    }
    {
        double r;
        std::cout << "Enter r: " << std::endl;
        std::cin >> r;
        double R;
       std::cout << "Enter R: " << std::endl;
        std::cin >> R;
        double S;
        double s1;
        s1 = 2 * 3.14 * r;
        double s2;
        s2 = 2 * 3.14 * R;
        S = s2 - s1;
        std::cout << "Ploschad' is: " << S << std::endl;
    }
    {
        double l;
        std::cout << "Enter dlinu rebra kuba: " << std::endl;
        std::cin >> l;
        double s;
        s = l * l;
        std::cout << "Ploschyad' storony kuba = " << s << std::endl;
        double v;
        v = l * l * l;
        std::cout << "Ob'yom kuba = " << v << std::endl;
    }
    {
        double l;
        double p;
        std::cout << "Dlina storony kvadrata is: " << std::endl;
        std::cin >> l;
        p = 4 * l;
        std::cout << "Perimeter kvadrata = " << p << std::endl;
    }
    {
        double r;
        double d;
        std::cout << "Radius okruzhnosti is:  " << std::endl;
        std::cin >> r;
        d = 2 * r;
        std::cout << "Diameter is: " << d << std::endl;
    }
    return 0;
}
