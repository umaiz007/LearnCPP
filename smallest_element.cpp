// Write a program to find the smallest element from a random unsorted array
#include<iostream>
#include<cstdlib>

using namespace std;
int main(void)
{
    // generate array random size
    int array_size = rand() % 50;
    // generate random array of above size
    int i, unsorted_array[array_size] = {};
    cout << "Array size is " << array_size << endl;
    cout << "Array elements are {";
    // print elements of unsorted array
    for(i=0; i<array_size; i++)
    {
        unsorted_array[i] = rand() % 100;
        cout << unsorted_array[i];
        if(i<(array_size)-1)
        {
            cout  << ",";
        }
    }
    cout << "}" << endl;
    // initialize smallest element to first element of unsorted array
    int smallest_element = unsorted_array[0];
    // compare smallest element with each element of unsorted array
    for(i=0; i<array_size; i++)
    {
        if(smallest_element>unsorted_array[i])
        {
            // if array element is less than smallest element then set is as the smallest element
            smallest_element = unsorted_array[i];
        }
    }
    cout << "Smallest element is " << smallest_element;
}