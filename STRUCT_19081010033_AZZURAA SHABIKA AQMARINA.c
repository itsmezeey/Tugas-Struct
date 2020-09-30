#include <stdio.h>

struct daftar_mahasiswa{
	char nama[50];
	int npm;
};
typedef struct daftar_mahasiswa daftar_mahasiswa;

int main() {
	int a,b;
	daftar_mahasiswa list[a];
	
	printf("Masukkan Jumlah Mahasiswa : ");
	scanf(" %d",&a);
	
	for(b=0;b<a;b++){
		printf("\nMahasiswa ke - %d\n",b+1);
		printf("\t- Nama Mahasiswa\t: ");
		scanf(" %[^\n]%*c",&list[b].nama);
		printf("\t- NPM Mahasiswa\t: ");
		scanf("%d",&list[b].npm);
	}
		printf("\nMahasiswa yang berhasil didata \n");
	
	for(b=0;b<a;b++){
		printf("%d. \t%s = \t%d \n",b+1,list[b].nama,list[b].npm);
	}
		printf("\nSelesai");
		
	return 0;
}
