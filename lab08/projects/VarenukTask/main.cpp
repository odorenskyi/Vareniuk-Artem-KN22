#include <iostream>
#include "ModulesVarenuk.h"
#include <iomanip>
#include <string>


using namespace std;

void printDeveloperName(){
    std::cout << "�������� �����" << std::endl;
    }
int calculateLogicalExpressionResult(char a, char b)
    {
        return (a + 10 >= b) ? 1 : 0;
    }

void printNumberValues(int x, int y, int z)
    {
        std::cout << "�������� � � ��������� ������ ��������: " << x << std::endl;
        std::cout << "�������� � � �������������� ������ ��������: " << std::hex << x << std::endl;
        std::cout << "�������� � � ��������� ������ ��������: " << y << std::endl;
        std::cout << "�������� � � �������������� ������ ��������: " << std::hex << y << std::endl;
        std::cout << "�������� z � ��������� ������ ��������: " << z << std::endl;
        std::cout << "�������� z � �������������� ������ ��������: " << std::hex << z << std::endl;
    }

int main()
{
    double x, y, z;
    std::cout << "������ �������� x: ";
    std::cin >> x;
    std::cout << "������ �������� y: ";
    std::cin >> y;
    std::cout << "������ �������� z: ";
    std::cin >> z;
    double result = s_calculation(x, y, z);
    std::cout << "�������� S: " << result << std::endl;
    return 0;
    char a, b;
    std::cout << "������ ����� x: ";
    std::cin >> x;
    std::cout << "������ ����� y: ";
    std::cin >> y;
    std::cout << "������ ����� z: ";
    std::cin >> z;
    std::cout << "������ ������ a: ";
    std::cin >> a;
    std::cout << "������ ������ b: ";
    std::cin >> b;
    printDeveloperName();
    std::cout << "��������� �������� ������: " << calculateLogicalExpressionResult(a, b) << std::endl;
    printNumberValues(x, y, z);
    return 0;
}
