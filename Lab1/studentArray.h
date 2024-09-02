#ifndef STUDENTARRAY_HPP_
#define STUDENTARRAY_HPP_
#include "roster.h"

using namespace std;

class studentArray{
private:
  Student* array;
  int size;
  int MAX_CAPACITY = 100;
public:
  studentArray();
  studentArray(const Student*);
  ~studentArray();
  void addStudent(const Student&); // acts as insert
  void dropStudent(Student&); // acts as remove
  void updateStudent(int, const string&, const string&); // acts as replace at
  void selectionsort(); // chosen sorting algo due to size of roster
  void selectionsort(Student*); // overloaded operator in case array has to be sent over as parameter
};

#endif