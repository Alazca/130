#include "studentArray.h"

using namespace std;

studentArray::studentArray(){};
studentArray::~studentArray(){};

void studentArray::addStudent(const Student& newStudent){
    int index = 0;
    if (index < 0 || index >= size) {
    throw out_of_range("Out of range Insertion!");
}
    if (size > MAX_CAPACITY) {
    throw out_of_range("At capacity, can not insert");
}
    for (int i = size; i > index; i--) {
    array[i] = array[i - 1];
  }
  size++;

};

void studentArray::dropStudent(const Student& droppedStudent){
    int index = 0;
};