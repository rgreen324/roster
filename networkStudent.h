/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   networkStudent.h
 * Author: richard
 *
 * Created on February 26, 2019, 10:29 PM
 */

#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

#include "student.h"

class NetworkStudent : public Student {
public:
    NetworkStudent();
    NetworkStudent(string, string, string, string, int, int*, Degree);
    Degree getDegreeProgram();
    void print();
    void setDegree(Degree);

private:
    Degree degree;   
};

#endif /* NETWORKSTUDENT_H */
