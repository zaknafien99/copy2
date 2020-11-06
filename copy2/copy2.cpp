// copy2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <deque>
#include <set>
#include <iostream>

using namespace std;

int main()
{
    list<int> coll1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // copy the elements of coll1 into coll2 by appending them
    vector<int> coll2;
    copy(coll1.cbegin(), coll1.cend(),      // source
        back_inserter(coll2));              // destination

    //copy the elements of coll1 into coll3 by inserting them at the front
    // - reverese the order of the elements
    deque<int> coll3;
    copy(coll1.cbegin(), coll1.cend(),      // source
        front_inserter(coll3));             //destination

    // copy elements of coll1 into coll 4
    // - only inserter that works for associative collections
    set<int> coll4;
    copy(coll1.begin(), coll1.end(),        //source
        inserter(coll4, coll4.begin()));    // destination
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
