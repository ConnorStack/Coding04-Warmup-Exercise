#ifndef DEMO_FUNCTIONS_H
#define DEMO_FUNCTIONS_H

#include "data.h"
#include  <iostream>
using std::cout;
using std::endl;

void change_data(Data *data_struct);
void fill_data(Data *array, int size);
void display_data(Data *array,  int size);
void fill_data2D(Data **array, int rowSize, int colSize);
void display_data2D(Data **array, int rowSize, int colSize);


//change fill display

#endif //DEMO_FUNCTIONS_H