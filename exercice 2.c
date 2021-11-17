#include <stdlib.h>
#include <stdio.h>

 void remplir(float T[],int n);
 void triT(float T[],int taille);
 void afichage(float T[],int taille);
 void cherche(float T[],int taille,float j);

int main(){
        int n;
        float j;
    printf("tapez le nomber de taille de tableau :");
    scanf("%d",&n);
    float T[n];
    remplir(T,n);
    triT(T,n);
    printf("Tapez le numéro que vous recherchez : ");
    scanf("%f",&j);
    cherche(T,n,j);
    printf("le tri de table : \t");
    afichage(T,n);



return 0;
}

    void remplir(float T[],int n)
    {
        for(int i=0;i<n;i++)
        {
            printf("tapez le nomber %d  : ",i+1 );
            scanf("%f",&T[i]);
        }
    }




    void triT(float T[],int taille)
    {

 float c;
    for(int i=0;i<taille;i++)
    {
        for(int j=i+1;j<taille;j++)
        {
            if(T[i]>T[j])
            {
                c=T[i];
                T[i]=T[j];
                T[j]=c;

            }
        }
    }

    }



    void afichage(float T[],int taille)
    {

        for(int i=0;i<taille;i++)
    {

        printf(" %.2f ",T[i]);
    }
    printf("\n");


    }

    void cherche(float T[],int taille,float j)
    {
        int n=0;
        for(int i=0;i<taille;i++)
        {
            if(T[i] == j)
            {
                n++;
            }
        }
        if(n==0)
        {

        printf("NO trouvez : \n");
        }
        else
        {
            printf("trouvez : \n");
        }
    }
