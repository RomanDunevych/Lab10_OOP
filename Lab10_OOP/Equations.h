#pragma once
#include <vector>

class Equations {
public:
    virtual ~Equations() = default;
    virtual std::vector<double> findRoots() = 0;
};
