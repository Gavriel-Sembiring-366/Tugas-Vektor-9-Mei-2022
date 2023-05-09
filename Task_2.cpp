
#include <iostream>
#include <vector>

using namespace std;

int freq, bil;

void frek(vector<int> angka)
{
    for (int i = 0; i < angka.size(); i++)
    {
        if (angka[i] == bil)
        {
            freq++;
        }
    }

    if (freq > 0)
    {
        cout << "Frekuensi dari angka " << bil << " di dalam array adalah " << freq << endl;
    }
    else
    {
        cout << "Angka tidak ditemukan\n";
    }
}

int main(void)
{
    int temp, size;
    vector<int> angka;
    cout << "Masukkan ukuran vector: ";
    cin >> size;

    for (int i = 1; i <= size; i++)
    {
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> temp;
        angka.push_back(temp);
    }

    cout << "Masukkan angka yang mau dicari frekuensinya: ";
    cin >> bil;

    frek(angka);
}
