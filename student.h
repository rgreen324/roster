/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   student.h
 * Author: richard
 *
 * Created on February 26, 2019, 10:30 PM
 */

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h"

using namespace std;

class Student {
public:
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    int* getNumDays();
    Degree getDegree();
    
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void setNumDays(int* numDays);
    virtual void setDegree(Degree);
    
    Student();
    Student(string, string, string, string, int, int*, Degree);
    Student(string, string, string, string, int, int*);
    ~Student();
    
    virtual void print();
    virtual Degree getDegreeProgram();
    

private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int numDays[3];
    Degree degree;
};

#endif /* STUDENT_H */
