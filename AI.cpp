#include <iostream>
using namespace std;
class Search
{
    public:
    int LSIterative(int*, int , int);
    int LSRecursive(int*, int , int);
};
int Search::LSIterative(int *List, int key, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(List[i] == key)
        return i;    
    }
    return -1;
}
int Search::LSRecursive(int *List, int key, int n)
{
    if(n > 0)
    {
        if (List[n] == key)
        return n;
        else 
        return LSRecursive(List , key , n - 1);
    }
    return -1;
}
int main()
{
    Search S;
    int A[10] = {3, 2, 5, 12, 8, 7, 1, 10, 6, 9};
    cout << "\nThe number 12 is in the position " << S.LSIterative(A, 12, 10);
    cout << "\nThe number 10 is in the position " << S.LSRecursive(A, 10, 10);
    cout << "\n";
    return 0;
}