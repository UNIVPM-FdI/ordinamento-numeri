#include <iostream>
#include <time.h>
#include <stdlib.h>
# define numero 50000
using namespace std;

void inserimentodiretto(int v[], int n)
{

int appoggio;
for(int i=1; i<n; i++) {
appoggio = v[i];
int j = i-1;
while((j >= 0) && (v[j] > appoggio)) {
v[j + 1] = v[j];
 j--;
 }
v[j+1] = appoggio;
}
}

void selezionediretta(int v[], int n)
{
int appoggio;
int posminimo;
for(int i=0; i<n-1; i++) {
posminimo = i;
int j = i+1;
while(j < n) {
if (v[j] < v[posminimo]) posminimo = j;
j++;
}
appoggio = v[i];
v[i] = v[posminimo];
v[posminimo] = appoggio;
}
}

void bubblesort(int v[], int n)
{
int appoggio;
bool scambio;
scambio = true;
while (scambio) {
scambio = false;
for(int i=0; i<n-1; i++) {
if (v[i] > v[i+1]) {
appoggio = v[i];
v[i] = v[i+1];
v[i+1] = appoggio;
scambio = true;
}
}
}
}


void QuickSort0(int v[], int s, int d)
{
int i = s, j = d;
int tmp;
int pivot = v[(s + d) / 2];
while (i <= j) { // PARTIZIONE
while (v[i] < pivot) i++;
while (v[j] > pivot) j--;
if (i <= j) {
tmp = v[i];
v[i] = v[j];
v[j] = tmp;
i++;
j--;
}
};
if (s < j) // RICORSIONE
QuickSort0(v, s, j);
if (i < d)
QuickSort0(v, i, d);
}
void QuickSort(int v[],int n)
{
	QuickSort0(v,0,n-1);
}

void Fabiosort(int v[],int num){ // "per chi non si ricorda come si fa il bubbleosrt"
 int appoggio;
 for (int i=0;i<num;i++){
  for (int j=0;j<num;j++){
   if (v[i]<v[j]){
    appoggio=v[i];
    v[i]=v[j];
    v[j]=appoggio;
   }  
  }
 }
}
int main (){
int vettore [numero];
int vett[numero];
srand (time(NULL));

for (int i=0;i<numero;i++) vett[i]=vettore[i]=rand();

clock_t startTime=clock();
inserimentodiretto(vett, numero);
cout << endl << "inserimento diretto in " << double(clock() - startTime ) / (double)CLOCKS_PER_SEC << " secondi" << endl;

for (int i=0;i<numero;i++) vett[i]=vettore[i];
cout << "ricaricato" << endl;

startTime=clock();
selezionediretta(vett, numero);
cout << endl << "selezione diretta in " << double(clock() - startTime ) / (double)CLOCKS_PER_SEC << " secondi" << endl;

for (int i=0;i<numero;i++) vett[i]=vettore[i];
cout << "ricaricato" << endl;

startTime=clock();
bubblesort(vett, numero);
cout << endl << "bubblesort in " << double(clock() - startTime ) / (double)CLOCKS_PER_SEC << " secondi" << endl;

for (int i=0;i<numero;i++) vett[i]=vettore[i];
cout << "ricaricato" << endl;

startTime=clock();
Fabiosort(vett, numero);
cout << endl << "Fabiosort in " << double(clock() - startTime ) / (double)CLOCKS_PER_SEC << " secondi" << endl;

for (int i=0;i<numero;i++) vett[i]=vettore[i];
cout << "ricaricato" << endl;

startTime=clock();
QuickSort(vett, numero);
cout << endl << "QuickSort in " << double(clock() - startTime ) / (double)CLOCKS_PER_SEC << " secondi" << endl;
system ("PAUSE");
}
