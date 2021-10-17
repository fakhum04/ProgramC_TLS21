/************************************************************************************
    Aufa Khoiro Umma (21/474236/TK/52308)
    Tugas TLS Pemograman 
        "Program Login dengan Username dan Password Berdasarkan Level Pengguna 
        sebagai Admin atau Operator dan Akun akan diblokir jika memasukkan Username 
        atau Password salah sebanyak 3x"
*************************************************************************************/

#include <iostream>
#include <string>

using namespace std;

    struct data {
        string masukSebagai;
        string username;
        string password;
    };

int main()
{
    cout << "=====================================================\n";  
    cout << "        Silahkan Login Game Parallel World \n";  
    cout << "=====================================================\n";
    
    data pengguna1;
    pengguna1.masukSebagai="Admin";
    
    data pengguna2;
    pengguna2.masukSebagai= "Operator";
    
    data admin1;
    admin1.username="batozar010";
    admin1.password="3470247";
    
    data admin2;
    admin2.username="nirmahkota";
    admin2.password="nir01234";
    
    data operator1;
    operator1.username="selenamiss";
    operator1.password="bulan3155";
    
    data operator2;
    operator2.username="bibi9177";
    operator2.password="auntgill";
    
    string masukSebagai, username, password, pengguna, login;
    int nomor;
    int i=1;
     cout<<"Masuk Sebagai:\n";   
     cout<<"1)"<<pengguna1.masukSebagai;
     cout<<"\n2)"<<pengguna2.masukSebagai;
     cout<<"\nMasukkan angka pilihan:";
     cin>>nomor;
     
        switch (nomor)
        {
            case 1:
                do {
                cout<<"\nUsername:"; cin>>username;
                cout<<"Password:"; cin>>password;                    
                    if (username==admin1.username && password==admin1.password){
                        cout<<"\n---------------------------------------\n";
                        cout<<"batozar010 berhasil login sebagai admin";
                        cout<<"\n---------------------------------------\n";
                        i=4;
                        login="berhasil";
                    }
                    else if(username==admin2.username && password==admin2.password){
                        cout<<"\n---------------------------------------\n";
                        cout<<"nirmahkota berhasil login sebagai admin";
                        cout<<"\n---------------------------------------\n";
                        i=4;
                        login="berhasil";
                    } 
                    else {
                        cout<<"\n-----------------------------------------------\n";
                        cout<<"Username atau Password yang Anda Masukkan Salah\nSilahkan Mencoba Login Ulang\n";
                        cout<<"------------------------------------------------\n";
                        i=i+1;
                    }
                } while (i <= 3);
            break;
        
            case 2:
                do {
                cout<<"\nUsername:"; cin>>username;
                cout<<"Password:"; cin>>password;                    
                    if (username==operator1.username && password==operator1.password){
                        cout<<"\n---------------------------------------\n";
                        cout<<"selenamiss berhasil login sebagai operator";
                        cout<<"\n---------------------------------------\n";
                        i=4;
                        login="berhasil";
                    }
                    else if(username==operator2.username && password==operator2.password){
                        cout<<"\n--------------------------------------\n";
                        cout<<"aunt9177 berhasil login sebagai operator";
                        cout<<"\n--------------------------------------\n";
                        i=4;
                        login="berhasil";
                    } 
                    else {
                        cout<<"\n-----------------------------------------------\n";
                        cout<<"Username atau Password yang Anda Masukkan Salah\nSilahkan Mencoba Login Ulang\n";
                        cout<<"-----------------------------------------------\n";
                        i=i+1;
                    }
                } while (i <= 3);
            break;
            default: cout<<"\n-----------------------------------------------------";
                     cout<<"\nHarap Masukkan Angka 1 Jika Ingin Login sebagai Admin\n";    
                     cout<<"atau angka 2 Jika Ingin Login sebagai Operator\n";
                     cout<<"-----------------------------------------------------\n";
                     login="berhasil";
                    
        }
        
        if(login != "berhasil"){
            cout<<"Anda Telah 3x Salah Login.\n"; 
            cout<<"Akun Anda Akan Diblokir\n";
            cout<<"Silahkan Hubungi paralel.word@mail.studioword.ac.id untuk Membuka Blokir\n"; 
            cout<<"-----------------------------------------------\n";}  
            
    return 0;
}





