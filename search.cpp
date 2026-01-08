#include<iostream>
#include<
#include<vector>
using namespace std;
 void search( const vector<int>& arr , int data);

int main()
{
    vector<int> array= {10,23,27,72,18,39,47,73,79,84,64};

    int key;
    cout <<"Enter the number to search \n";
    cin >> key;
    search(array, key);

    return 0;
}

void search ( const vector<int>& arr, int data)
{
    int i,j=0;
    vector <int> index;
    for ( i= 0; i<arr.size()-1; i++)
    {
        if (arr[i] == data)
        {
            j++;
            index.push_back(i);
        }
    }
    if (j>0)
    {
    cout << "Your element " << data << " occurs "<< j << " time at index: ";
    for (auto it = index.begin(); it != index.end(); it++)
    {
        cout << *it;
    }}
    else 
        cout << "-1";
    cin.get();
}