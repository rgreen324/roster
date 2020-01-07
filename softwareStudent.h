/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   softwareStudent.h
 * Author: richard
 *
 * Created on February 26, 2019, 10:28 PM
 */

#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include "student.h"


class SoftwareStudent : public Student {
public:
    SoftwareStudent();
    SoftwareStudent(string, string, string, string, int, int*, Degree);
    void setDegree(Degree);
    void print();
    Degree getDegreeProgram();

private:
    Degree degree;   
};
#endif /* SOFTWARESTUDENT_H */
