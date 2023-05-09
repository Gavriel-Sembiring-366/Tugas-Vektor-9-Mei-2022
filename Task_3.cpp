#include <iostream>
#include <vector>
using namespace std;

void urutkan(vector<int> &angka)
{
    int n = angka.size();
    int m, j;
    for (int i = 1; i < n; i++)
    {
        m = angka[i];
        j = i - 1;
        while (j >= 0 && angka[j] > m)
        {
            angka[j + 1] = angka[j];
            j--;
        }
        angka[j + 1] = m;
    }
}

int main()
{
    vector<int> angka;
    int n;

    cout << "Masukkan berapa bilangan yang anda ingin masukkan : ";
    cin >> n;

    cout << "Input: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        angka.push_back(x);
    }

    urutkan(angka);
    cout << "Output: ";
    for (int i = 0; i < angka.size(); i++)
    {
        if (i == angka.size() - 1)
            cout << angka[i];
        else
            cout << angka[i] << ", ";
    }
    cout << endl;

    return 0;
}