#include <iostream>

using namespace std;

int main(int argc, char* argv[])

{
    int arrayLen;
    cin >> arrayLen;
    int* array = new int[arrayLen];
    for (int i = 0;i < arrayLen;++i)
    {
        cout << (array[i] = rand() % arrayLen + 1);
    }
    cout << endl;
    int pairCounter = 0;
    for (int i = 0;i < arrayLen - 1;i++)
    {
        if (array[i] % 2 == 0 && array[i + 1] % 2 == 0)
        {
            pairCounter += 1;
        }
    }
    cout << pairCounter << endl;
    delete[] array;
    system("pause");
    return 0;
}