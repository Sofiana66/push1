#include <iostream>
using namespace std;

void bubblesort (int list[], int length);

int main (){

    int list [] = {2, 56,34, 25, 73, 46, 89, 10,5, 16};
    int i;
    bubblesort (list, 10);

    cout <<"after sorting, the list elements are:"
    << endl;

    for (i = 0; i <10; i++) 
    cout <<list [i] <<" ";

    cout << endl;

    return 0;
}
       
