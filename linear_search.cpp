#include <iostream>
#include <vector>
using namespace std;

//linear search

int main(){

    vector<int> arr;
    int size, element;

    cout<<"Enter the size: ";
    cin>>size;

    cout<<"Enter the elements:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>element;
        arr.push_back(element);
    }

    //linear search

    int x;
    cout<<endl<<endl<<"Enter an element to be searched: ";
    cin>>x;

    cout<<endl;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == x) {
            element = i;
            break;
        }else{
            element = -1;
        }
    }

    cout<<endl<<endl;

    if (element != -1)
    {
        cout<<"Element found at index: "<<element;
    }else{
        cout<<"Element not found";
    }
    
    

    return 0;
}