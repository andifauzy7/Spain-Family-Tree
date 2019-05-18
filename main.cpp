#include "nbtree_d.h"

int main(){
	nbTree MyList;
	nbAddr awal, anak1,anak2,anak3;
	nbCreate(&MyList);

	awal=(nbAddr)malloc(sizeof(ElmtTree));
	MyList.root=awal;
	awal->nama="Andi Fauzy";
	awal->jeniskelamin='L';
	awal->usia=20;
	awal->status=true;
	awal->parent=NULL;
	awal->nb=NULL;
	awal->fs=NULL;

    anak1=(nbAddr)malloc(sizeof(ElmtTree));
	anak1->nama="Fahmi Widianto";
	anak1->jeniskelamin='L';
	anak1->usia=25;
	anak1->status=true;
	anak1->parent=awal;
	anak1->nb=NULL;
	anak1->fs=NULL;
	awal->fs=anak1;


	anak2=(nbAddr)malloc(sizeof(ElmtTree));
	anak2->nama="Febriyoga Bagus";
	anak2->jeniskelamin='L';
	anak2->usia=28;
	anak2->status=false;
	anak2->parent=awal;
	anak2->nb=NULL;
	anak2->fs=NULL;
	anak1->nb=anak2;

    anak3=(nbAddr)malloc(sizeof(ElmtTree));
	anak3->nama="Luthfi Alri";
	anak3->jeniskelamin='L';
	anak3->usia=18;
	anak3->status=true;
	anak3->parent=awal;
	anak3->nb=NULL;
	anak3->fs=NULL;
	anak2->nb=anak3;

	awal=NULL;
	free(awal);

    awal=(nbAddr)malloc(sizeof(ElmtTree));
    awal=MyList.root->fs;
    while(awal->nb!=NULL){
        printf("Nama      : %s\n",awal->nama);
        printf("Kelamin   : %c\n",awal->jeniskelamin);
        printf("Usia      : %d\n",awal->usia);
        printf("Status    : ");
        if(awal->status==1){
            printf("Hidup\n");
        } else {
            printf("Meninggal\n");
        }
        printf("Orang Tua : %s\n",awal->parent->nama);
        printf("\n");
        awal=awal->nb;
    }
        printf("Nama      : %s\n",awal->nama);
        printf("Kelamin   : %c\n",awal->jeniskelamin);
        printf("Usia      : ");
        if(awal->status==1){
            printf("Hidup\n");
        } else {
            printf("Meninggal\n");
        }
        printf("Status    : %d\n",awal->status);
        printf("Orang Tua : %s\n\n",awal->parent->nama);

        nbPrint(MyList.root," ");
        printf("\n");
        Postorder(MyList.root);
        printf("\n");
        Preorder(MyList.root);
        printf("\n");
        Inorder(MyList.root);

	return 0;
}
