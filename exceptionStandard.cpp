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
    catch (exception& e) {
        //penangkap menggunakan object exception
        cout << e.what () << endl;
        //*akan dieksekusi karena array data hanya memiliki 3 element*/
    }
    cout << "baris program yang terakhir" << endl;
    /*penanda 2 : bahwa program berjalan tanpa henti meskipun terjadi kesalahan*/
    return 0;

}