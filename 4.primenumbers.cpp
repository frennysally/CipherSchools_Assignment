#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
    int low;
    cout<<"enter lower limit :";
    cin >> low;

    int high;
	cout<<"enter higher limit :";
    cin >> high;

    for (int num = low; num <= high; num++)
	{
        int div = 2;
        while (div * div <= num)
		{
            if (num % div == 0)
			{
                break;
            }
            div++;
        }

        if (div * div > num)
		{
            cout << (num) << endl;
        }
    }
}

