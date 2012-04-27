//Fibonacci sequence
//Create a vector that contains the fibonacci sequence

#include <iostream>
#include <vector>

using namespace std;

int fib(int &x, int &y);

int main()
{
    int MAX = 40;  //Because of ints it will wrap if you go too high.
    int fibDigit;
    vector<int> seq;
    seq.push_back(0);
    seq.push_back(1);

    cout << "Enter the maximum number of times to compute (2 - 40): ";
    cin >> MAX;

    if ( MAX > 40) {
        cout << "That is greater than 40!\nWill compute 40 times.\n\n" << endl;
        MAX = 40;
    }

    for (int i = 2; i <= MAX; i++) {
        fibDigit = fib(seq[i-2], seq[i-1]);
        //cout << fibDigit << endl;
        seq.push_back(fibDigit);
    }

    for (int i = 0; i <seq.size(); i++) {
        if (i <= 9){
        cout << "0" << i << ": " << seq[i] << endl;
        } else {
        cout << i << ": " << seq[i] << endl;
        }
    }

    return 0;
}

int fib(int &x, int &y)
{
    int num = x + y;
    return num;
}
