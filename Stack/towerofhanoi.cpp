#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from_rod,
					char to_rod, char aux_rod)
{
	if (n == 1)
	{
		cout << "Move disk 1 from rod " << from_rod <<
							" to rod " << to_rod<<endl;
		return;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	cout << "Move disk " << n << " from rod " << from_rod <<
								" to rod " << to_rod << endl;
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
	int n ;
    cout<<"enter no of disks: "<<endl; // Number of disks
    cin>>n;
	towerOfHanoi(n, 'A', 'B', 'C'); // A, B and C are names of rods
	return 0;
}

