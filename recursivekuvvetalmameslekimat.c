#include <stdio.h>

int us_hesaplama(int sayi, int us) {
    if (us == 0) 
        return 1;
    else if (us == 1) 
        return sayi;
    else 
        return sayi * us_hesaplama(sayi, us - 1);
}

main() {  
    int sonuc, sayi, kuvvet;

    printf("Sirasiyla sayi ve kuvvet girin:\n");
    scanf("%d%d", &sayi, &kuvvet);

    sonuc = us_hesaplama(sayi, kuvvet);
    
    printf("Sonuc: %d\n", sonuc);  
}

