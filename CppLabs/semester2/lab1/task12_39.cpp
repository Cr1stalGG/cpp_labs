#include <iostream>

using namespace std;

int countOfTakenTickets(int** arr, int rows, int seats, int checkable_pos);

int main(){
    const int COUNT_OF_ROWS = 25;
    const int COUNT_OF_SEATS = 36;
    const int CHECKABLE_POS = 12;

    int** odeum = new int*[COUNT_OF_ROWS];
    for(int i = 0; i < COUNT_OF_ROWS; ++i)
        odeum[i] = new int[COUNT_OF_SEATS];

    cout << "Input info about taken ticket: " << endl;
    for(int i = 0; i < COUNT_OF_ROWS; ++i)
        for(int ii = 0; ii < COUNT_OF_SEATS; ++ii)
            cin >> odeum[i][ii];

    cout << "Count of taken seats on " << CHECKABLE_POS << "row: " << countOfTakenTickets(odeum, COUNT_OF_ROWS, COUNT_OF_SEATS, CHECKABLE_POS) << endl;

    delete[] odeum;

    return 0;
}

int countOfTakenTickets(int** arr, int rows, int seats, int checkable_pos){
    int count = 0;

    for(int ii = 0; ii < seats; ++ii)
        if(arr[checkable_pos-1][ii] == 1)
            count++;
    
    return count;
}
