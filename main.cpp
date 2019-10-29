#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    vector<string> item {"Pisau", "Gergaji", "Katana"};
    vector<string> demage {"20", "35", "50"};
    vector<string> Inv;
    vector<string>::iterator penunjuk;
    int jmlInv;
    int pilih;
    int random;
    int pilihdel;
    char ulang = 'Y';
    srand(static_cast<unsigned int>(time(0)));
    cout << "Masukkan Jumlah Inventory = ";
    cin >> jmlInv;


    while(ulang == 'Y'){

        cout << "\n1. Tampilkan Inventory\n2. Hapus Inventory\n3. Tambah Inventory" << endl;
        cout << "Pilihan ? ";
        cin >> pilih;
        cout << endl;
        if(pilih == 1){
            if(Inv.size() == 0){
                cout << "Inventory Masih Kosong" << endl;
            }else{
                for(penunjuk = Inv.begin(); penunjuk != Inv.end(); ++penunjuk){
                    cout << *penunjuk << endl;
                }
            }
        }else if(pilih == 2){
            if(Inv.size() == 0){
                cout << "Inventory Masih Kosong" << endl;
            }else{
                cout << "Hapus Inventory Yang Ke : ";
                cin >> pilihdel;
                if(pilihdel > Inv.size()){
                    cout << "Pilihan Hapus Inventory Salah" << endl;
                }else{
                    Inv.erase(Inv.begin()+(pilihdel-1));
                }

            }
        }else if(pilih == 3){
            if(Inv.size() == jmlInv){
                cout << "Inventory Sudah Penuh" << endl;
            }else{
                for(int i=0;i<8;i++){
                    random = rand() % 3 + 0;
                }
                Inv.push_back(item[random]);
                cout << "Item Yang Didapat = " << item[random] << " . Demage = " << demage[random] << endl;
            }
        }else{
            cout << "Pilihan Salah" << endl;
        }

        cout << "Jumlah Item Di Inventor = " << Inv.size() << endl;



    //item.push_back("item3");
    //item.push_back("item4");
    //for(int i=0;i<item.size();i++){
        //cout << item[i] << endl;
    //}

    }


    return 0;
}
