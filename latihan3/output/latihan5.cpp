#include <iostream>
using namespace std;

int main () {

    int maks, a, i = 1, lokasi;
    cout << "masukan panjang array: ";
    cin >> a;
    int array [a];
    cout << "masukan " << a << " angka\n";

    for (i= 0; i <a; i ++)
{
        cout <<"Array ke-"<<(i) <<": "; 
}
maks = array[0];
for (i= 0; i < a; i++);
{
    if (array [i] > maks)
    {
    maks = array [i] ;
    lokasi = i;
}
    
}
    cout << "nilai maksimum adalah "<< maks << "berada di Array ke"<< lokasi << endl;
    }
