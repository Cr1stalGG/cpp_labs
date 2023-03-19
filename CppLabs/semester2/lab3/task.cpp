#include <iostream>
#include <string>

using namespace std;

struct PRICE{
    int id;
    string product_name;
    string shop_name;
    double currency;
    int amount;
};

PRICE read();
void table_print(PRICE* products, int count);
void sort_by_currency(PRICE *& products, int count);
void swap(PRICE* first, PRICE* sec);
void print_products_grouped_by_shop(PRICE* products, int count); 
int find_by_ID(PRICE* products, int count, int id);
void print_low_amount_products(PRICE* products, int count);
void print(PRICE c);
PRICE update_product(PRICE* products, int count, int id);
void string_compare(PRICE* a, int n);

int main(){
    
    const string menuUI = "1.Input elements \n2.Print table of products \n3.Sort by currency \n4.Print grouped by shop name \n5.Find by ID \n6.Print low amount products \n7.Update by ID";
    short choice = -1;

    bool isEmpty = true;

    int id;

    PRICE* products;
    int count_of_products;

    do{
        cout << menuUI << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Input count of products: ";
            cin >> count_of_products;

            products = new PRICE[count_of_products];

            for(int i = 0; i < count_of_products; ++i)
                products[i] = read();
            isEmpty = false;

            break;
        case 2:
            if (!isEmpty)
                table_print(products, count_of_products);

            break;
        case 3:
            if (!isEmpty){
                cout << "Sorting products by currency..." << endl;
                sort_by_currency(*&products, count_of_products);
            }
            break;
        case 4:
            if (!isEmpty)
                print_products_grouped_by_shop(products, count_of_products);

            break;
        case 5:
            if (!isEmpty){
                cout << "Input ID of updatable product: ";
                cin >> id;  
                
                find_by_ID(products, count_of_products, id);
            }    
            break;
        case 6:
            if (!isEmpty)
                print_low_amount_products(products, count_of_products);

            break;
        case 7:
            if (!isEmpty){
                cout << "Update info of product by id:" << endl;
                cin >> id;
                for(int i = 0; i < count_of_products; ++i)
                    if(products[i].id == id)
                        products[i] = update_product(products, count_of_products, id);
            }
            break;
        
        default:
            cout << "incorrect input data..." << endl;
            break;
        }
    }while(choice != 7);
            

    delete[] products;

    return 0;
}

PRICE read(){
    PRICE product;

    int id;
    string product_name;
    string shop_name;
    double currency;
    int amount;

    cout << "Input id of product: ";
    cin >> id;

    cout << "Input product's name: ";
    cin.ignore();
    getline(cin, product_name);

    cout << "Input shop's name: ";
    getline(cin, shop_name);

    cout << "Input currency: ";
    cin >> currency;

    cout << "Input amount: ";
    cin >> amount;

    product.id = id;
    product.product_name = product_name;
    product.shop_name = shop_name;
    product.currency = currency;
    product.amount = amount;

    return product;
}

void table_print(PRICE* products, int count){
    cout << "ID------NAME-----------SHOP-----------CURRENCY------------AMOUNT" << endl;
    for(int i = 0; i < count; ++i){
        cout << products[i].id << "\t" << products[i].product_name << "\t\t" << products[i].shop_name << "\t\t" << products[i].currency << "\t\t" << products[i].amount << endl;
    }

}

void sort_by_currency(PRICE *& products,  int count){ //using bubble sort
    for(int i = 0; i < count-1; ++i){
        for(int ii = 0; ii < count-1 - i; ++ii){
            if(products[i].currency > products[i+1].currency)
                swap(products[i], products[i+1]);
        }
    }
}

void swap(PRICE* first, PRICE* sec){
    PRICE tmp = *first;
    *first = *sec;
    *sec = tmp;
}

void string_compare(PRICE* a, int n){
  for (int i = n - 1; i >= 0; i--)
    for (int j = 0; j < i; j++)
        if (a[j].shop_name > a[j+1].shop_name){
          PRICE tmp = a[j];
          a[j] = a[j + 1];
          a[j + 1]=tmp;
        }
}

void print_products_grouped_by_shop(PRICE* products, int count){ //TODO  sort by shop name
    string_compare(products, count);
    for(int i = 0; i < count; ++i){
        cout << "PRODUCT #" << i+1 << endl;
        print(products[i]);
    }
}

int find_by_ID(PRICE* products, int count, int id){
    for(int i = 0; i < count; ++i){
        if(products[i].id == id){
            print(products[i]);
            return i;
        }
    }
    cout << "No user with this id found. Please create new user: " << endl;
    return -1;
}

void print_low_amount_products(PRICE* products, int count){
    const int LOW_QUALIFIER_OF_AMOUNT = 5;
    for(int i = 0; i < count; ++i)
    if(products[i].amount < LOW_QUALIFIER_OF_AMOUNT)
        print(products[i]);
}

void print(PRICE c){
        cout << "ID: " << c.id << endl;
        cout << "NAME: " << c.product_name << endl;
        cout << "SHOP: " << c.shop_name << endl;
        cout << "CURRENCY: " << c.currency << endl;
        cout << "AMOUNT: " << c.amount << endl;
}

PRICE update_product(PRICE* products, int count, int id){
    int tmp = find_by_ID(products, count, id);
    

}