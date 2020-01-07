/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   networkStudent.cpp
 * Author: richard
 * 
 * Created on February 26, 2019, 10:29 PM
 */

#include "networkStudent.h"
#include <iostream>


NetworkStudent::NetworkStudent(){
    degree = NETWORK;
}

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string email, int age, int* numDays, Degree degree) : Student (studentID, firstName, lastName, email, age, numDays){
    this->degree = degree;
}
void NetworkStudent::setDegree(Degree degree) {
    this->degree = degree;
}

void NetworkStudent::print() {
    cout << getStudentID() << "\t" << "First Name: " << getFirstName() << "\t" 
            << "Last Name: " << getLastName()  << "\t" << "Age: " << getAge()  
            << "\t" << "daysInCourse: {" << getNumDays()[0] << ","<< getNumDays()[1]  
            << ","<< getNumDays()[2] << "}" << "\t" << "Degree Program: NETWORK" << endl;
}

Degree NetworkStudent::getDegreeProgram(){
    return degree;
}
