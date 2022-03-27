#include <iostream>

using namespace std;

int main()
{
    int ha;
    cout << "Please enter an integer: "<< endl;
    cin >> ha;

    cout << "The odd integers between 1-" << ha << " are: " ;
    for ( int num = 1; num <= ha; num++ )
    {
     if ( num % 2 != 0)
        {
        cout << num << "\t";
        }
    }
    return 0;
}
