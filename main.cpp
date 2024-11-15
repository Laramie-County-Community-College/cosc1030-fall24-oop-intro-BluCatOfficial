#include <iostream>
#include <iomanip>
#include "Triangle.h"

int main() {
    Triangle triangle1, triangle2;
    double base1, height1, base2, height2;

    //Now lets read input for triangle1 and triangle2
    std::cin >> base1 >> height1;
    std::cin >> base2 >> height2;

    //Set base and height for each triangle
    triangle1.setBase(base1);
    triangle1.setHeight(height1);
    triangle2.setBase(base2);
    triangle2.setHeight(height2);

    // Calculate areas of each triangle
    double area1 = triangle1.getArea();
    double area2 = triangle2.getArea();

    // Lets determine and output the triangle with the smaller area
    std::cout << "Triangle with smaller area:" << std::endl;

    if (area1 < area2) {
        std::cout << "Base: " << std::fixed << std::setprecision(2) << triangle1.getBase() << std::endl;
        std::cout << "Height: " << std::fixed << std::setprecision(2) << triangle.getHeight() << std::endl;
        std::cout << "Area: " << std::fixed << std::setprecision(2) << area1 << std::endl;
    } else {
        std::cout << "Base: " << std::fixed << std::setprecision(2) << triangle2.getBase() << std::endl;
        std::cout << "Height: " << std::fixed << std::setprecision(2) << triangle2.getHeight() << std::endl;
        std::cout << "Area: " << std::fixed <<std::setprecision(2) << area2 << std::endl;
    }

    return 0;
}