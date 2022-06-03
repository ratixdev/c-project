#include <stdio.h>
int main() {
	int amt, total;
	printf("Jumlah Uang: ");
	scanf("%d",&amt);


    printf("---------------------------\n");
	printf("Pecahan            Jumlah\n");
    printf("---------------------------\n");
    
    total = (int)amt/500000;
	printf("500.000 %10d\n", total);
	amt = amt-(total*500000);
	
	total = (int)amt/100000;
	printf("100.000 %10d\n", total);
	amt = amt-(total*100000);
	
	total = (int)amt/50000;
	printf(" 50.000 %10d\n", total);
	amt = amt-(total*50000);

    total = (int)amt/20000;
	printf(" 20.000 %10d\n", total);
	amt = amt-(total*20000);

	total = (int)amt/10000;
	printf(" 10.000 %10d\n", total);
	amt = amt-(total*10000);

	total = (int)amt/5000;
	printf("  5.000 %10d\n", total);
	amt = amt-(total*5000);

	total = (int)amt/2000;
	printf("  2.000 %10d\n", total);
	amt = amt-(total*2000);

	total = (int)amt/1000;
	printf("  1.000 %10d\n", total);
	amt = amt-(total*1000);

	total = (int)amt/500;
	printf("    500 %10d\n", total);
	amt = amt-(total*500);

	total = (int)amt/200;
	printf("    200 %10d\n", total);
	amt = amt-(total*200);

    total = (int)amt/100;
	printf("    100 %10d\n", total);
	amt = amt-(total*100);

	total = (int)amt/50;
	printf("     50 %10d\n", total);
	amt = amt-(total*50);

    total = (int)amt/10;
	printf("     10 %10d\n", total);
	amt = amt-(total*10);

	total = (int)amt/5;
	printf("      5 %10d\n", total);
	amt = amt-(total*5);

	total = (int)amt/1;
	printf("      1 %10d\n", total);
	amt = amt-(total*1);
	
	return 0;
}