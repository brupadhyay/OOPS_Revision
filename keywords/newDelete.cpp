#include<iostream>
using namespace std;

void func(int n){
    int arr[n];
}

int main()
{
    int n;
    cin >> n;
    func(n);

    int *p = new int[10];
    for(int i = 0;i<10;i++){
        p[i] = i + 1;
    }
    for(int i = 0;i<10;i++){
        cout << p[i] << " ";
    }

    delete []p;

    const int x = 10;
    cout << "\n" << x << endl;
    
    return 0;
}