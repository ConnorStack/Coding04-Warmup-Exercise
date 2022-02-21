

#include "main.h"

int main(int argc, char **argv){
    Data myData;

    myData.id = 1;
    myData.data ="string";
    cout << myData.id << ": id and data :" << myData.data << endl;

    change_data(&myData);
    cout << myData.id << ": id and data :" << myData.data << endl;

    Data *myDataArray;
    myDataArray = new Data[SIZE];
    //fill_data(myDataArray, SIZE);
    //display_data(myDataArray, SIZE);
    delete[] myDataArray;


    Data **my2DDataArray;
    my2DDataArray = new Data*[SIZE];
    fill_data2D(my2DDataArray, ROW, COLUMN);
    display_data2D(my2DDataArray, ROW, COLUMN);



    return 0;
/*
    //create an int array  with a pointer.
    int *myIntArray;
    myIntArray = new  int[SIZE];

    for(int i=0; i <SIZE; i++){
        myIntArray[i] = i + 1;
    }
    for(int i=0; i <SIZE; i++){
        cout << myIntArray[i] << endl;
    }
    cout << endl;
    delete myIntArray;

    int **my2dIntArray;
    my2dIntArray = new int*[ROW];
    for(int i=0; i <ROW; i++){
        my2dIntArray[i] = new int[COLUMN];

    }
    for(int i=0; i< ROW; i++){
        for(int j = 0; j< COLUMN; j++){
            my2dIntArray[i][j] = i+1;
        }
    }
    for(int i=0; i< ROW; i++){
        for(int j = 0; j< COLUMN; j++){
            cout << "row " << i << " column " << j << '\n' << my2dIntArray[i][j] << endl;
        }
    }
    for(int i=0; i< ROW; i++){
        delete my2dIntArray[i];
    }
    delete my2dIntArray;

    return 0;*/
}