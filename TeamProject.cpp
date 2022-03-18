#include <iostream>

using namespace std;

int main(){
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}

		for (int k = 0; k < (-2 * i) + 5; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

    cout << "Gooooooood!" << endl;

    return 0;
}