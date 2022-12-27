// Take an array from user and print prime numbers from it....,,,
#include<iostream>
using namespace std;

int isPrime(int usr_array[], int len)
{
    for(int i=0; i<len; i++)
    {
        int j=2, k=1;
        while(j<usr_array[i])
        {
            if(usr_array[i]%j==0)
            {
                k=0;
                break;
            }
            j++;
        }
        if(k==1)
        {
            cout<<usr_array[i]<< " ";
        }
    }
    return 0;
}

int main()
{
    int array_size, array[array_size];
    cout<<"Enter size of array"<<endl;
    cin>>array_size;
    cout<<"Enter elements of array"<<endl;
    for(int i=0; i<array_size; i++)
    {
        cin>>array[i];
    }
    cout<<"Prime numbers are"<<endl;
    isPrime(array, array_size);
}