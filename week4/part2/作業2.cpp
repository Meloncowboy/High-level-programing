#include <iostream>
using namespace std;

class Item{
    public:
    int weight;
    int price;
};

class Fish:public Item{
};

class Meat:public Item{
};

class Vege:public Item{
};

int main()
{
    string item;
    int weight;
    int price;
    Fish fish1;
    Fish fish2;
    Meat meat1;
    Meat meat2;
    Vege vege1;
    Vege vege2;
    
    Item &ref = fish1;
    
    while(true){
        cin >> item;
        if(item == "fish1"){
            ref = fish1;
            cin >> ref.weight;
            cin >> ref.price;
        }else if(item == "fish2"){
            ref = fish2;
            cin >> ref.weight;
            cin >> ref.price;
        }else if(item == "meat1"){
            ref = meat1;
            cin >> ref.weight;
            cin >> ref.price;
        }else if(item == "meat2"){
            ref = meat1;
            cin >> ref.weight;
            cin >> ref.price;
        }else if(item == "vege1"){
            ref = vege1;
            cin >> ref.weight;
            cin >> ref.price;
        }else if(item == "vege2"){
            ref = vege2;
            cin >> ref.weight;
            cin >> ref.price;
        }else{
            cout << "Error";
            break;
        };
        
        cout << "item = " << item;
        cout << ", Weight = " << ref.weight;
        cout << ", Price = " << ref.price << "\n"; 
    }

    return 0;
}
