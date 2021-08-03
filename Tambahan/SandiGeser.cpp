#include <iostream>
using namespace std;

string enkripsi(string kalimat, int c)
{
    string hasil = "";

    for (int i = 0; i < kalimat.length(); i++)
    {
        if (c < 0)
        {
            c = 26 + (c % 26);
        }
        if (kalimat[i] >= 'a' && kalimat[i] <= 'z')
            kalimat[i] = ((kalimat[i] + c - 97) % 26) + 97;
        else if (isupper(kalimat[i]) && kalimat[i] >= 'A' && kalimat[i] <= 'Z')
            kalimat[i] = ((kalimat[i] + c - 65) % 26) + 65;
    }

    hasil = kalimat;

    return hasil;
}
int main()
{
    string kalimat;
    int c;
    getline(cin, kalimat);
    cin >> c;
    cout << enkripsi(kalimat, c);
    return 0;
}