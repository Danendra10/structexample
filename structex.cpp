#include <iostream>
#include <string>

using namespace std;

//struct : data yang dibentuk beberapa data
//example: saya punya jeruk
//ada jeruk.harga
//ada jeruk.warna
//diatas itu adalah data dalam data (struct)

//ex:

struct buah{
  string color, taste;
  int price;
  float weight;
};

int main(){
    buah melon;
    melon.color = "Green";
    melon.price = 70;
    melon.taste = "Basi";
    melon.weight = 500.60f;
    cout << melon.color <<endl;
    cout << melon.price << endl;
    cout << melon.taste <<endl;
    cout << melon.weight <<endl;
    cin.get();
    return 0;
}
