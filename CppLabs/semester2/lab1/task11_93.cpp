#include <iostream>

using namespace std;

int sum(int* arr, int length);
double average(int* arr, int length);
int count_of_cheap_products(int* arr, int length);

int main(){
    const int COUNT_OF_PRODUCTS = 20;
    
    int* currency_of_products = new int[COUNT_OF_PRODUCTS];

    cout << "Input currency of products: ";
    for(int i = 0; i < COUNT_OF_PRODUCTS; ++i)
        cin >> currency_of_products[i];
    if(count_of_cheap_products(currency_of_products, COUNT_OF_PRODUCTS) == 0)
        cout << "There no cheap products" << endl;
    else
        cout << "Count of cheap products: " << count_of_cheap_products(currency_of_products, COUNT_OF_PRODUCTS) << endl;

    delete[] currency_of_products;

    return 0;
}

double average(int* arr, int length){
    return (double)sum(arr, length) / (double)length;
}

int sum(int* arr, int length){
    int sum = 0;

    for(int i = 0; i < length; ++i)
        sum += arr[i];
    
    return sum;
}

int count_of_cheap_products(int* arr, int length){

    int count = 0;
    double average_of_elements = average(arr, length);

    for(int i = 0; i < length; ++i)
        if((double)arr[i] < average_of_elements)
            count++;
    
    return count;
}