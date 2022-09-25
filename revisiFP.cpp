/* Nama Anggota :
 * 1. Dhina Bastari Rochim	21.12.2132
 * 2. Ika Purwanti			21.12.2138
 * 3. Desy Ikasari			21.12.2141
 * 4. Abdi Maulana			21.12.2160
 * Kelas : 21 S1SI 05
 */

#include <iostream>
using namespace std;

int pinjam();
void riwayat();

int stok [10]= {1,2,3,4,5,6,7,8,9,10};
string nama, alamat, lagi, driver;
int  pilmobil, durasi, jaminan, harga_satuan, harga_driver, total, stokup;
char nt[20];

const int nama_mobil=10;
const int harga=2;				

main(){
	
		string daftar [nama_mobil][harga] = {
		{"1. Honda Jazz" , "Rp. 350.000,-"},
		{"2. Kijang Innova" , "Rp. 400.000,-"},
		{"3. Daihatsu Xenia " , "Rp. 300.000,-"},
		{"4. Suzuki Ertiga" , "Rp. 350.000,-"},
		{"5. Toyota Avanza" , "Rp. 300.000,-"},
		{"6. Honda CR-V" , "Rp. 450.000,-"},
		{"7. Toyota Alphard" , "Rp. 700.000,-"},
		{"8. Toyota Fortuner" , "Rp. 600.000,-"},
		{"9. Toyota Rush" , "Rp. 500.000,-"},
		{"10. Nissan Xtrail" , "Rp. 550.000,-"}
	};
	
	cout<<"	Daftar Sewa Mobil	"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"|    Jenis Mobil      |   Harga / hari   |  Stok  |"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"| "<<daftar[0][0]<< "       | "<<daftar[0][1]<< "    |    "<<stok[0]<<"   |"<<endl;
	cout<<"| "<<daftar[1][0]<< "    | "<<daftar[1][1]<< "    |    "<<stok[1]<<"   |"<<endl;
	cout<<"| "<<daftar[2][0]<< "  | "<<daftar[2][1]<< "    |    "<<stok[2]<<"   |"<<endl;
	cout<<"| "<<daftar[3][0]<< "    | "<<daftar[3][1]<< "    |    "<<stok[3]<<"   |"<<endl;
	cout<<"| "<<daftar[4][0]<< "    | "<<daftar[4][1]<< "    |    "<<stok[4]<<"   |"<<endl;
	cout<<"| "<<daftar[5][0]<< "       | "<<daftar[5][1]<< "    |    "<<stok[5]<<"   |"<<endl;
	cout<<"| "<<daftar[6][0]<< "   | "<<daftar[6][1]<< "    |    "<<stok[6]<<"   |"<<endl;
	cout<<"| "<<daftar[7][0]<< "  | "<<daftar[7][1]<< "    |    "<<stok[7]<<"   |"<<endl;
	cout<<"| "<<daftar[8][0]<< "      | "<<daftar[8][1]<< "    |    "<<stok[8]<<"   |"<<endl;
	cout<<"| "<<daftar[9][0]<< "   | "<<daftar[9][1]<< "    |    "<<stok[9]<<"  |"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<endl;
	
	do{

		pinjam();
		riwayat();
		
		cout<<"Apakah Anda Ingin Menyewa Lagi? (iya/tidak) : ";
		cin>>lagi;
		cout<<endl;
		cout<<endl;
		if (lagi == "iya" || lagi =="Iya"){
			if(pilmobil ==1){
				stokup = stok[0]-1;
				cout<<"	Daftar Sewa Mobil	"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"|    Jenis Mobil      |   Harga / hari   |  Stok  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"| "<<daftar[0][0]<< "       | "<<daftar[0][1]<< "    |    "<<stokup<<"   |"<<endl;
				cout<<"| "<<daftar[1][0]<< "    | "<<daftar[1][1]<< "    |    "<<stok[1]<<"   |"<<endl;
				cout<<"| "<<daftar[2][0]<< "  | "<<daftar[2][1]<< "    |    "<<stok[2]<<"   |"<<endl;
				cout<<"| "<<daftar[3][0]<< "    | "<<daftar[3][1]<< "    |    "<<stok[3]<<"   |"<<endl;
				cout<<"| "<<daftar[4][0]<< "    | "<<daftar[4][1]<< "    |    "<<stok[4]<<"   |"<<endl;
				cout<<"| "<<daftar[5][0]<< "       | "<<daftar[5][1]<< "    |    "<<stok[5]<<"   |"<<endl;
				cout<<"| "<<daftar[6][0]<< "   | "<<daftar[6][1]<< "    |    "<<stok[6]<<"   |"<<endl;
				cout<<"| "<<daftar[7][0]<< "  | "<<daftar[7][1]<< "    |    "<<stok[7]<<"   |"<<endl;
				cout<<"| "<<daftar[8][0]<< "      | "<<daftar[8][1]<< "    |    "<<stok[8]<<"   |"<<endl;
				cout<<"| "<<daftar[9][0]<< "   | "<<daftar[9][1]<< "    |    "<<stok[9]<<"  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<endl;
			}
			else if (pilmobil == 2){
				stokup = stok[1]-1;
				cout<<"	Daftar Sewa Mobil	"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"|    Jenis Mobil      |   Harga / hari   |  Stok  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"| "<<daftar[0][0]<< "       | "<<daftar[0][1]<< "    |    "<<stok[0]<<"   |"<<endl;
				cout<<"| "<<daftar[1][0]<< "    | "<<daftar[1][1]<< "    |    "<<stokup<<"   |"<<endl;
				cout<<"| "<<daftar[2][0]<< "  | "<<daftar[2][1]<< "    |    "<<stok[2]<<"   |"<<endl;
				cout<<"| "<<daftar[3][0]<< "    | "<<daftar[3][1]<< "    |    "<<stok[3]<<"   |"<<endl;
				cout<<"| "<<daftar[4][0]<< "    | "<<daftar[4][1]<< "    |    "<<stok[4]<<"   |"<<endl;
				cout<<"| "<<daftar[5][0]<< "       | "<<daftar[5][1]<< "    |    "<<stok[5]<<"   |"<<endl;
				cout<<"| "<<daftar[6][0]<< "   | "<<daftar[6][1]<< "    |    "<<stok[6]<<"   |"<<endl;
				cout<<"| "<<daftar[7][0]<< "  | "<<daftar[7][1]<< "    |    "<<stok[7]<<"   |"<<endl;
				cout<<"| "<<daftar[8][0]<< "      | "<<daftar[8][1]<< "    |    "<<stok[8]<<"   |"<<endl;
				cout<<"| "<<daftar[9][0]<< "   | "<<daftar[9][1]<< "    |    "<<stok[9]<<"  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<endl;	
			}
			else if (pilmobil == 3){
				stokup = stok[2]-1;
				cout<<"	Daftar Sewa Mobil	"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"|    Jenis Mobil      |   Harga / hari   |  Stok  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"| "<<daftar[0][0]<< "       | "<<daftar[0][1]<< "    |    "<<stok[0]<<"   |"<<endl;
				cout<<"| "<<daftar[1][0]<< "    | "<<daftar[1][1]<< "    |    "<<stok[1]<<"   |"<<endl;
				cout<<"| "<<daftar[2][0]<< "  | "<<daftar[2][1]<< "    |    "<<stokup<<"   |"<<endl;
				cout<<"| "<<daftar[3][0]<< "    | "<<daftar[3][1]<< "    |    "<<stok[3]<<"   |"<<endl;
				cout<<"| "<<daftar[4][0]<< "    | "<<daftar[4][1]<< "    |    "<<stok[4]<<"   |"<<endl;
				cout<<"| "<<daftar[5][0]<< "       | "<<daftar[5][1]<< "    |    "<<stok[5]<<"   |"<<endl;
				cout<<"| "<<daftar[6][0]<< "   | "<<daftar[6][1]<< "    |    "<<stok[6]<<"   |"<<endl;
				cout<<"| "<<daftar[7][0]<< "  | "<<daftar[7][1]<< "    |    "<<stok[7]<<"   |"<<endl;
				cout<<"| "<<daftar[8][0]<< "      | "<<daftar[8][1]<< "    |    "<<stok[8]<<"   |"<<endl;
				cout<<"| "<<daftar[9][0]<< "   | "<<daftar[9][1]<< "    |    "<<stok[9]<<"  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<endl;	
			}
			else if (pilmobil == 4){
				stokup = stok[3]-1;
				cout<<"	Daftar Sewa Mobil	"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"|    Jenis Mobil      |   Harga / hari   |  Stok  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"| "<<daftar[0][0]<< "       | "<<daftar[0][1]<< "    |    "<<stok[0]<<"   |"<<endl;
				cout<<"| "<<daftar[1][0]<< "    | "<<daftar[1][1]<< "    |    "<<stok[1]<<"   |"<<endl;
				cout<<"| "<<daftar[2][0]<< "  | "<<daftar[2][1]<< "    |    "<<stok[2]<<"   |"<<endl;
				cout<<"| "<<daftar[3][0]<< "    | "<<daftar[3][1]<< "    |    "<<stokup<<"   |"<<endl;
				cout<<"| "<<daftar[4][0]<< "    | "<<daftar[4][1]<< "    |    "<<stok[4]<<"   |"<<endl;
				cout<<"| "<<daftar[5][0]<< "       | "<<daftar[5][1]<< "    |    "<<stok[5]<<"   |"<<endl;
				cout<<"| "<<daftar[6][0]<< "   | "<<daftar[6][1]<< "    |    "<<stok[6]<<"   |"<<endl;
				cout<<"| "<<daftar[7][0]<< "  | "<<daftar[7][1]<< "    |    "<<stok[7]<<"   |"<<endl;
				cout<<"| "<<daftar[8][0]<< "      | "<<daftar[8][1]<< "    |    "<<stok[8]<<"   |"<<endl;
				cout<<"| "<<daftar[9][0]<< "   | "<<daftar[9][1]<< "    |    "<<stok[9]<<"  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<endl;	
			}
			else if (pilmobil == 5){
				stokup = stok[4]-1;
				cout<<"	Daftar Sewa Mobil	"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"|    Jenis Mobil      |   Harga / hari   |  Stok  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"| "<<daftar[0][0]<< "       | "<<daftar[0][1]<< "    |    "<<stok[0]<<"   |"<<endl;
				cout<<"| "<<daftar[1][0]<< "    | "<<daftar[1][1]<< "    |    "<<stok[1]<<"   |"<<endl;
				cout<<"| "<<daftar[2][0]<< "  | "<<daftar[2][1]<< "    |    "<<stok[2]<<"   |"<<endl;
				cout<<"| "<<daftar[3][0]<< "    | "<<daftar[3][1]<< "    |    "<<stok[3]<<"   |"<<endl;
				cout<<"| "<<daftar[4][0]<< "    | "<<daftar[4][1]<< "    |    "<<stokup<<"   |"<<endl;
				cout<<"| "<<daftar[5][0]<< "       | "<<daftar[5][1]<< "    |    "<<stok[5]<<"   |"<<endl;
				cout<<"| "<<daftar[6][0]<< "   | "<<daftar[6][1]<< "    |    "<<stok[6]<<"   |"<<endl;
				cout<<"| "<<daftar[7][0]<< "  | "<<daftar[7][1]<< "    |    "<<stok[7]<<"   |"<<endl;
				cout<<"| "<<daftar[8][0]<< "      | "<<daftar[8][1]<< "    |    "<<stok[8]<<"   |"<<endl;
				cout<<"| "<<daftar[9][0]<< "   | "<<daftar[9][1]<< "    |    "<<stok[9]<<"  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<endl;	
			}
			else if (pilmobil == 6){
				stokup = stok[5]-1;
				cout<<"	Daftar Sewa Mobil	"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"|    Jenis Mobil      |   Harga / hari   |  Stok  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"| "<<daftar[0][0]<< "       | "<<daftar[0][1]<< "    |    "<<stok[0]<<"   |"<<endl;
				cout<<"| "<<daftar[1][0]<< "    | "<<daftar[1][1]<< "    |    "<<stok[1]<<"   |"<<endl;
				cout<<"| "<<daftar[2][0]<< "  | "<<daftar[2][1]<< "    |    "<<stok[2]<<"   |"<<endl;
				cout<<"| "<<daftar[3][0]<< "    | "<<daftar[3][1]<< "    |    "<<stok[3]<<"   |"<<endl;
				cout<<"| "<<daftar[4][0]<< "    | "<<daftar[4][1]<< "    |    "<<stok[4]<<"   |"<<endl;
				cout<<"| "<<daftar[5][0]<< "       | "<<daftar[5][1]<< "    |    "<<stokup<<"   |"<<endl;
				cout<<"| "<<daftar[6][0]<< "   | "<<daftar[6][1]<< "    |    "<<stok[6]<<"   |"<<endl;
				cout<<"| "<<daftar[7][0]<< "  | "<<daftar[7][1]<< "    |    "<<stok[7]<<"   |"<<endl;
				cout<<"| "<<daftar[8][0]<< "      | "<<daftar[8][1]<< "    |    "<<stok[8]<<"   |"<<endl;
				cout<<"| "<<daftar[9][0]<< "   | "<<daftar[9][1]<< "    |    "<<stok[9]<<"  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<endl;	
			}
			else if (pilmobil == 7){
				stokup = stok[6]-1;
				cout<<"	Daftar Sewa Mobil	"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"|    Jenis Mobil      |   Harga / hari   |  Stok  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"| "<<daftar[0][0]<< "       | "<<daftar[0][1]<< "    |    "<<stok[0]<<"   |"<<endl;
				cout<<"| "<<daftar[1][0]<< "    | "<<daftar[1][1]<< "    |    "<<stok[1]<<"   |"<<endl;
				cout<<"| "<<daftar[2][0]<< "  | "<<daftar[2][1]<< "    |    "<<stok[2]<<"   |"<<endl;
				cout<<"| "<<daftar[3][0]<< "    | "<<daftar[3][1]<< "    |    "<<stok[3]<<"   |"<<endl;
				cout<<"| "<<daftar[4][0]<< "    | "<<daftar[4][1]<< "    |    "<<stok[4]<<"   |"<<endl;
				cout<<"| "<<daftar[5][0]<< "       | "<<daftar[5][1]<< "    |    "<<stok[5]<<"   |"<<endl;
				cout<<"| "<<daftar[6][0]<< "   | "<<daftar[6][1]<< "    |    "<<stokup<<"   |"<<endl;
				cout<<"| "<<daftar[7][0]<< "  | "<<daftar[7][1]<< "    |    "<<stok[7]<<"   |"<<endl;
				cout<<"| "<<daftar[8][0]<< "      | "<<daftar[8][1]<< "    |    "<<stok[8]<<"   |"<<endl;
				cout<<"| "<<daftar[9][0]<< "   | "<<daftar[9][1]<< "    |    "<<stok[9]<<"  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<endl;	
			}
			else if (pilmobil == 8){
				stokup = stok[7]-1;
				cout<<"	Daftar Sewa Mobil	"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"|    Jenis Mobil      |   Harga / hari   |  Stok  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"| "<<daftar[0][0]<< "       | "<<daftar[0][1]<< "    |    "<<stok[0]<<"   |"<<endl;
				cout<<"| "<<daftar[1][0]<< "    | "<<daftar[1][1]<< "    |    "<<stok[1]<<"   |"<<endl;
				cout<<"| "<<daftar[2][0]<< "  | "<<daftar[2][1]<< "    |    "<<stok[2]<<"   |"<<endl;
				cout<<"| "<<daftar[3][0]<< "    | "<<daftar[3][1]<< "    |    "<<stok[3]<<"   |"<<endl;
				cout<<"| "<<daftar[4][0]<< "    | "<<daftar[4][1]<< "    |    "<<stok[4]<<"   |"<<endl;
				cout<<"| "<<daftar[5][0]<< "       | "<<daftar[5][1]<< "    |    "<<stok[5]<<"   |"<<endl;
				cout<<"| "<<daftar[6][0]<< "   | "<<daftar[6][1]<< "    |    "<<stok[6]<<"   |"<<endl;
				cout<<"| "<<daftar[7][0]<< "  | "<<daftar[7][1]<< "    |    "<<stokup<<"   |"<<endl;
				cout<<"| "<<daftar[8][0]<< "      | "<<daftar[8][1]<< "    |    "<<stok[8]<<"   |"<<endl;
				cout<<"| "<<daftar[9][0]<< "   | "<<daftar[9][1]<< "    |    "<<stok[9]<<"  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<endl;	
			}
			else if (pilmobil == 9){
				stokup = stok[8]-1;
				cout<<"	Daftar Sewa Mobil	"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"|    Jenis Mobil      |   Harga / hari   |  Stok  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"| "<<daftar[0][0]<< "       | "<<daftar[0][1]<< "    |    "<<stok[0]<<"   |"<<endl;
				cout<<"| "<<daftar[1][0]<< "    | "<<daftar[1][1]<< "    |    "<<stok[1]<<"   |"<<endl;
				cout<<"| "<<daftar[2][0]<< "  | "<<daftar[2][1]<< "    |    "<<stok[2]<<"   |"<<endl;
				cout<<"| "<<daftar[3][0]<< "    | "<<daftar[3][1]<< "    |    "<<stok[3]<<"   |"<<endl;
				cout<<"| "<<daftar[4][0]<< "    | "<<daftar[4][1]<< "    |    "<<stok[4]<<"   |"<<endl;
				cout<<"| "<<daftar[5][0]<< "       | "<<daftar[5][1]<< "    |    "<<stok[5]<<"   |"<<endl;
				cout<<"| "<<daftar[6][0]<< "   | "<<daftar[6][1]<< "    |    "<<stok[6]<<"   |"<<endl;
				cout<<"| "<<daftar[7][0]<< "  | "<<daftar[7][1]<< "    |    "<<stok[7]<<"   |"<<endl;
				cout<<"| "<<daftar[8][0]<< "      | "<<daftar[8][1]<< "    |    "<<stokup<<"   |"<<endl;
				cout<<"| "<<daftar[9][0]<< "   | "<<daftar[9][1]<< "    |    "<<stok[9]<<"  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<endl;	
			}
			else if (pilmobil == 10){
				stokup = stok[9]-1;
				cout<<"	Daftar Sewa Mobil	"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"|    Jenis Mobil      |   Harga / hari   |  Stok  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<"| "<<daftar[0][0]<< "       | "<<daftar[0][1]<< "    |    "<<stok[0]<<"   |"<<endl;
				cout<<"| "<<daftar[1][0]<< "    | "<<daftar[1][1]<< "    |    "<<stok[1]<<"   |"<<endl;
				cout<<"| "<<daftar[2][0]<< "  | "<<daftar[2][1]<< "    |    "<<stok[2]<<"   |"<<endl;
				cout<<"| "<<daftar[3][0]<< "    | "<<daftar[3][1]<< "    |    "<<stok[3]<<"   |"<<endl;
				cout<<"| "<<daftar[4][0]<< "    | "<<daftar[4][1]<< "    |    "<<stok[4]<<"   |"<<endl;
				cout<<"| "<<daftar[5][0]<< "       | "<<daftar[5][1]<< "    |    "<<stok[5]<<"   |"<<endl;
				cout<<"| "<<daftar[6][0]<< "   | "<<daftar[6][1]<< "    |    "<<stok[6]<<"   |"<<endl;
				cout<<"| "<<daftar[7][0]<< "  | "<<daftar[7][1]<< "    |    "<<stok[7]<<"   |"<<endl;
				cout<<"| "<<daftar[8][0]<< "      | "<<daftar[8][1]<< "    |    "<<stok[8]<<"   |"<<endl;
				cout<<"| "<<daftar[9][0]<< "   | "<<daftar[9][1]<< "    |    "<<stokup<<"  |"<<endl;
				cout<<"---------------------------------------------------"<<endl;
				cout<<endl;	
			}
			
			
			cout<<endl;
		}
	} while (lagi=="iya");{
		cout<<endl;
		cout<<"^^ Terimakasih Telah Melakukan Penyewaan di Perusahaan Kami ^^"<<endl;	
		cout<<"                  Silahkan Datang Kembali"<<endl;
	}	
}

int pinjam(){
	cout<<"Jaminan yang Wajib diserahkan oleh Penyewa : "<<endl;
	cout<<"1. FC KTP"<<endl;
	cout<<"2. FC SIM"<<endl;
	cout<<endl;
	cout<<endl;

	cout<<"IDENTITAS PENYEWA : "<<endl;
	cout<<endl;
	cout<<"Nama		: ";
	cin>>nama;
	cout<<"Alamat		: ";
	cin>>alamat;
	cout<<"Nomor Telepon	: ";
	cin>>nt;
	cout<<"---------------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Inputkan pilihan mobil yang akan di sewa	: ";
	cin>>pilmobil;
	cout<<"Berapa hari anda akan menyewa mobil		: ";
	cin>>durasi;
	cout<<"Apakah anda akan menyewa driver juga (iya/tidak) ? ";
	cin>>driver;
	cout<<"Inputkan Jaminan yang akan anda berikan		: ";
	cin>>jaminan;
	
		if (pilmobil == 1){
			cout<<"Mobil yang anda pilih adalah Honda Jazz"<<endl;
			harga_satuan = 350000;
			cout<<"   ---> harga/hari Rp. 350.000,-";
		}
		else if(pilmobil == 2){
			cout<<"Mobil yang anda pilih adalah Kijang Innova"<<endl;
			harga_satuan = 400000;
			cout<<"   ---> harga/hari Rp. 400.000,-";
		}
		else if(pilmobil == 3){
			cout<<"Mobil yang anda pilih adalah Daihatsu Xenia"<<endl;
			harga_satuan = 300000;
			cout<<"   ---> harga/hari Rp. 300.000,-";
		}
		else if(pilmobil == 4){
			cout<<"Mobil yang anda pilih adalah Suzuki Ertiga"<<endl;
			harga_satuan = 350000;
			cout<<"   ---> harga/hari Rp. 350.000,-";
		}
		else if(pilmobil == 5){
			cout<<"Mobil yang anda pilih adalah Toyota Avanza"<<endl;
			harga_satuan = 300000;
			cout<<"   ---> harga/hari Rp. 300.000,-";
		}
		else if(pilmobil == 6){
			cout<<"Mobil yang anda pilih adalah Honda CR-V"<<endl;
			harga_satuan = 450000;
			cout<<"   ---> harga/hari Rp. 450.000,-";
		}
		else if(pilmobil == 7){
			cout<<"Mobil yang anda pilih adalah Toyota Alphard"<<endl;
			harga_satuan = 700000;
			cout<<"   ---> harga/hari Rp. 700.000,-";
		}
		else if(pilmobil == 8){
			cout<<"Mobil yang anda pilih adalah Toyota Fortuner"<<endl;
			harga_satuan = 600000;
			cout<<"   ---> harga/hari Rp. 600.000";
		}
		else if(pilmobil == 9){
			cout<<"Mobil yang anda pilih adalah Toyota Rush"<<endl;
			harga_satuan = 500000;
			cout<<"   ---> harga/hari Rp. 500.000,-";
		}
		else if(pilmobil == 10){
			cout<<"Mobil yang anda pilih adalah Nissan Xtrail"<<endl;
			harga_satuan = 550000;
			cout<<"   ---> harga/hari Rp. 550.000,-";
		}
		cout<<endl;
		cout<<endl;
	
		if(driver == "iya"){
			cout<<"Anda juga menyewa Driver"<<endl;
			harga_driver = 350000;
			cout<<"   ---> harga/hari Rp. 350.000,-"<<endl;
		}
		else{
			cout<<"Anda tidak menyewa Driver"<<endl;
			harga_driver = 0;
		}
		cout<<endl;
		total = (durasi*harga_satuan) + (durasi*harga_driver);
	
	cout<<"Total bayar = Rp. "<<total;
	cout<<endl;
	cout<<endl;
	
	return total;
}

void riwayat(){cout<<"---------------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"-------------------------------------"<<endl;
	cout<<"|   	  RIWAYAT PENYEWAAN         |"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"| Nama            | "<<nama<<"            |"<<endl;
	cout<<"| Alamat          | "<<alamat<<"           |"<<endl;
	cout<<"| No Telp         | "<<nt<<"    |"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"| Jaminan         | ";
	if(jaminan == 1){
		cout<<"FC KTP";
	} else {
		cout<<"FC SIM";
	} cout<<"          |"<<endl;
	cout<<"| Jenis Mobil     | ";
	if(pilmobil == 1){
		cout<<"Honda Jazz";
	}else if(pilmobil == 2){
		cout<<"Kijang Innova";
	}else if(pilmobil == 3){
		cout<<"Daihatsu Xenia";
	}else if(pilmobil == 4){
		cout<<"Suzuki Ertiga";
	}else if(pilmobil == 5){
		cout<<"Toyota Avanza";
	}else if(pilmobil == 6){
		cout<<"Honda CR-V";
	}else if(pilmobil == 7){
		cout<<"Toyota Alphard";
	}else if(pilmobil == 8){
		cout<<"Toyota Fortuner";
	}else if(pilmobil == 9){
		cout<<"Toyota Rush";
	}else if(pilmobil == 10){
		cout<<"Nissan Xtrail";
	}cout<<"  |"<<endl;
	cout<<"| Durasi          | "<<durasi<<" hari          |"<<endl;
	cout<<"| Driver          | "<<driver<<"             |"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"| Harga satuan    | Rp. "<<harga_satuan<<"      |"<<endl;
	cout<<"| Harga driver    | Rp. "<<harga_driver<<"      |"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"| Total           | Rp. "<<total<<"     |"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<endl;
}
