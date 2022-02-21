#include "scratch.h"

void change_data(Data *data_struct){
    data_struct->id = 2;
    data_struct->data = "something else. ";
}

void fill_data(Data *array, int size){
    for(int i=0; i <size; i++){
        array[i].id = i*10;
        array[i].data = "some string: " + std::to_string(i+1);
    }
}

void fill_data2D(Data **array, int rowSize, int colSize){
    for(int i=0; i <rowSize; i++){
        array[i] = new Data[colSize];
    }

    for(int i=0; i <rowSize; i++){
        
        for(int j=0; j <colSize; j++){
            array[i][j].id = j*10;
            array[i][j].data = "string "+ std::to_string(j+1);
        }
    }
}

void display_data(Data *array,  int size){
    for(int i=0; i <size; i++){
        cout << array[i].id << " : ";
        cout << array[i].data << endl;
    }
}


void display_data2D(Data **array, int rowSize, int colSize){
    for(int i=0; i <rowSize; i++){
        for(int j=0; j <colSize; j++){
            cout << array[i][j].id << " : ";
            cout << array[i][j].data << endl;
        }
    }
}

