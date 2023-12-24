#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int teklifveren_no;
  double teklif;
} Teklif;

typedef struct {
  int teklifveren_sayisi;
  Teklif* teklifler;
} Arttirma;

void arttirmaBaslat(Arttirma* arttirma, int teklifveren_sayisi) {
  arttirma->teklifveren_sayisi = teklifveren_sayisi;
  arttirma->teklifler = (Teklif*)malloc(teklifveren_sayisi * sizeof(Teklif));
  
  for (int i = 0; i < teklifveren_sayisi; i++) {
    arttirma->teklifler[i].teklifveren_no = i;
    arttirma->teklifler[i].teklif = 0.0;
  }
}

void teklifVer(Arttirma* arttirma, int teklifveren_no) {
  if (teklifveren_no >= 0 && teklifveren_no < arttirma->teklifveren_sayisi) {
    double teklif;
    printf("Teklifinizi girin: ");
    scanf("%lf", &teklif);
    arttirma->teklifler[teklifveren_no].teklif = teklif;
    printf("%d. Teklifveren, %.2f TL teklif verdi.\n\n", teklifveren_no, teklif);
  } 
}

double odemeyiHesapla(Arttirma arttirma, int kazanan_no) {
  double odeme = 0.0;
  for (int i = 0; i < arttirma.teklifveren_sayisi; i++) {
    if (i != kazanan_no) {
      odeme += arttirma.teklifler[i].teklif;
    }
  }
  return odeme;
}

void acikArttirma(Arttirma arttirma) {
  double enyuksek_teklif = -1.0;
  int kazanan_no = -1;
  for (int i = 0; i < arttirma.teklifveren_sayisi; i++) {
    if (arttirma.teklifler[i].teklif > enyuksek_teklif) {
      enyuksek_teklif = arttirma.teklifler[i].teklif;
      kazanan_no = i;
    }
  }
  printf("Kazanan sahibi: %d. Teklif veren\n", kazanan_no);
  double odeme = 0.0;
  for (int i = 0; i < arttirma.teklifveren_sayisi; i++) {
    if (i == kazanan_no) {
      odeme += arttirma.teklifler[i].teklif;
    }
  }
  printf("Odeme tutari; %.2f TL\n", odeme);
}

void arttirmayiBitir(Arttirma* arttirma) {
  free(arttirma->teklifler);
}

int main() {
  int teklifveren_sayisi = 5;
  Arttirma arttirma;
  arttirmaBaslat(&arttirma, teklifveren_sayisi);
  for (int i = 0; i < teklifveren_sayisi; i++) {
    teklifVer(&arttirma, i);
  }
  acikArttirma(arttirma);
  arttirmayiBitir(&arttirma);
  return 0;
}
