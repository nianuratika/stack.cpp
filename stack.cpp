// nia nur atika 1817051015


#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<windows.h>
#define max 20
using namespace std;

struct tong
{
        int top;
        char tmp[20][max];
}
tong;
       
void push (char sampah[20]);
void pop();
void awal();
int isEmpty();
int isFull();

int main()
{
        int pilih;
        char sampah[20];
        string i;
        awal();
        do
        {
                       system("cls");
                        cout<<"\n\t--------- Program Stack --------\n";
                        cout<<"\n\t--------- Tugas Petruk --------\n";
                        cout<<"\n\t----- Tumpukan Tong Sampah -----\n\n";
                        cout<<" 1. PUSH(Simpan)"<<endl;
                        cout<<" 2. POP(Ambil)"<<endl;
                        cout<<" 3. EXIT(Keluar)"<<endl;
                        cout<<"___________________________________________________________________\n\n";
                       
                        if (!isEmpty())
                        {
                                for(int i = tong.top; i>=0; i--)
                                {
                                        cout<<"["<<tong.tmp[i]<<"]"<<endl;     
                                }
       
                        }
                        else
                        {
                                cout<<"[ tong sampah kosong ]";
                        }
                        cout<<"\nMasukan Pilihan : ";
                        cin>>pilih;
                        switch (pilih)
                        {
                                case 1:
                                        cout<<"Buang sampah : ";
                                        cin>>sampah;
                                        push(sampah);
                                        break;
                                case 2:
                                        pop ();
                                        break;
                                case 3:
                                        cout<<"Tekan enter untuk keluar : ";
                                        break;
                                        default:
                                                cout<<"ERROR!";
                                                break;
                                               
                        }
                }
        while (pilih!=3);
       
}
void push (char sampah[20])
{
        if (!isFull())
        {
                tong.top = tong.top+1;
                strcpy(tong.tmp[tong.top],sampah);
        }
        else
        cout<<"isi tong sampah penuh";
}
void pop ()
{
        if (!isEmpty())
        {
                tong.top--;
                cout<<"Sampah pada tumpukan ke- "<<tong.top+2<<"sudah diambil";
        }
        else
        cout<<"Sampah dalam tong kosong";
}
void awal()
{
        tong.top = -1;
}
int isEmpty()
{
        if (tong.top==-1)
                return 1;
                else
                return 0;
}
int isFull()
{
        if (tong.top == max-1)
                return 1;
                else

                return 0;
}
