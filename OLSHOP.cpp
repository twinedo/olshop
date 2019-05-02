#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cstdlib>
#include<time.h>
using namespace std;
int kode()
{
    srand(time(0));
    for (int x=0;x<=5;x++)
        cout<<3+(rand()%9)<<" ";
    return 0;

}

main ()
{
    int masukan, baju, celana, sepatu, tas, aksesoris, total_baju, total_kemeja, total_levis, total_training;
    int jumlah, total_boots, total_sneakers, total_ransel, total_selempang, akses, total_jam, total_topi;
    char pil_belanja_lagi;
menu :
    system("cls");
    cout<<"#########################"<<endl;
    cout<<"### Selamat Datang di ###"<<endl;
    cout<<"##       MOMOLAND      ##"<<endl;
    cout<<"###       OLSHOP      ###"<<endl;
    cout<<"#########################"<<endl;
    cout<<"\n";
    cout<<"(Happy Shopping)"<<endl;
    cout<<" ============="<<endl;
	cout<<"|1.| Baju     |"<<endl;
    cout<<"|2.| Celana   |"<<endl;
    cout<<"|3.| Sepatu   |"<<endl;
    cout<<"|4.| Tas      |"<<endl;
    cout<<"|5.| Aksesoris|"<<endl;
    cout<<" ============="<<endl;
    cout<<"Masukan Pilihan Anda (1-5) : ";cin>>masukan;
    switch(masukan){
case 1:
	baju:
    //system("cls");
    cout<<"\n"<<endl;
    cout<<"================================="<<endl;
    cout<<"       Anda Memilih Baju         "<<endl;
    cout<<"================================="<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"|1.| Baju Polo   | Rp.  90000/pcs|"<<endl;
    cout<<"|2.| Baju Kemeja | Rp. 100000/pcs|"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Masukan Pilihan Baju Anda (1/2) : ";cin>>baju;
    cout<<"\n"<<endl;
    
    if(baju==1){
    //case 1 :
    	cout<<"-------------------"<<endl;
        cout<<"Baju Polo Rp. 90000"<<endl;
        cout<<"ongkir    Rp. 30000"<<endl;
        cout<<"-------------------"<<endl;
        cout<<"Jumlah barang   = ";cin>>jumlah;
        total_baju = (90000 * jumlah) + 30000;
        cout<<"***********************************"<<endl;
        cout<<"Total pembayaran anda adalah Rp. "<<total_baju<<endl;
        cout<<"***********************************"<<endl;
		cout<<"\n";
        cout<<"Tunjukan kode voucher ini ke kasir \n";
        cout<<kode();
        cout<<"\n";
        cout<<"Apakah anda ingin memesan kembali y/t??? ";cin>>pil_belanja_lagi;
        system("cls");
        cout<<"TERIMAKASIH ATAS PEMBELIAN BARANG";
        cout<<"\n";
        if (pil_belanja_lagi=='y'){
        goto menu;}
        else{
            exit(0);
        }
        break;
	}
    else if(baju==2){
		cout<<"----------------------"<<endl;
        cout<<"Baju Kemeja Rp. 100000"<<endl;
        cout<<"ongkir      Rp.  30000"<<endl;
        cout<<"----------------------"<<endl;
        cout<<"Jumlah barang = ";cin>>jumlah;
        total_kemeja = (100000 * jumlah) + 30000;
        cout<<"***********************************"<<endl;
        cout<<"Total pembayaran anda adalah Rp. "<<total_kemeja<<endl;
        cout<<"***********************************"<<endl;
        cout<<"\n";
        cout<<"Tunjukan kode voucher ini ke kasir \n";
        cout<<kode();
        cout<<"\n";
        cout<<"Apakah anda ingin memesan kembali y/t??? ";cin>>pil_belanja_lagi;
        system("cls");
        cout<<"TERIMAKASIH ATAS PEMBELIAN BARANG";
        cout<<"\n";
        if (pil_belanja_lagi=='y'){
        goto menu;}
        else{
            exit(0);
        }
    }else
    //system("cls");
	cout<<" ================================="<<endl;
    cout<<"|Silahkan masukan pilihan 1 atau 2|"<<endl;
    cout<<" ================================="<<endl;
	goto baju;  
    //BATAS CASE 1
    
    
case 2:
    //system("cls");
    celana:
    cout<<"\n"<<endl;
    cout<<"====================================="<<endl;
    cout<<"         Anda Memilih Celana         "<<endl;
    cout<<"====================================="<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"|1.| Celana Levis    | Rp. 350000/pcs|"<<endl;
    cout<<"|2.| Celana Training | Rp.  80000/pcs|"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Masukan pilihan celana anda (1/2) : ";cin>>celana;
    cout<<"\n"<<endl;
    if(celana==1){
    //case 1 :
    	cout<<"-----------------------"<<endl;
        cout<<"Celana Levis Rp. 350000"<<endl;
        cout<<"ongkir       Rp.  30000"<<endl;
        cout<<"-----------------------"<<endl;
        cout<<"Jumlah barang = ";cin>>jumlah;
        total_levis = (350000 * jumlah) + 30000;
        cout<<"*********************************"<<endl;
        cout<<"Total pembayaran anda adalah Rp. "<<total_levis<<endl;
        cout<<"*********************************"<<endl;
        cout<<"\n";
        cout<<"Tunjukan kode voucher ini ke kasir \n";
        cout<<kode();
        cout<<"\n";
        cout<<"Apakah anda ingin memesan kembali y/t??? ";cin>>pil_belanja_lagi;
        system("cls");
        cout<<"TERIMAKASIH ATAS PEMBELIAN BARANG";
        cout<<"\n";
        if (pil_belanja_lagi=='y'){
        goto menu;}
        else{
            exit(0);
        }
        break;
    }else if(celana==2){
    	cout<<"-------------------------"<<endl;
        cout<<"Celana Training Rp. 80000"<<endl;
        cout<<"ongkir          Rp. 30000"<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"Jumlah barang= ";cin>>jumlah;
        total_training = (80000 * jumlah) + 30000;
        cout<<"*********************************"<<endl;
        cout<<"Total pembayaran anda adalah Rp. "<<total_training<<endl;
        cout<<"*********************************"<<endl;
        cout<<"\n";
        cout<<"Tunjukan kode voucher ini ke kasir \n";
        cout<<kode();
        cout<<"\n";
        cout<<"Apakah anda ingin memesan kembali y/t??? ";cin>>pil_belanja_lagi;
        system("cls");
        cout<<"TERIMAKASIH ATAS PEMBELIAN BARANG";
        cout<<"\n";
        if (pil_belanja_lagi=='y'){
        goto menu;}
        else{
            exit(0);
        }
   	}else
   	//system("cls");
	cout<<" ================================="<<endl;
    cout<<"|Silahkan masukan pilihan 1 atau 2|"<<endl;
    cout<<" ================================="<<endl;
	goto celana;
    //BATAS CASE 2
    
case 3:
	sepatu:
    //system("cls");
    cout<<"\n"<<endl;
    cout<<"====================================="<<endl;
    cout<<"         Anda Memilih Sepatu         "<<endl;
    cout<<"====================================="<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"|1.| Sepatu Boots   | Rp. 800000/pcs|"<<endl;
    cout<<"|2.| Sepatu Sneakers| Rp. 500000/pcs|"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Masukan pilihan baju anda (1/2) : ";cin>>sepatu;
    cout<<"\n";
    if(sepatu==1){
    	cout<<"-----------------------"<<endl;
        cout<<"Sepatu Boots Rp. 800000"<<endl;
        cout<<"ongkir       Rp.  30000"<<endl;
        cout<<"-----------------------"<<endl;
        cout<<"Jumlah barang= ";cin>>jumlah;
        total_boots = (800000 * jumlah) + 30000;
        cout<<"*********************************"<<endl;
        cout<<"Total pembayaran anda adalah Rp. "<<total_boots<<endl;
        cout<<"*********************************"<<endl;
        cout<<"\n";
        cout<<"Tunjukan kode voucher ini ke kasir \n";
        cout<<kode();
        cout<<"\n";
        cout<<"Apakah anda ingin memesan kembali y/t??? ";cin>>pil_belanja_lagi;
        system("cls");
        cout<<"TERIMAKASIH ATAS PEMBELIAN BARANG";
        cout<<"\n";
        if (pil_belanja_lagi=='y'){
        goto menu;}
        else{
            exit(0);
        }
        break;
    }else if(sepatu==2){
    	cout<<"--------------------------"<<endl;
        cout<<"Sepatu Sneakers Rp. 500000"<<endl;
        cout<<"ongkir          Rp.  30000"<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"Jumlah barang= ";cin>>jumlah;
        total_sneakers = (500000 * jumlah) + 30000;
        cout<<"*********************************"<<endl;
        cout<<"Total pembayaran anda adalah Rp. "<<total_sneakers<<endl;
        cout<<"*********************************"<<endl;
        cout<<"\n";
        cout<<"Tunjukan kode voucher ini ke kasir \n";
        cout<<kode();
        cout<<"\n";
        cout<<"Apakah anda ingin memesan kembali y/t??? ";cin>>pil_belanja_lagi;
        system("cls");
        cout<<"TERIMAKASIH ATAS PEMBELIAN BARANG";
        cout<<"\n";
        if (pil_belanja_lagi=='y'){
        goto menu;}
        else{
            exit(0);
        }
    break;
    }else
    //system("cls");
    cout<<" ================================="<<endl;
    cout<<"|Silahkan masukan pilihan 1 atau 2|"<<endl;
    cout<<" ================================="<<endl;
	goto sepatu;
    //BATAS CASE 3
    
case 4:
	tas:
    //system("cls");
    cout<<"\n"<<endl;
    cout<<"============================"<<endl;
    cout<<"      Anda Memilih Tas      "<<endl;
    cout<<"============================"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"|1.|Tas Ransel  |Rp. 1000000|"<<endl;
    cout<<"|2.|Tas Slempang|Rp.  100000|"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Masukan pilihan Tas anda (1/2) : ";cin>>tas;
    cout<<"\n";
     
    if(tas==1){
    	cout<<"----------------------"<<endl;
        cout<<"Tas Ransel Rp. 1000000"<<endl;
        cout<<"ongkir     Rp.   30000"<<endl;
        cout<<"----------------------"<<endl;
        cout<<"Jumlah barang= ";cin>>jumlah;
        total_ransel = (1000000 * jumlah) + 30000;
        cout<<"*********************************"<<endl;
        cout<<"Total pembayaran anda adalah Rp. "<<total_ransel<<endl;
        cout<<"*********************************"<<endl;
        cout<<"\n";
        cout<<"Tunjukan kode voucher ini ke kasir \n";
        cout<<kode();
        cout<<"\n";
        cout<<"Apakah anda ingin memesan kembali y/t??? ";cin>>pil_belanja_lagi;
        system("cls");
        cout<<"TERIMAKASIH ATAS PEMBELIAN BARANG";
        cout<<"\n";
        if (pil_belanja_lagi=='y'){
        goto menu;}
        else{
            exit(0);
        }
        break;
    }else if(tas==2){
    	cout<<"------------------------"<<endl;
        cout<<"Tas Selempang Rp. 100000"<<endl;
        cout<<"ongkir        Rp.  30000"<<endl;
        cout<<"------------------------"<<endl;
        cout<<"Jumlah barang= ";cin>>jumlah;
        total_selempang = (100000 * jumlah) + 30000;
        cout<<"*********************************"<<endl;
        cout<<"Total pembayaran anda adalah Rp. "<<total_selempang<<endl;
        cout<<"*********************************"<<endl;
        cout<<"\n";
        cout<<"Tunjukan kode voucher ini ke kasir \n";
        cout<<kode();
        cout<<"\n";
        cout<<"Apakah anda ingin memesan kembali y/t??? ";cin>>pil_belanja_lagi;
        system("cls");
        cout<<"TERIMAKASIH ATAS PEMBELIAN BARANG";
        cout<<"\n";
        if (pil_belanja_lagi=='y'){
        goto menu;}
        else{
            exit(0);
        }
    }else
    //system("cls");
	cout<<" ================================="<<endl;
    cout<<"|Silahkan masukan pilihan 1 atau 2|"<<endl;
    cout<<" ================================="<<endl;
	goto tas;
    
    //BATASE CASE 4
    
case 5:
	akses:
    //system("cls");
    cout<<"\n"<<endl;
    cout<<"======================"<<endl;
    cout<<"Anda Memilih Aksesoris"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"|1.| Jam |Rp. 800000|"<<endl;
    cout<<"|2.| Topi|Rp. 100000|"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Masukan pilihan baju anda (1/2) : ";cin>>akses;
    cout<<"\n";
    if(akses==1){
    	cout<<"-----------------"<<endl;
        cout<<"Jam    Rp. 800000"<<endl;
        cout<<"ongkir Rp.  30000"<<endl;
        cout<<"-----------------"<<endl;
        cout<<"Jumlah barang= ";cin>>jumlah;
        total_jam = (800000 * jumlah) + 30000;
        cout<<"*********************************"<<endl;
        cout<<"Total pembayaran anda adalah Rp. "<<total_jam<<endl;
        cout<<"*********************************"<<endl;
        cout<<"\n";
        cout<<"Tunjukan kode voucher ini ke kasir \n";
        cout<<kode();
        cout<<"\n";
        cout<<"Apakah anda ingin memesan kembali y/t??? ";cin>>pil_belanja_lagi;
        system("cls");
        cout<<"TERIMAKASIH ATAS PEMBELIAN BARANG";
        cout<<"\n";
        if (pil_belanja_lagi=='y'){
        goto menu;}
        else{
            exit(0);
        }
        break;
    }else if(akses==2){
    	cout<<"-----------------"<<endl;
        cout<<"Topi   Rp. 100000"<<endl;
        cout<<"ongkir Rp.  30000"<<endl;
        cout<<"-----------------"<<endl;
        cout<<"Jumlah barang= ";cin>>jumlah;
        total_topi = (500000 * jumlah) + 30000;
        cout<<"*********************************"<<endl;
        cout<<"Total pembayaran anda adalah Rp. "<<total_topi<<endl;
        cout<<"*********************************"<<endl;
        cout<<"\n";
        cout<<"Tunjukan kode voucher ini ke kasir \n";
        cout<<kode();
        cout<<"\n";
        cout<<"Apakah anda ingin memesan kembali y/t??? ";cin>>pil_belanja_lagi;
        system("cls");
        cout<<"TERIMAKASIH ATAS PEMBELIAN BARANG";
        cout<<"\n";
        if (pil_belanja_lagi=='y'){
        goto menu;}
        else{
            exit(0);
        }
    }else
    //system("cls");
    cout<<" ================================="<<endl;
    cout<<"|Silahkan masukan pilihan 1 atau 2|"<<endl;
    cout<<" ================================="<<endl;
	goto akses;
    //BATAS CASE 5

    default :
        cout<<"\n";
        cout<<"ANDA MENGINPUT ANGKA YANG SALAH!";
        cout<<"\n";
        goto menu;
    }

}
