#include <iostream>
#include <cmath>

int main()
{
    float lenghtA, lenghtB, lenghtC;
    char input;
    do
    {
        std::cout << "--Find the name of the Triangle!--" << std::endl;
        // Getting user input
        std::cout << "Enter lenght A: " << std::endl;
        std::cin >> lenghtA;
        std::cout << "Enter lenght B: " << std::endl;
        std::cin >> lenghtB;
        std::cout << "Enter lenght C: " << std::endl;
        std::cin >> lenghtC;
        system("cls");
        float semi_perimeter = ((lenghtA + lenghtB + lenghtC) / 2);
        float heron_formula = semi_perimeter * (semi_perimeter - lenghtA) * (semi_perimeter - lenghtB) * (semi_perimeter - lenghtC);
        float area = sqrt(heron_formula);
        // displayig output
        if (lenghtA == 0 || lenghtB == 0 || lenghtC == 0)
        {
            std::cout << "Not a triangle,try again" << std::endl;
            std::cout << "***Continue?(y/n)***";
            std::cin >> input;
        }
        else if ((lenghtA == lenghtB) && (lenghtB == lenghtC))
        {
            std::cout << "It's equilateral!" << std::endl;
            std::cout << "Area:" << " " << area << std::endl;
            std::cout << "***Continue?(y/n)***";
            std::cin >> input;
        }
        else if ((lenghtA != lenghtB) && (lenghtB != lenghtC))
        {
            std::cout << "It is scalene!" << std::endl;
            std::cout << "Area:" << " " << area << std::endl;
            std::cout << "***Continue?(y/n)***";
            std::cin >> input;
        }
        else
        {
            std::cout << "It is an iscosceles!" << std::endl;
            std::cout << "Area:" << " " << area << std::endl;
            std::cout << "***Continue?(y/n)***";
            std::cin >> input;
        }

    } while (input == 'y');
    std::cout << "Thank you for trying it out!" << std::endl;
}