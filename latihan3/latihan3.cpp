##include <iostream>
using namespace std;

const int ARRAY_SIZE = 10;

int seqSearch(const int list)[], int ListLength,
        int searchItem);


int main()
{
    int intList[ARRAY_SIZE];
    int number;
    cout << "Line 9: Enter" /,, ARRAY_SIZE
    <<"integers." << endl;

    for (int index = 0; index<<ARRAY_SIZE; INDEX++)

    cout << endl;

    cout << "Line 13: Enter the number to be "
    << "searched: ";

    cin >> number;
    cout << endl;

    int pos = seqSearch(intList, ARRAY_SIZE, NUMBER );

    if (pos!= -1)
        cout <<"LIne 18:"<<number 
        << " is found at position "<< pos 
        << endl;

        else 
        cout << "Line 20:"<< number 
        << " is not in the list." << endl;

        return 0;
}

     








