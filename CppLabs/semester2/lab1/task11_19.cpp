#include <iostream>

using namespace std;

int sum(int* arr, int length);
int product(int* arr, int length);
long sum_of_square(int* arr, int length);
int square(int el);
string sum_of_first_six(int* arr, int length);
int sum_in_range(int* arr, int length, int k1, int k2);
double average(int* arr, int length);
double average_in_range(int* arr, int length, int s1, int s2);

int main(){
    int n;

    cout << "Input count of elements of array: ";
    cin >> n;

    int* arr = new int[n];
    
    cout << "Input elements of array: " << endl;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    cout << "Sum of elements: " << sum(arr, n) << endl;
    cout << "Product of elements: " << product(arr, n) << endl;
    cout << "Sum of square of elements: " << sum_of_square(arr, n) << endl;
    cout << "Sum of first six elements elements: " << sum_of_first_six(arr, n) << endl;

    int k1, k2;

    cout << "Input k1 and k2: ";
    cin >> k1 >> k2;

    cout << "Sum from k1 to k2: " << sum_in_range(arr, n, k1, k2) << endl;
    cout << "Average of elements of array: " << average(arr, n) << endl;

    int s1, s2;
    cout << "Input s1 and s2: ";
    cin >> s1 >> s2;

    cout << "Average of elements from s1 to s2: " << average_in_range(arr, n, s1, s2) << endl;

    delete[] arr;

    return 0;
}

int sum(int* arr, int length){
    int sum_of_array = 0;

    for(int i = 0; i < length; ++i)
        sum_of_array += arr[i];
    

    return sum_of_array;
}

int product(int* arr, int length){
    long product_of_elements = 1;

    for(int i = 0; i < length; ++i)
        product_of_elements *= arr[i];
    

    return product_of_elements;
}

long sum_of_square(int* arr, int length){
    long sum_of_square_of_elements = 0;

    for(int i = 0; i < length; ++i)
        sum_of_square_of_elements += square(arr[i]);
    
    return sum_of_square_of_elements;
    
}
int square(int el){
    return el*el;
}

string sum_of_first_six(int* arr, int length){
    int sum_of_elements = 0;

    if(length < 6)
        return "Error: Not enought elements";
    
    for(int i = 0; i < 6; ++i)
        sum_of_elements += arr[i];
    
    return to_string(sum_of_elements);
}

int sum_in_range(int* arr, int length, int k1, int k2){
    int sum_of_elements = 0;

    for(int i = k1-1; i < k2; ++i)
        sum_of_elements += arr[i];
}

double average(int* arr, int length){
    double average;

    average = (double)sum(arr, length) / (double)length;

    return average;
}

double average_in_range(int* arr, int length, int s1, int s2){
    double average;

    average = (double)sum_in_range(arr, length, s1, s2) / (double)(s2+1-s1);

    return average;
}