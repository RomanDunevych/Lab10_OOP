#pragma once
#include "Equations.h"

class LinearEquations : public Equations {
private:
    double a, b;

public:
    LinearEquations(double a, double b) : a(a), b(b) {}

    std::vector<double> findRoots() override {
        std::vector<double> roots;
        if (a != 0) {
            roots.push_back(-b / a);
        }
        return roots;
    }
};
