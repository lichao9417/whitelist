#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char* argv[])
{
	int loop_count = atoi(argv[1]);   //int atoi(const char *nptr);注意将字符串转换成int 
    srand((unsigned)time(NULL));
    for(int i=0; i<loop_count;i++)
    {
         cout << rand() << "\n";
    }
    cout << endl;

    return 0;
}
