#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <algorithm>

#include "Student_info.h"
#include "grade.h"
#include "median.h"

using namespace std;

string letter_grade(double grade) {
	//각 범위를 구분하는 함수
	static const double numbers[] = {
		97, 94, 90,  87, 84, 80, 77,74, 70, 60, 0
	};
	//문자등급의 명칭 
	static const char* const letters[]{
		"a+", "a", "a-","b+","b","b-","c+","c","c-","d","f"
	};
	//배열 크기와 요소 하나의 크기를 사용하여 각 범위를 구분하는 점수 개수르르 구함
	
	static const size_t ngrades =
		sizeof(numbers) / sizeof(*numbers);
	//주어진 최종 점수에 해당하는 문자 등급을 찾아서 반환
	for (size_t i = 0; i < ngrades; i++) {
		if (grade >= numbers[i])
			return letters[i];

	}

	return"?\ ?\ ?";
}

int main() {
	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen = 0;

	//학생 이름과 모든 점수를 읽어 저장하기 
	while(read(Student_info, record)) {
		maxlen = max(maxlen, record.name.size());
		students.push_back(record);

	}
	//학생기록 정렬
	sort(students.begin(), studnet.end(), compare);
	//이름과 점수를 쓰기 
	for (vector<Student_info>::size_type i = 0; i != students.size(); i++) {
		cout << students[i].name()
			<< string(maxlen + 1 - students[i].name.size(), ' ');
	}
	try {
		double final_grade = students[i].grade();
		cout << setprecision(3) << letter_grade(fanal_grade)
			<< setprecision(prec) << endl;
		
	}
	catch (domain_error e) {
		cout << e.what() << endl;
	}
	return 0;
}