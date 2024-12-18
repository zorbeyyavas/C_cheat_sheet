#include <stdio.h>
#include <math.h> //matemaik kütüphanesi aşşağıdaki notlarda ztn anlattım
//#include <ctype.h> // aşağıda ne işe yaradığı var 
#include <string.h>
#include <stdlib.h>



int main(){

//asdadas
/*adadasdadada*/
/* \n yeni satıra geçer*/
/* \t geniş bir boşluk bırakır */
/* */


//printf(" ahmet \n yasin \n mehmet \n ");

//printf("\"ahmetin kedisi var\" birakin gelsin");

/*int level = 87 ;//tam sayı
float xp = 12.05;//ondalklı sayı
char server ='A';//tek karakter
char nick[]="ahmet";//karakter dizesi



printf("merhaba %s hosgeldin",nick); printf("\n");
printf("suan %d levele sahpsin\n",level);
printf("xp durumun %%%f\n",xp);
printf("suanda %c sunucusunda oynuyorsun",server); */

//--------------------------------------------------------------------------


// %.1 sayıdan sonra gözükecek basamak saysı şuan 87.4 
// %1 sol taraftan bir boşluk bırak demek 
// %-1 sağ taraftan boşluk bırak demek


//aşağıda bir market uyguaması örnei var yukardaki işlemler kullanarak yapıldı

/*float item1=5.75;
float item2=10.298;
float item3=100.23343;*/

/*printf("item 1= %.1f  \n",item1);
printf("item 2= %.2f  \n",item2);
printf("item 3= %.3f  \n",item3);*/

/*printf("item 1= %1f  \n",item1);
printf("item 2= %10f  \n",item2);
printf("item 3= %33f  \n",item3);*/


/*printf("item 1= %-10ftl  \n",item1);
printf("item 2= %-5ftl  \n",item2);
printf("item 3= %-9ftl  \n",item3);*/

//--------------------------------------------------------------------------


/*aritmetik operatörler 
     toplama = "+" 
    çıkartma = "-"
    çarpma = "*"
    bölme = "/"
    mod alma = "%"
    arttırma = "++"
    azaltma = "--" */



/*
int x =6;
int y=4;
int z = x+y;
printf("%d",z);
*/

/*int x =6;
int y =4;
int z =x-y;
printf("%d",z);*/

/*int x =6;
int y =4;
int z =x*y;
printf("%d",z);*/


/*int x =6;
int y =4;
float z =x/(float)y;
printf("%.2f",z);*/
//burda tam sonuç almak istiyorsa y float olucak yada float z =x/(float)y; yazıcaz


/*int x =6;
int y =4;
int z =x%y;
printf("%d",z);*/

/*int x = 6;
int y =4;
x++;
y++;
x--;
y--;*/

//--------------------------------------------------------------------------

//kullanıcıdan veri alma
//scanf ilk yazdığımız veriden sonra boşluk koyarsak 2. veri algılıyoor
//boşluk koymamz gereken girişlerde fgets() kullanıyor kulanımı farklıdır aşağda örnekte var
/*int yas;
char isim[25];


printf("adiniz nedir\n");
fgets(isim,25,stdin);

printf("kac yasindasin\n");
scanf("%d",&yas);
//scanf("%s",&isim);

printf("memnun oldum %s",isim);
printf("%d yasindasin\n",yas); */


//--------------------------------------------------------------------------


//#include <math.h> kütüphensi ile matematiksel fonksyonlar
//bunlar temel matematiksel ifadelerdir geri kalanları c dilinde math.h fonksyonları diye nette aratarak bulabiliriz

/*double a = sqrt(16); //verilen sayının karekökünü alır 
double b = pow(2,3); //üssünü almadır 2nin 3. kuvvetini bulucak
int c = round(3.25); //yuvarlama demektir bir sayıyı yakın olduğu tarafa yuvarlayacaktır
int d = ceil(3.01); //üste yuvarla demektir 3.99 da grsek 4e yuvarlıycak 3.01 de 
int e = floor(3.99); //altına yuvarlıycak 
double u = fabs(-124); //mutlak değer almadır
double y = log(5); //bir sayının logaritmasını almaya yarar
double s = sin(45); //bir sayının sinüsünü alma
double g = cos(45); // bir sayının cosinüsünü alma
double z = tan(45); //bir sayının tanjantını alma

printf("\n %lf",s);
printf("\n %lf",g);
printf("\n %lf",z); */

//--------------------------------------------------------------------------

//dairenin çevresini ve alanını hesaplayan programı yazıyoruz

/*const double pi =3.14159;
double yaricap;
double cevre;
double alan;

printf("\n yaricap degeri girin");
scanf("%lf",&yaricap);

cevre= 2 * pi * yaricap;
alan = pi * yaricap *yaricap;

printf("\n dairenin cevresi %.2lf",cevre);
printf("\n dairenin alani %.2lf",alan); */

//--------------------------------------------------------------------------

// hipotenüs hesaplama uygulaması yapcaz kök içerisinde a ve b nin karesinin toplamı bize hipotenüsü veriyor

/*double a,b,c;

printf("\n a kenarini giriniz");
scanf("%lf",&a);

printf("\n b kenarini giriniz");
scanf("%lf",&b);

c = sqrt(a*a + b*b );

printf("\n c kenari uzunlugu = %.2lf",c); */

//--------------------------------------------------------------------------

// if else kullanarak kullanıcıdan yaş alıp kursa kayıt olup olamaycağını söyleyen program

/*int yas;
printf("\n kayit olmak icin yasinizi giriniz");
scanf("%d",&yas);

if(yas>=18){
printf("kursa kayit oldunuz tebrikler");
}

else if(yas<=0){
printf("lutfen yasinizi dogru girdikte sonra tekrar programi calistirin");
}

else{
    printf("yasiniz yetmedigi icin kayit olamadiniz");
}*/


//--------------------------------------------------------------------------



// girilen notu yorumlayan programı yazıyoruz switch case ile 
/*
char not;
printf("\n notunuzu giriniz");
scanf("%c",&not);

switch (not)
{
case 'a':
    printf("mukemmel");
    break;
case 'b':
    printf("notun başarili ");
    break;
case 'c':
    printf("notun iyi");
    break;
case 'd':
    printf("en azindan f degil");
    break;
case 'f':
    printf("basarisiz oldun");
    break;

default:
    printf("gecerli bir not giriniz");
    break;
} */


//--------------------------------------------------------------------------



//fahrenaitı celsiusa çevirme yani sıcaklık çevirme uygulaması 
//scanfler büyük küçğk harfe duyarlıdır bu yüzden küçük f girdiğimizde program hata vericek bunu çözmenin yolu ise 
// #include <ctype.h> kütüphenesini kuramktır 

/*char birim;
double sicaklik;

printf("\n sicaklik birimini giriniz (F) veya (C):");
scanf("%c",&birim);

birim = toupper(birim); // büyük harfe göre şart koyduğumuz için tuper yoksa küçük harf için birim= tolower(birim); 

if (birim == 'C')
{
    printf("celcius cinsinden sicakligi giriniz");
    scanf("%lf",&sicaklik);
    sicaklik=(sicaklik*9/5)+32;       //celciusdan fahrenaite dönüştürek için kullanılan formül (sıcaklık * 9/5) +32
    printf("sicaklil fahrenait cinsinden %.1f",sicaklik);
}
else if (birim=='F')
{
    printf("\nfahrenait cinsinden sicakligi giriniz");
    scanf("%lf",&sicaklik);
   sicaklik = ((sicaklik -32)*5)/9;
    printf("sicaklik celcius cinsinden %.1lf",sicaklik);
}
else
{
    printf("%c geçerli bir birim degil",birim);
}*/


//--------------------------------------------------------------------------
//vize final hesaplatan programı c dilindeki yazımı

/*double vize, final;
printf("vizeyi gir ");
scanf("%lf",&vize);
printf("finalin gir ");
scanf("%lf",&final);

vize=vize * 0.4;
final=final * 0.6;
 
double sonuc = final + vize;
if (sonuc >=50)
{
        printf("gectiniz");
}
else   
{
    printf("kaldin %.2lf ",sonuc);
} */


//--------------------------------------------------------------------------


//c dilinde hesap makinesi yapımı 
/*char opertator;
double say1,say2,sonuc;

printf("lutfen yapmak istediginiz islemi giriniz (+ - * /)\n");
scanf("%c",&opertator);

printf("\n lütfen birinci saiyi giriniz");
scanf("%lf",&say1);

printf("\n lütfen ikinci saiyi giriniz");
scanf("%lf",&say2);

switch (opertator)
{
case '+':
    sonuc=say1 + say2;
    printf("\n sonuc = %.2lf",sonuc);
    break;
case '-':
    sonuc=say1 - say2;
    printf("\n sonuc = %.2lf",sonuc);
    break;
case '*':
    sonuc=say1 * say2;
    printf("\n sonuc = %.2lf",sonuc);
    break;
case '/':
    sonuc=say1 / say2;
    printf("\n sonuc = %.2lf",sonuc);
    break;    
default:
printf("\n girdiginiz operatör yanlis %c",opertator);
    break;
}*/


//--------------------------------------------------------------------------


//char ifadeyi if içerisine sokup işlem yaptırmka için string.h kütüphanesini kurup aşağdaki işlemleri yapmalıyız

/*char birincigiris[25];
char ikicigiris[25];

scanf("%s",&birincigiris);
scanf("%s",&ikicigiris);
int karsilastir = strcmp(birincigiris,ikicigiris);
if (karsilastir==0)
{
    printf("esit");
}*/


//--------------------------------------------------------------------------

//verilen değerlerin alfasını bulan programın c dlin eyazımı

/*int a,b,c,x,delta;
printf("a degerini gir");
scanf("%d",&a);

printf("b degerini gir");
scanf("%d",&b);

printf("c degerini gir");
scanf("%d",&c);

printf("x degerini gir");
scanf("%d",&x);

delta=(b*b)-(4*a*c);

if (delta>0 )
{
    x=sqrt(delta)/2*a;
}
else if (delta<0)
{
  printf("sanal kok var");
}

else if (delta==0)
{
    x=-b/(2*a);
    printf("%d",x);
}*/

//--------------------------------------------------------------------------

//vize final hesaplama 2
/*double vize,final,ort;

printf("vize giriniz");
scanf("%lf",&vize);

printf("final giriniz");
scanf("%lf",&final);

vize=vize*0.4;
final=final*0.6;
ort=vize+final;
if (ort>=60)
{
    printf("gectiniz tebrikler");
}
else
{
    printf("kaldiniz %.3lf",ort);
}*/


//--------------------------------------------------------------------------

//girilen sayıları toplayıpp 5 den büyükse büyük küçükse küçük yzan program c diilinde

/*int a,b;
float c;
printf("a degerini gir");
scanf("%f",&a);

printf("b degerini gir");
scanf("%f",&b);

c=a+b;

if (c>=5)
{
    printf("buyuk");
}
else
{
    printf("kucuk");
}*/

//--------------------------------------------------------------------------

//vize final hesaplanacak eğer kalırsa büt hesaplanaak büt 50 altı ise kalıcak üstü ise geçecek

/*float vize,final,ort,but;

printf("vize gir");
scanf("%f",&vize);

printf("final gir");
scanf("%f",&final);

ort=vize*0.4+final*0.6;

if (ort>50)
{
    printf("tebrikler gectiniz");
}
else
{
    printf("kaldiniz lutfen butunuzu giriniz");
    scanf("%f",&but);
    if (but>=50)
    {
        printf("butunleme notuyla gectiniz");
    }
    else
    {
        printf("maalesef butunleme sinavinda da basarisiz oldunuz");
    }
    
}*/

//--------------------------------------------------------------------------

// girilen sayının tek mi çiftmi olduğunu buan program c dilinde

/*int a;
printf("sayi giriniz");
scanf("%d",&a);

if (a%2==0)
{
    printf("sayi cift");
}
else
{
    printf("sayi tek");
}*/

//--------------------------------------------------------------------------
//Diziler 
//tanımlamalar falan filan 
//int dizi[]= {1,2,3,4,5};
//printf("%d",dizi[4]); // dizide seçtiğiniz indeksi yazdırma 5 yazcak 
//dizi içine veri atma 2. yöntem
/*int dizi2[5];
dizi2[0]=6;
dizi2[1]=7;
dizi2[2]=8;
dizi2[3]=9;*/
//dizi içindeki elemanları yazdırma for ile
//dizideki verileri toplama
/*int topla =0;
for (int i = 0; i <5; i++)
{
    topla=topla+dizi[i];   
}
printf("%d",topla);
/*char karadizi[6]={'a','n','k','a','r','a'};
printf("%s",karadizi);
*/




//diziye kaç elemanlı olsun diyip verileri kullanıcıya girdirten program 
/*int dizilerss[100];
int sayi,toplayici;
printf("dizi kac elemanli olsun");
scanf("%d",&sayi);

for (int i = 0; i <sayi; i++)
{
    printf("dizinin %d. degerini giriniz",i);
    scanf("%d",&dizilerss[i]);
}
printf("\n");

for (int i = 0; i <sayi; i++)
{
    //printf("%d",dizilerss[i]);
    toplayici=toplayici+dizilerss[i];
    
}
printf("dizi elemanlarinin toplami=%d",toplayici);*/




return 0;
}

