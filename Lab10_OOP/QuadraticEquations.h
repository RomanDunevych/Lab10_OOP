// QuadraticEquation.h
#pragma once
#include "Equations.h"
#include <cmath>

class QuadraticEquations : public Equations {
private:
    double a, b, c;

public:
    QuadraticEquations(double a, double b, double c) : a(a), b(b), c(c) {}

    std::vector<double> findRoots() override {
        std::vector<double> roots;
        double D = b * b - 4 * a * c;

        if (D >= 0) {
            roots.push_back((-b + std::sqrt(D)) / (2 * a));
            roots.push_back((-b - std::sqrt(D)) / (2 * a));
        }
        return roots;
    }
};
