#include <iostream>
#include <vector>
#include "LinearEquations.h"
#include "QuadraticEquations.h"
#include <typeinfo>

int main() {
    setlocale(LC_ALL, "UKR");
    std::vector<Equations*> equations;
    equations.push_back(new LinearEquations(2, -4)); // ˳���� ������� 2x - 4 = 0
    equations.push_back(new QuadraticEquations(1, -3, 2)); // ��������� ������� x^2 - 3x + 2 = 0

    for (Equations* eq : equations) {
        std::cout << "��� �i������: " << typeid(*eq).name() << std::endl;
        std::vector<double> roots = eq->findRoots();

        if (roots.empty()) {
            std::cout << "�����i� ���� (���� �i����� �������i�)." << std::endl;
        }
        else {
            std::cout << "�����i: ";
            for (double root : roots) {
                std::cout << root << " ";
            }
            std::cout << std::endl;
        }
    }

    for (Equations* eq : equations) {
        delete eq;
    }

    return 0;
}
