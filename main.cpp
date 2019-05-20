#include "nbtree_d.h"

int main(){
    nbTree MyList,MyList2;
    nbCreate(&MyList);
    nbCreate(&MyList2);
    MyList=open_filetree();
    MyList2.root=SearchKing(MyList.root);

    for(;;){
        switch(menu()){
        case 1 :
            // Input Data Baru.
            inputmember(&MyList);
            printf("\n\tInput Berhasil!\n\t");
            system("pause");
            break;
        case 2 :
            // Update Data.
            break;
        case 3 :
            // Delete Node (Delete pada Silsilah Tahta, Status diubah menjadi Meninggal)
            delete_node(&MyList);

            break;
        case 4 :
            // Silsilah Raja
            printf("\n");
            nbPrint(MyList2.root,"");
            printf("\n\t");
            system("pause");
            break;
        case 5 :
            // Silsilah Keluarga
            printf("\n\tRaja saat ini : %s\n",SearchKing(MyList.root)->nama);
            printf("\n");
            nbPrint(MyList.root,"");
            printf("\n\t");
            system("pause");
            break;
        case 6 :
            // Keluar
            save_tree(MyList.root);
            exit(1);
            break;
        }
        system("cls");
    }

	return 0;
}
