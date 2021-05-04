#include <iostream>
using namespace std;

int main()
{
    for (int y = 0; y < 25; y++)
    {
        for (int x = 0; x < 25; x++)
        {
            if (x == y)
            {
                cout << "# ";
            }
            else
            {
                cout << ". ";
            }
        }

        cout << endl;
    }
    cout << endl;
}