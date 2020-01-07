/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   roster.cpp
 * Author: richard
 *
 * Created on February 26, 2019, 10:26 PM
 */


#include <iostream>
#include <string>
#include "roster.h"
#include "securityStudent.h"
#include "networkStudent.h"
#include "softwareStudent.h"
#include "degree.h"
#include "student.h"


using namespace std;

/*
 * 
 */

int numStudents = 5;

Roster::Roster(){
    Student* classRosterArray[5];
    string parsedStudentData[5][9];
}

Roster::~Roster(){
    for (int i = 0; i < numStudents; ++i) {
        if (classRosterArray[i] != nullptr) {
            delete classRosterArray[i];
            classRosterArray[i] = nullptr;
        }
    }
}


const string studentData[] =
{"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Richard,Green,rgre142@wgu.edu,35,10,20,30,SOFTWARE"};


void Roster::parseStudentData(){
    string buffer;
    int token;

    for (int i = 0; i < numStudents; ++i) {
        buffer = studentData[i];

        for (int j = 0; j <= 8 ; ++j) {
            if (j < 8){
                token = buffer.find(',');
                parsedStudentData[i][j] = buffer.substr(0,token);
                buffer.erase(0,token+1);
            }
            else {
                parsedStudentData[i][j] = buffer;
                buffer.erase();
            }
        }
    }
}




void Roster::populateRosterArray() {    
    Degree degree;
    for (int i = 0; i < numStudents; ++i) {
        if (parsedStudentData[i][8] == "NETWORK"){
            classRosterArray[i] = new NetworkStudent;
            degree = NETWORK;
        }
        if (parsedStudentData[i][8] == "SECURITY"){
            classRosterArray[i] = new SecurityStudent;
            degree = SECURITY;
        }
        if (parsedStudentData[i][8] == "SOFTWARE"){
            classRosterArray[i] = new SoftwareStudent;
            degree = SOFTWARE;
        }
        string ID = parsedStudentData[i][0];
        string firstName = parsedStudentData[i][1];
        string lastName = parsedStudentData[i][2];
        string emailAddress = parsedStudentData[i][3];
        int age = stoi(parsedStudentData[i][4]);
        int days1 = stoi(parsedStudentData[i][5]);
        int days2 = stoi(parsedStudentData[i][6]);
        int days3 = stoi(parsedStudentData[i][7]);

        add(ID, firstName, lastName, emailAddress, age, days1, days2, days3, degree);
    }
}



void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree){
    int rosterIndex = stoi(studentID.substr(1)) - 1;
    int daysInCourse[3] = {daysInCourse1, daysInCourse2, daysInCourse3};
    classRosterArray[rosterIndex]->setStudentID(studentID);
    classRosterArray[rosterIndex]->setFirstName(firstName);
    classRosterArray[rosterIndex]->setLastName(lastName);
    classRosterArray[rosterIndex]->setEmail(emailAddress);
    classRosterArray[rosterIndex]->setAge(age);
    classRosterArray[rosterIndex]->setNumDays(daysInCourse);
    if (degree == 0){
        classRosterArray[rosterIndex]->setDegree(SECURITY);
    }
    if (degree == 1){
        classRosterArray[rosterIndex]->setDegree(NETWORK);
    }
    if (degree == 2){
        classRosterArray[rosterIndex]->setDegree(SOFTWARE);
    }
    
}



void Roster::remove(string ID){
    bool removed = false;
    for (int i = 0; i < numStudents; ++i) {
       if (classRosterArray[i] != nullptr && ID == classRosterArray[i]->getStudentID()) {
           delete classRosterArray[i];
           classRosterArray[i] = nullptr;
           removed = true;
           cout << "Student " << ID << " was successfully removed." << endl;
       }
    }
    if (removed == false) {
        cout << "Error: Student " << ID << " was not found. Please try again." << endl;
    }
}

void Roster::printAll(){
    for (int i = 0; i < numStudents; ++i) {
        classRosterArray[i]->print();
    }
}

void Roster::printAverageDaysInCourse(string studentID) {
    int studentIndex;
    for (int i = 0; i < numStudents; ++i) {
        if (studentID == classRosterArray[i]->getStudentID()) {
            studentIndex = i;
        }
    }
    int day1 = classRosterArray[studentIndex]->getNumDays()[0];
    int day2 = classRosterArray[studentIndex]->getNumDays()[1];
    int day3 = classRosterArray[studentIndex]->getNumDays()[2];
    int avgDays = (day1 + day2 + day3) / 3;
    cout << "Average days in course for Student " << studentID << ": " << avgDays << endl;
}

void Roster::printInvalidEmails() {
    for (int i = 0; i < numStudents; ++i) {
        string email = classRosterArray[i]->getEmail();
        bool valid = true;
        while (valid) {
            if (email.find("@") == string::npos) {
                valid = false;
            }
            if (email.find(".") == string::npos) {
                valid = false;
            }
            if (email.find(" ") != string::npos) {
                valid = false;
            }
            break;
        }
        if (!valid){
            cout << "Invalid email: " << email << endl;
        }
    }
}

void Roster::printByDegreeProgram(Degree degree) {
    for (int i = 0; i < numStudents; ++i) {
        if (degree == classRosterArray[i]->getDegreeProgram()) {
            classRosterArray[i]->print();
        }
    }
}



int main() {
    cout << "Scripting and Programming - Applications – C867" << endl;
    cout << "C++" << endl;
    cout << "Student ID:#000986762" << endl;
    cout << "Richard Green" << endl;

    
    Roster classRoster;

    classRoster.parseStudentData();
    classRoster.populateRosterArray();
    classRoster.printAll();
    
    for (int i = 0; i < numStudents; ++i) {
        string ID = classRoster.classRosterArray[i]->getStudentID();
        classRoster.printAverageDaysInCourse(ID);
    }
    
    classRoster.printInvalidEmails();
    classRoster.printByDegreeProgram(SOFTWARE);
    
    classRoster.remove("A3");
    classRoster.remove("A3");
    
    classRoster.~Roster();

    return 0;
}

