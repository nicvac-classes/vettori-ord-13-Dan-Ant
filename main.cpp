#include <iostream>
#include <vector>
using namespace std;

int main() {
int i, n, t, j;
bool scambio;
cout << "Quanti elementi devono essere generati?" << endl;
cin>> n;
int v[n];
i=0;
while (i<n)
{
    v[i]= rand()n*10 + 1;
    i=i+1;
 
}
i=0;
scambio=true;
while (i<=n-1 and scambio)
{
    j=0;
    scambio=false;
    while (j<=(n-2)-i)
    {
        if (v[j]>v[j+1])
        {
            t=v[j];
            v[j]=v[j+1];
            v[j+1]=t;
            scambio=true;
        }
        j=j+1;
    }
    i=i+1;
}
i=0;
cout << "Pari" << endl;
while (i<n)
{
    if(v[i]%2==0)
    {
        cout << v[i];
    }
    i=i+1;

}
i=0;
cout << "Dispari" << endl;
while (i<n)
{
    if(v[i]%2==0)
    {
        
    }
    else 
    {
        cout << v[i] << endl;
    }
    i=i+1;

}


}


