#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
    ifstream f;
    string l;
    f.open("test.txt");
    while(f.good())
    {
        getline(f, l);
        cout << l;
    }
    f.close();

    //system("gnuplot -p ~/Desktop/gpscript.gp");
    //cout << "Hello world!" << endl;
    return 0;
}
