#include <iostream>
using namespace std;

int nTelor, nMie, nAir;
int hTelor = 2000, hMie = 2800, hAir = 3000;
string nama;

void input()
{
    cout << "Masukkan nama = ";
    cin >> nama;
    cout << "Masukkan jumlah telor = ";
    cin >> nTelor;
    cout << "Masukkan jumlah mie = ";
    cin >> nMie;
    cout << "Masukkan jumlah air mineral = ";
    cin >> nAir;
}

int HitungHarga()
{
    return (nTelor * hTelor) + (nMie * hMie) + (nAir * hAir);
}

void display()
{
    cout << "Nama = " << nama << endl;
    cout << "Jumlah Telor = " << nTelor << endl;
    cout << "Jumlah Mie = " << nMie << endl;
    cout << "Jumlah Air = " << nAir << endl;
    cout << "Total Harga Rp." << HitungHarga() << endl;
}

int main()
{
    char pilihan;
    do
    {
        input();
        display();

        cout << "Apakah anda ingin mengulangi (y/n) ? ";
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');
    
}