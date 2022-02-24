#include <iostream>
#include <set>
#include <iterator>
#include <string>
using namespace std;

void display(set<string> set1)
{
    for (string s : set1)
    {
        cout << s << " ";
    }
}

void unionWith(set<string> set1, set<string>set2)
{
    set<string> temp;
    for (set<string>::iterator it = set1.begin(); it != set1.end(); it++)
    {
        temp.insert(*it);
    }
    for (set<string>::iterator it = set2.begin(); it != set2.end(); it++)
    {
        if (temp.find(*it) == temp.end())
        {
            temp.insert(*it);
        }
    }
    display(temp);
}

int main()
{
    set<string>set1 = {"Ivan","Kaloqn","Kiril","Mario"};
    set<string>set2 = { "Martin", "Mario", "Petar","Kiril" };
    unionWith(set1, set2);

    

}
