#include "roster.h"

Student::Student() {
  firstName = "";
  lastName = "";
  id = 0;
  status = "";
}

string Student::getFirst() const { 
  return firstName; 
}

string Student::getLast() const { 
  return lastName; 
}
int Student::getId() const { 
  return id; 
}

string Student::getStatus() const { 
  return status; 
}

void Student::setFirst(string &firstName) { 
  this->firstName = firstName; 
}

void Student::setLast(string &lastName) { 
  this->lastName = lastName; 
}

void Student::setId(int &id) { 
  this->id = id; 
}

void Student::setStatus(string &status) { 
  this->status = status; 
}
