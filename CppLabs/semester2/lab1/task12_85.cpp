#include <iostream>

using namespace std;

int index_of_row_with_min_element(int** arr, int count_of_columns, int row);
int index_of_column_with_max_element(int** arr, int count_of_rows, int column);

int main(){
    const int ROW = 4;
    const int COLUMN = 3;

    int count_of_rows;
    int count_of_columns;

    cout << "Input count of rows and columns: ";
    cin >> count_of_rows >> count_of_columns;

    int** arr = new int*[count_of_rows];

    for(int i = 0; i < count_of_rows; ++i)
        arr[i] = new int[count_of_columns];

    cout << "Input elements of array: " << endl;

    for(int i = 0; i < count_of_rows; ++i)
        for(int ii = 0; ii < count_of_columns; ++ii)
            cin >> arr[i][ii];

    cout << "Number of column with min element in " << ROW << " row: " << index_of_row_with_min_element(arr, count_of_columns, ROW) << endl;
    cout << "Number of row with max element in " << COLUMN << " column: " << index_of_column_with_max_element(arr, count_of_rows, COLUMN) << endl;

    delete[] arr;

    return 0;
}

int index_of_row_with_min_element(int** arr, int count_of_columns, int row){
    int index = 0;

    for(int i = 1; i < count_of_columns; ++i)
        if(arr[row-1][i] < arr[row-1][index])
            index = i;
    
    return index+1;
}

int index_of_column_with_max_element(int** arr, int count_of_rows, int column){
    int index = 0;

    for(int i = 1; i < count_of_rows; ++i)
        if(arr[i][column-1] >= arr[index][column-1])
            index = i;
    
    return index+1;
}