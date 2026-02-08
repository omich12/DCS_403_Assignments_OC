// Q9. Tower of Hanoi (3 Pegs)
// Solve the Tower of Hanoi puzzle for n disks.
// Hint:
// Move n-1 disks to auxiliary rod, move largest disk, then move n-1 back.

#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from, char to, char aux)
{
    // Base case
    if (n == 1)
    {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }

    // Move n-1 disks to auxiliary rod
    towerOfHanoi(n - 1, from, aux, to);

    // Move largest disk
    cout << "Move disk " << n << " from " << from << " to " << to << endl;

    // Move n-1 disks to destination rod
    towerOfHanoi(n - 1, aux, to, from);
}

int main()
{
    int n;

    cout <<"Enter the number of disks: ";
    cin >> n;

    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
