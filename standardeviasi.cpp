#include <iostream>
#include <math.h>
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
long sqr(int n)
{
    return n*n;
}
float STD(int x[10], int n, float rata)
{
    int jumlah =0;
    for (int i=0; i<n; i++)
        jumlah + sqr(x[i] - rata);

    return(sqrt(jumlah/(n-1)));
}
float rerata (int x[10], int n)
{
int jumlah =0;
for (int i=0; i<n; i++)
    jumlah +=x[i];

return jumlah /n;
}
int main()
{
    int n=2;
    int data[10];

    input_data(data,n);
    float rata = rerata(data, n);
    cetak_data(data, n);
    cout << "Rata-rata nilainya adalah: " << rata << endl;
    float deviasi = STD(data, n, rata);
    cout << "Standar deviasi nilainya adalah: " << deviasi << endl;
    return 0;
}
