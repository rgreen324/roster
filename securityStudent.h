/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   securityStudent.h
 * Author: richard
 *
 * Created on February 26, 2019, 10:29 PM
 */

#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "student.h"
#include <iostream>


class SecurityStudent : public Student {
public:
    SecurityStudent();
    SecurityStudent(string, string, string, string, int, int*, Degree);
    void setDegree(Degree);
    void print();
    Degree getDegreeProgram();

private:
    Degree degree;   
};

#endif /* SECURITYSTUDENT_H */
