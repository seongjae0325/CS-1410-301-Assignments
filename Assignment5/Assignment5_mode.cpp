#include <iostream>

using namespace std;

//Mode Function prototype

int getMode(int*,int);

int main()
{

    int * number,SIZE;
    cout<<"Enter the number of integers:  ";
    cin>>SIZE;
    number=new int[SIZE];// memory allocation
    cout<<"\nEnter "<<SIZE<<" integer numbers greater than zero"<<endl;
    for(int i=0; i<SIZE; i++)
        cin>>*(number+i); //read the numbers

    int mode = getMode(number,SIZE); //function call

    if(mode == -1)
        cout<<"\nThere is no mode of these numbers."<<endl;
    else
        cout<<"Mode = "<<mode<<endl;
    delete [] number;
    number =nullptr;
}

//Mode Function definition
int getMode(int *arr, int SIZE) {
    int max_count = 0;
    int mode = -1;
    for (int i = 0; i < SIZE; i++) {
        int count = 0;
        for (int j = 0; j < SIZE; j++) {
            if (*(arr + j) == *(arr + i))
                count++;
        }
        if (count > max_count) {
            max_count = count;
            mode = *(arr + i);
        }
    }

    if (max_count == 1)
        return -1;
    else
        return mode;
}