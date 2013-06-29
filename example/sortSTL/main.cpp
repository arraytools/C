#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

int main()
{
    int coll[] = { 5, 6, 2, 4, 1, 3 };

    // sort beginning with the second element
    sort (coll, coll+6);

    // print all elements
    //copy (coll, coll+6, ostream_iterator<int>(cout," "));
	cout << coll[0] << ' ' << coll[1] << ' ' << coll[2] << ' ' << coll[3] << ' ' << coll[4] << ' ' << coll[5] << endl;
    cout << endl;
}

/* 
1 2 3 4 5 6

 */  