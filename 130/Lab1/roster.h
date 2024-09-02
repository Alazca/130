#ifndef ROSTER_H_
#define ROSTER_H_
#include <iostream>

using namespace std;

class Student {
private:
  string firstName;
  string lastName;
  int id;
  string status;

public:
  Student();
  ~Student();
  Student(string);
  Student(string, string);
  string getFirst() const;
  string getLast() const;
  int getId() const;
  string getStatus() const;
  void setFirst(string &);
  void setLast(string &);
  void setId(int &);
  void setStatus(string &);
  friend ostream &operator<<(ostream &, string);
  friend ostream &operator<<(ostream &, int);
};

#endif
