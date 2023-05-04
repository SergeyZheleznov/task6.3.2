#pragma once
#include <iostream>
#include "class_figure.h"
#include "class_triangle.h"

class Quadrangle : public Triangle
{
public:
    int length_side_d;
    int value_angle_D;

    Quadrangle();
    Quadrangle(int length_side_d, int value_angle_D);

    int get_lenght_side_d();
    int get_value_angle_D();
    bool check();
    void print_info();
};