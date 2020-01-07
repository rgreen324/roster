/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   roster.h
 * Author: richard
 *
 * Created on February 26, 2019, 10:27 PM
 */

#ifndef ROSTER_H
#define ROSTER_H
#include "student.h"

using namespace std;

class Roster {
public:
    
    Roster();
    ~Roster();
    void parseStudentData();
    void add(string, string, string, string, int, int, int, int, Degree);
    Student* classRosterArray[5];
    void populateRosterArray();
    void remove(string);
    void printAll();
    void printAverageDaysInCourse(string);
    void printInvalidEmails();
    void printByDegreeProgram(Degree);

private:
    string parsedStudentData[5][9];
    
};

#endif /* ROSTER_H */

