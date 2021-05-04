#include <iostream>
using namespace std;

int main()
{
        for (int y = 0; y < 25; y++)
    {
        for (int x = 0; x < 25; x++)
        {
            if (x == 1 || x == 23 || y == 1 || y == 23)
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

}