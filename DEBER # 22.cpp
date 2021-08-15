#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctime>
#define max 5000
using namespace std;
 void fuerza(char a[max],char b[max],int n,int m){
int k,i,j,band=0;
for(i=0;i<=n-m;i++){
 k=i; j=0;
 while(a[k]==b[j] && j<=m) {
 k++; j++; }
 if(j>m-1)
 {cout<<"se encuentra en la posicion"<<i+1<<endl; band=1;}
 else band=0; 
 }if(band=0)cout<<"no se encuentra";
}
int main(){
int i,j,n,m;
char a[max],b[max];
cout<<"\t\tcadena por busqueda exhaustiva"<<endl;
cout<<"ingrese la cadena:"<<endl;
gets(a);
cout<<endl<<"ingrese subcaden a buscar:"<<endl;
cin>>b;
n=strlen(a);
m=strlen(b);
fuerza(a,b,n,m);
getch();
return 0;
}
