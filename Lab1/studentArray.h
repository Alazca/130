#ifndef STUDENTARRAY_HPP_
#define STUDENTARRAY_HPP_
#include "roster.h"

using namespace std;

class studentArray{
  studentArray();
  studentArray(const Student*);
  ~studentArray();
  void addStudent(const Student&);
  void dropStudent();
  void updateStudent(int, const string&, const string&);
  void selectionsort();
};

#endif