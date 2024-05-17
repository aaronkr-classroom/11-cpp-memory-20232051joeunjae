#pragma once
#ifndef GRADE_H
#define GRADE_H

#include <list>
#include <vector>
#include "median.h"
#include "Student_info.h"

bool fgrade(const Student_info&);
bool pgrade(const Student_info&);

double grade(double, double, double );
double grade(double, double, vector<double>&);
double grade(const Student_info& );

list<Student_info>extract_fails(list<Student_info>&);
#endif 