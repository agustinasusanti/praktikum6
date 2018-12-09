#include<iostream>
using namespace std;

void input_data(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << "Masukkan data ke-" << i << ": ";
        cin >> a[i];
    }
}
void cetak_data(const int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        cout << "Data ke-" << i << ": " << a[i] << endl;
    }
}
double rerata (int x[10], int n)
{
int jumlah =0;
for (int i=0; i<n; i++)
    jumlah +=x[i];

return jumlah /n;
}
int main()
{
    int n=3;
    int data[10];

    input_data(data, n);
    double rata = rerata(data, n);
    cetak_data(data, n);
    cout << "Rata-rata Nilainya adalah: " << rata << endl;
    return 0;
}
