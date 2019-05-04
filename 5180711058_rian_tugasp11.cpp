#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace :: std;

main(){
char mem;
float dis,disc;
string id,noid,nm,nb[20];
int du,jml,hb[20],jb[30],totl1,totl2=0;
string nama[10];


cout<<"Apakah Anda Member : ";cin>>mem;
if(mem=='ya'||mem=='Ya')
{
    cout<<" Masukan No identitas : ";cin>>noid;
system("cls");

 if(noid=="A001"){
    cout<<"No.Identitas  : "<<noid<<endl;
    cout<<"Nama          : "<<nama[0]<<endl;
}
else if(noid=="A002"){
    cout<<"No.Identitas  : "<<noid<<endl;
    cout<<"Nama          : "<<nama[1]<<endl;
}
else if(noid=="A003"){
    cout<<"No. identitas : "<<noid<<endl;
    cout<<"Nama          : "<<nama[2]<<endl;
}
else if(noid=="A007"){
    cout<<"No. identitas : "<<noid<<endl;
    cout<<"Nama          : "<<nama[3]<<endl;
}
else if(noid=="A008"){
    cout<<"No. identitas : "<<noid<<endl;
    cout<<"Nama          : "<<nama[4]<<endl;}
}

else if(mem=='tidak'||mem=='Tidak'){
    cout<<"Masukkan Nama : ";cin>>nama[0];
    cout<<"No Identitas  : ";cin>>noid;
    cout<<endl;}
cout<<"Berapa Jumlah Barang : ";cin>>jml;cout<<endl;
for(int i=0;i<jml;i++){
    cout<<"Barang ke - "<<i+1<<endl;
    cout<<"Masukkan Nama Barang   : ";cin>>nb[i];
    cout<<"Masukkan Jumlah barang : ";cin>>jb[i];
    cout<<"masukkan Harga Barang  : ";cin>>hb[i];
    cout<<endl;

    totl1=jb[i]*hb[i];
    totl2=totl2+totl1;
}
    cout<<"Total Harga             : "<<totl2<<endl;
if(mem=='y'||mem=='Y'){
    dis=5/(float)100;

    cout<<"Diskon Anda Adalah      : "<<disc<<endl;
    cout<<"Total Yang Harus Dibayar:"<<totl2-disc<<endl;
    cout<<"Masukkan Uang           : ";cin>>du;
    cout<<"kembalian               : "<<du-(totl2-disc);

}

else if(mem=='t'||mem=='T'){
        cout<<"Anda tidak Dapat Discon "<<endl;
  cout<<" Masukkan Uang            : ";cin>>du;
  cout<<" kembalian                : "<<du-totl2;
}
return 0;
}
