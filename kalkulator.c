#include <stdio.h>  
int main()  
{  
    // mendeklarasi variabel lokal 
    char opt;  
    int n1, n2, hasil;   
    float res;  
    printf ("========Kalkulator sederhana========\n");
    printf ("===========2108107010019===========\n");
    printf ("\n");
    printf (" Pilih operator(+, -, *, /)  \n ");  
    scanf ("%c", & opt); // memilih dan menyimpan operator yang digunakan 
    if (opt == '/' )  
    {  
        printf (" Kamu memilih pembagian");  
    }  
    else if (opt == '*')  
    {  
        printf (" Kamu memilih perkalian");  
     }  
       
    else if (opt == '-')  
    {  
        printf (" Kamu memilih pengurangan");  
     }  
        else if (opt == '+')  
    {  
        printf (" Kamu memilih penjumlahan\n");  
     }     
    printf (" \n Masukkan angka pertama: ");  
    scanf(" %d",&n1); // menyimpan nilai pertama kedalam variabel n1
    printf (" Masukkan angka kedua: ");  
    scanf (" %d",&n2); // menyimpan nilai kedua kedalam variabel n2
      
    // switch akan menyesuaikan operator yang digunakan
    switch(opt)
    {  
        case '+':  
            hasil = n1 + n2; // menambahkan dua variabel 
            printf (" Hasil Penjumlahan: adalah %i",hasil);  
            break;  
          
        case '-':  
            hasil = n1 - n2; // operasi kurang
            printf (" Hasil Pengurangan: %i", hasil);  
            break;  
              
        case '*':  
            hasil = n1 * n2; // operasi kali
            printf (" Hasil Perkalian: %i", hasil);  
            break;            
          
        case '/':  
            if (n2 == 0)   // jika user menginput nol, maka akan muncul peringatan, karena nol tidak bisa dibagi  
            {  
                printf (" \n Tidak bisa dibagi dengan nol ");  
                scanf ("%d", &n2);        
                }  
            hasil = n1 / n2; // operasi bagi  
            printf (" Hasil Pembagian: %i", hasil);  
            break;  
        default:  /* ini adalah pesan error utama jika user salah memasukkan perintah */  
            printf (" Terjadi kesalahan, coba periksa fungsi ");               
    }  
    return 0;  
}  