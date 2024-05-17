#pragma once
#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Student_info {
public://���ٰ���
    //#####������ ����###### 
    Student_info(); //�� student_info ��ü�� ����
    Student_info(istream&);//read_hw�� ���,��Ʈ���� �о� student_info��ü�� ����

    //######�ɹ� �Լ� ����##

    string getname()const { return name; }
    void setname(string n){ name = n; }//�� ������ ����

    //9.2.1/254p�ּ� ������ read �Լ�
    istream& read(std::istream&);

    bool vaild() const { return !homework.empty(); }
    //9.2.1 254p���� ������ �Ͱ� ����
    double grade() const;

private:  //����� ���� ����
    string name;
    double midterm, final;
    vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);

#endif