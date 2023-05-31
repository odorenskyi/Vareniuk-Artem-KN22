#include <iostream>
#include "ModulesVarenuk.h"
#include <iomanip>
#include <string>


using namespace std;

void printDeveloperName(){
    std::cout << "©¬аренюк јртем" << std::endl;
    }
int calculateLogicalExpressionResult(char a, char b)
    {
        return (a + 10 >= b) ? 1 : 0;
    }

void printNumberValues(int x, int y, int z)
    {
        std::cout << "«наченн€ х в дес€тков≥й систем≥ численн€: " << x << std::endl;
        std::cout << "«наченн€ х в ш≥стнадц€тков≥й систем≥ численн€: " << std::hex << x << std::endl;
        std::cout << "«наченн€ у в дес€тков≥й систем≥ численн€: " << y << std::endl;
        std::cout << "«наченн€ у в ш≥стнадц€тков≥й систем≥ численн€: " << std::hex << y << std::endl;
        std::cout << "«наченн€ z в дес€тков≥й систем≥ численн€: " << z << std::endl;
        std::cout << "«наченн€ z в ш≥стнадц€тков≥й систем≥ численн€: " << std::hex << z << std::endl;
    }

int main()
{
    double x, y, z;
    std::cout << "¬вед≥ть значенн€ x: ";
    std::cin >> x;
    std::cout << "¬вед≥ть значенн€ y: ";
    std::cin >> y;
    std::cout << "¬вед≥ть значенн€ z: ";
    std::cin >> z;
    double result = s_calculation(x, y, z);
    std::cout << "«наченн€ S: " << result << std::endl;
    return 0;
    char a, b;
    std::cout << "¬вед≥ть число x: ";
    std::cin >> x;
    std::cout << "¬вед≥ть число y: ";
    std::cin >> y;
    std::cout << "¬вед≥ть число z: ";
    std::cin >> z;
    std::cout << "¬вед≥ть символ a: ";
    std::cin >> a;
    std::cout << "¬вед≥ть символ b: ";
    std::cin >> b;
    printDeveloperName();
    std::cout << "–езультат лог≥чного виразу: " << calculateLogicalExpressionResult(a, b) << std::endl;
    printNumberValues(x, y, z);
    return 0;
}
