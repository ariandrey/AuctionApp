# Auction veya Açık Arttırma

-Açık artırma, bir mal veya hizmetin birden fazla kişinin teklif vermesiyle satılan bir anlaşmadır.

-Oyun teorisi, birbirleriyle etkileşimde olan oyuncuların kararlarını inceleyen bir bilim dalıdır. Açık artırma teorisi, açık artırmalarda oyuncuların nasıl davranacağını ve açık artırmanın nasıl sonuçlanacağını tahmin etmek için kullanılır.

-İşbirliği, rekabet ve strateji(Açık artırmalar genellikle rekabeti teşvik eder, ancak bazen alıcılar arasında işbirliği de gözlemlenebilir. Oyun teorisi, bu tür işbirliği ve rekabet durumlarını analiz ederek, oyuncuların en iyi stratejilerini belirlemeye çalışır)

## Uygulama

Uygulama struct ve typedef veri tipleri tanımlanarak yazıldı.

struct: Farklı isim fakat aynı işi yapan verileri bir gruba toplamak için kullanılır.

typedef: Struct belirlediğimiz grubun karmaşık isimleri ile uğraşmak yerine yeni ve tek isim oluşturmak için kullanılır.(-> operatör)

### Çalışma Süreci

Kişi, teklif vereceği miktari eli ile yazar. Teklif kişi sayısı kadar(Bu program için 4) el ile sayı girildiğinde en yüksek miktar/teklif veren kişi kazanır. Örnek ekran çıktısı;

![auction](https://github.com/ariandrey/AuctionApp/assets/130122201/8c616070-f494-4f22-a2a1-637908e096ac)

Uygulama hakkında bilinen hatalar; 

-Kişi numara yerine karakter girdiğinde hata alır ve tekrar girilmesi istenir. Tekrar girilmesi istediğinde "x'inci Teklif veren" sayısı artmaktadır.

-Kişi numara yerine karakter girdiğinde hata alır ve tekrar girilmesi istenir. Uygulama direkt sonlanır.
