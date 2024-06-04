#include <iostream>
#include <exception>
//untuk object exception yang akan digunakan
#include <array>
//untuk object array yang akan kita gunakan
using namespace std;

int main(){
    cout << "awal program" << endl; // mark 1
    try {
        array <int, 3> data = {3, 5, 7};
        //pesan array integer 3 element
        cout << data.at(5) << endl;
        //memanggil array element 5
    }
    
}