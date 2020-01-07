/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   softwareStudent.cpp
 * Author: richard
 * 
 * Created on February 26, 2019, 10:28 PM
 */

#include "softwareStudent.h"
#include <iostream>




SoftwareStudent::SoftwareStudent(){
    degree = SOFTWARE;
}

SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string email, int age, int* numDays, Degree degree) : Student (studentID, firstName, lastName, email, age, numDays){
    this->degree = degree;
}

void SoftwareStudent::setDegree(Degree degree) {
    this->degree = degree;
}

void SoftwareStudent::print() {
    cout << getStudentID() << "\t" << "First Name: " << getFirstName() << "\t" 
            << "Last Name: " << getLastName()  << "\t" << "Age: " << getAge()  
            << "\t" << "daysInCourse: {" << getNumDays()[0] << ","<< getNumDays()[1]  
            << ","<< getNumDays()[2] << "}" << "\t" << "Degree Program: SOFTWARE" << endl;
}

Degree SoftwareStudent::getDegreeProgram(){
    return degree;
}