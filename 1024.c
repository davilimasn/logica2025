#include <stdio.h>
#include <string.h>
 
int main() {
 
 int n  ;
 char frase[1000];
 
 scanf ("%d",&n);
 getchar();
 for (int i =0;i<n;i++){
    fgets (frase,sizeof(frase),stdin);
    for (int j =0;j<strlen(frase);j++){
        if ((frase[j]>=65&&frase[j]<=90) || (frase[j]>=97&&frase[j]<=122)){
            frase[j]=frase[j]+3;
        }
    }
    
    /*for (int a=strlen(frase)-1;a>=0;a--){
        printf ("%c",frase[a]);
    }
    printf ("\n");*/
    
    for (int a=0;a<strlen(frase)/2;a++) {
        frase[a]=frase[a]-1;
    }
    
    for (int a=strlen(frase)-1;a>=0;a--){
        printf ("%c",frase[a]);
    }
    printf ("\n");
    
 }
    return 0;
}
