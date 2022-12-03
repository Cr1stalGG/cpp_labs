#include <iostream>
#include <cmath>

#define M_PI 3.14159

using namespace std;

void foo() { // +1 к ср баллу
    double step, start, end;

    cout << "$Input start, end and step of programm" << endl; 
    cin >> start >> end >> step;
    
    if (step == 0 || end <= start) { 
        cout << "$Invalid input data error..." << endl;
    }
    else{
        double n = start;
        int stepsToZero;
        int thisStep = -1;

        if (start < 0.0) {
            stepsToZero = abs(start / step);
        } 
        else {
            stepsToZero = -1;
        }

        while(n <= end){
            thisStep += 1;
            if (thisStep == stepsToZero && stepsToZero != -1) {
                cout << 0.0 << ": " << 10 << endl;
            }
            else {
                if (n < 0.0)
                    cout << n << ": " << pow(n, 2) << endl;
                else if (n > 0.0)
                    cout << n << ": " << pow(n, 2) + 3 << endl;
           
            }
            n += step;
        
        }
    }
}

void task1_3() {
    double d, m; //входные данные
    double n, k, b, i; //данные для расчёта

    cout << "$Input d and m: " << endl;
    cin >> d >> m;
    
    n = exp(d - m);
    b = pow(tan(m * d) * tan(m * d), 1 / 3.0);
    k = pow(m, m * sin(b));
    i = log(pow(fabs(m + n), 1 / k));
    cout << "Result is " << i << endl;
}

void task2_13() { //переделать
    
    double  x, y, z; //координаты вектора
    double absA; //длина вектора
    double alpha, beta, gamma; //углы наклона (x, y, z) (радианы)

    cin >> x >> y >> z;

    absA = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));

    alpha = 180 * acos(x / absA) / M_PI;
    beta = 180 * acos(y / absA) / M_PI;
    gamma = 180 * acos(z / absA) / M_PI;

    cout << absA << endl;
    if (absA > 0){
        cout << "Angle of x: " << alpha << endl;
        cout << "Angle of y: " << beta << endl;
        cout << "Angle of z: " << gamma << endl;
    }
    else {
        cout << "Angle of x: " << 180 - alpha << endl;
        cout << "Angle of y: " << 180 - beta << endl;
        cout << "Angle of z: " << 180 - gamma << endl;
    }
    
}

int main()
{
    //setlocale(LC_ALL, "Russian");
    
     foo();

    //task1_3();
    //task2_13();



    return 0;
}
