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
	//�� ������ �����ϴ� �Լ�
	static const double numbers[] = {
		97, 94, 90,  87, 84, 80, 77,74, 70, 60, 0
	};
	//���ڵ���� ��Ī 
	static const char* const letters[]{
		"a+", "a", "a-","b+","b","b-","c+","c","c-","d","f"
	};
	//�迭 ũ��� ��� �ϳ��� ũ�⸦ ����Ͽ� �� ������ �����ϴ� ���� �������� ����
	
	static const size_t ngrades =
		sizeof(numbers) / sizeof(*numbers);
	//�־��� ���� ������ �ش��ϴ� ���� ����� ã�Ƽ� ��ȯ
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

	//�л� �̸��� ��� ������ �о� �����ϱ� 
	while(read(Student_info, record)) {
		maxlen = max(maxlen, record.name.size());
		students.push_back(record);

	}
	//�л���� ����
	sort(students.begin(), studnet.end(), compare);
	//�̸��� ������ ���� 
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