/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
	
  struct SISWA {
    char NIS[9];
    char Nama[25];
    char Alamat[20];
    char Kota[15];
  };
	
  SISWA A,B;		// Mendeklarasikan variabel A dan B
          		// yang bertipe SISWA

  strcpy(A.NIS, "10299999");            //siswa pertama
  strcpy(A.Nama, "Bimo Haryo Hanggoro");
  strcpy(A.Alamat, "Dago");
  strcpy(A.Kota, "Bandung");
  
  strcpy(B.NIS, "10299997");            //siswa kedua
  strcpy(B.Nama, "Dwi Amelia Puspita");
  strcpy(B.Alamat, "Kopo");
  strcpy(B.Kota, "Bandung");
  
	
  // Menampilkan nilai yang diisikan ke layar 
  cout<<"----------Siswa Pertama----------"<<endl;
  cout<<A.NIS<<endl;    //siswa pertama
  cout<<A.Nama<<endl;
  cout<<A.Alamat<<endl;
  cout<<A.Kota<<endl;
  cout<<"----------Siswa Kedua----------"<<endl;
  cout<<B.NIS<<endl;    //siswa kedua
  cout<<B.Nama<<endl;
  cout<<B.Alamat<<endl;
  cout<<B.Kota<<endl;

  return 0;
}
