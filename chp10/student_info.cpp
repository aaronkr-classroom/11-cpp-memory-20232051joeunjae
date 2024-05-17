
#include "Student_info.h"
#include <iostream>
#include "grade.h"

using namespace std;

Student_info::Student_info() : midterm(0), final(0){ }



//cin을 읽어 student_info를 초기화

Student_info::Student_info(istream& is) { read(is);}

bool compare(const Student_info& x, const Student_info& y)
{
    return x.getname() < y.getname();
}
double Student_info::grade() const
{
    return ::grade(midterm, final, homework);
}
istream& read_hw(istream& in, vector<double>& hw)
{
    if (in) {

        hw.clear();

        double x;
        while (in >> x)
            hw.push_back(x);

        in.clear();
    }
    return in;
}
istream& Student_info::read(istream &in) {
	in >> name >> midterm >> final;
	
	read_hw(in,homework);
	return in;

}
