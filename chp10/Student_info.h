#pragma once
#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Student_info {
public://접근가능
    //#####생성자 정의###### 
    Student_info(); //빈 student_info 객체를 생성
    Student_info(istream&);//read_hw와 비슷,스트림을 읽어 student_info객체를 생성

    //######맴버 함수 정의##

    string getname()const { return name; }
    void setname(string n){ name = n; }//안 쓰지만 예시

    //9.2.1/254p애서 정의한 read 함수
    istream& read(std::istream&);

    bool vaild() const { return !homework.empty(); }
    //9.2.1 254p에서 정의한 것과 같음
    double grade() const;

private:  //숨기고 싶은 변수
    string name;
    double midterm, final;
    vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);

#endif