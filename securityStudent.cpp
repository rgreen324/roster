/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   securityStudent.cpp
 * Author: richard
 * 
 * Created on February 26, 2019, 10:29 PM
 */

#include "securityStudent.h"




SecurityStudent::SecurityStudent(){
    degree = SECURITY;
}

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string email, int age, int* numDays, Degree degree) : Student (studentID, firstName, lastName, email, age, numDays){
    this->degree = degree;
}

void SecurityStudent::setDegree(Degree degree) {
    this->degree = degree;
}

void SecurityStudent::print() {
    cout << getStudentID() << "\t" << "First Name: " << getFirstName() << "\t" 
            << "Last Name: " << getLastName()  << "\t" << "Age: " << getAge()  
            << "\t" << "daysInCourse: {" << getNumDays()[0] << ","<< getNumDays()[1]  
            << ","<< getNumDays()[2] << "}" << "\t" << "Degree Program: SECURITY" << endl;
}

Degree SecurityStudent::getDegreeProgram(){
    return degree;
}