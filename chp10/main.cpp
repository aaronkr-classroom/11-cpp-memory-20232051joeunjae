//main
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#include "Student_info.h"
#include "median.h"

using namespace std;

int main() {
	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen = 0;
	//데이터 읽고 저장
	while (record.read(cin)) {//studnet_info 맴버 함수.read()
		maxlen = max(maxlen, record.getname().size());
		students.push_back(record);

	}
	//학생 기록 정력하기
	sort(students.begin(), students.end(), compare);
	//이름과 점수 쓰기
	for (vector<Student_info>::size_type i = 0;
		i != students.size(); i++) {
		cout << students[i].getname() << string(maxlen + 1 - students[i].getname().size(), ' ');
		try {
			double final_grade = students[i].grade();
			streamsize prec = cout.precision();
			cout << setprecision(3) << final_grade
				<< setprecision(prec) << endl;
		}
		catch (domain_error e) {
			cout << e.what() << endl;
		}
	}
	return 0;
}