#include <iostream>

using namespace std;

struct weight{
    int kil;
    int gr;
};

weight read();
void print(weight c);
weight add(weight a, weight b);

int main(){
    weight a, b;
    
    a = read();
    b = read();

    print(add(a, b));

    return 0;
}

weight read(){
    weight new_weight;

    //int kil;
    //int gr;

    cout << "Input kilogramm and gramm: ";
    cin >> new_weight.kil >> new_weight.gr;

    return new_weight;
}

void print(weight c){
    printf("$weight:{kilo=%d, gramm=%d} \n", c.kil, c.gr);
}

weight add(weight a, weight b){
    weight result;
    
    result.gr = a.gr + b.gr;
    result.kil = a.kil + b.kil + result.gr/1000;
    result.gr %= 1000;

    return result;
}