#include <iostream> //import library
using namespace std; //agar dibawah tidak pakai std:: lagi

int main(){
    //deklarasi variabel
    string nama; 
    int gol, anak, pokok, tambah, total;
    float pajak;

    //program
    cout<<"Masukkan nama Anda : "; //input nama
    getline (cin, nama); //pakai getline agar bisa membaca spasi
    cout<<"Masukkan golongan (1-3) : "; //input golongan dari 1 sampai 3
    cin>>gol; //simpan ke variabel gol
    cout<<"Masukkan jumlah anak : "; //input jumlah anak
    cin>>anak; //simpan ke variabel anak

    //pakai if else if else karna ada beberapa kondisi
    if (gol==1){
        pokok = 5000000;} //nilai gaji pokok jika golongan 1
    else if (gol==2){
        pokok = 3000000;} //nilai gaji pokok jika golongan 2
    else if (gol==3){
        pokok = 2500000;} //nilai gaji pokok jika golongan 3
    else{
        cout<<"Inputan golongan salah"; //jika user menginput selain 1-3
        return 0;} //pakai return 0 agar tidak lanjut ke bawah
    
    pajak = pokok*0.05; //menghitung pajak setelah tau gaji pokok
    
    //kondisi ke dua untuk jumlah anak
    if (anak== 1 || anak==2) 
        tambah = 500000; //uang tambahan jika punya anak 1 atau 2
    else
        tambah = 750000; //uang tambahan jika anak >2
    
    total = pokok - pajak + tambah; //hitung total gaji

    //output
    cout<<"Nama Anda : "<<nama<<endl;
    cout<<"Golongan Anda : "<<gol<<endl;
    cout<<"Gaji total : "<<total;

}