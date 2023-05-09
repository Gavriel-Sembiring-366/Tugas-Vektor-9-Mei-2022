#include <iostream>
#include <vector>
using namespace std;

void hapus_impost(vector<int> &array)
{
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = i + 1; j < array.size(); j++)
        {
            if (array[i] == array[j])
            {
                array.erase(array.begin() + j);
                j--;
            }
        }
    }

    cout << "Setelah : ";
    for (int i = 0; i < array.size(); i++)
    {
        if (i == array.size() - 1)
            cout << array[i];
        else
            cout << array[i] << ", ";
    }
}

int main()
{
    int jlh, angka;
    vector<int> array;
    cout << "Jumlah angka yang akan di-input: ";
    cin >> jlh;

    for (int i = 1; i <= jlh; i++)
    {
        cout << "Angka ke-" << i << " = ";
        cin >> angka;
        array.push_back(angka);
    }
    hapus_impost(array);
}
