/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   student.cpp
 * Author: richard
 * 
 * Created on February 26, 2019, 10:30 PM
 */

#include "student.h"

void Student::setStudentID(string studentID){
    this->studentID = studentID;
}

void Student::setFirstName(string firstName){
    this->firstName = firstName;
}

void Student::setLastName(string lastName){
    this->lastName = lastName;
}

void Student::setEmail(string email){
    this->email = email;
}

void Student::setAge(int age){
    this->age = age;
}

void Student::setNumDays(int* numDays){
    this->numDays[0] = numDays[0];
    this->numDays[1] = numDays[1];
    this->numDays[2] = numDays[2];
}

void Student::setDegree(Degree degree){
    
}


string Student::getStudentID(){
    return studentID;
}

string Student::getFirstName(){
    return firstName;
}

string Student::getLastName(){
    return lastName;
}

string Student::getEmail(){
    return email;
}

int Student::getAge(){
    return age;
}

int* Student::getNumDays(){
    return numDays;
}

Student::Student(){
    
}

Student::Student(string studentID, string firstName, string lastName, string email, int age, int* numDays, Degree degree) {
    setStudentID(studentID);
    setFirstName(firstName);
    setLastName(lastName);
    setEmail(email);
    setAge(age);
    setNumDays(numDays);
    setDegree(degree);  
}

Student::Student(string studentID, string firstName, string lastName, string email, int age, int* numDays) {
    setStudentID(studentID);
    setFirstName(firstName);
    setLastName(lastName);
    setEmail(email);
    setAge(age);
    setNumDays(numDays);
}

Student::~Student() {
    
}

void Student::print(){
    
}

Degree Student::getDegreeProgram(){
//    return SOFTWARE;
}