#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;
struct People {
 int Age;
 char Name[10];
};
int main()
{
    People baza[3];
    //Wczytaj(baza);
    FILE * plik = fopen("D://stats.txt","rt"); //read tekst
    if(plik!=NULL) {
        for(int i=0;i<3;i++) fscanf(plik,"%d%s",&baza[i].Age,&baza[i].Name);
    }
    FILE *plik2 = fopen("D://stats.txt","wt") //write tekst
    if(plik!=NULL) {
        for(int i=0;i<3;i++) fprintf(plik,"%d %s",baza[i].Age,baza[i].Name);
    }
    for(int i=0;i<3;i++) cout<<baza[i].Age<<" "<<baza[i].Name<<endl;
    fclose(plik);
    return 0;
}
