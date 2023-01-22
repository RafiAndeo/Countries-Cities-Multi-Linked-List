#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED

#include <iostream>

using namespace std;

#define info(b) (b)->info
#define next(b) (b)->next
#define info(n) (n)->info
#define next(n) (n)->next
#define next_negara(b) (b)->next_negara
#define first(list_benua) ((list_benua).first)
#define nil NULL

typedef struct elm_benua *adr_benua;

typedef struct elm_negara *adr_negara;

struct benua{
    string nama_benua;
    int jumlah_negara;
};

struct negara{
    string nama_negara;
    int jumlah_kota;
};

struct elm_negara{
    negara info;
    adr_negara next;
};

struct elm_benua{
    benua info;
    adr_benua next;
    adr_negara next_negara;
};

struct Multi_Linked_List{
    adr_benua first;
};

void create_list(Multi_Linked_List &list_benua);
void new_elm_benua(benua info, adr_benua &b);
void new_elm_negara(negara info, adr_negara &n);
void show_data_benua(Multi_Linked_List list_benua);
void insert_last_benua(Multi_Linked_List &list_benua, adr_benua b);
void insert_first_benua(Multi_Linked_List &list_benua, adr_benua b);
void insert_After_benua(Multi_Linked_List &list_benua, adr_benua b);
void insert_new_negara(Multi_Linked_List &list_negara, adr_benua b, adr_negara n);
bool search_benua(Multi_Linked_List list_benua, string nama_benua);
bool search_negara_of_x(Multi_Linked_List list_benua, string nama_negara, string nama_benua);
void show_data_negara_of_x(Multi_Linked_List list_benua, string nama_benua);
int count_jumlah_negara(Multi_Linked_List list_benua, adr_benua b, adr_negara n);
int sum_jumlah_kota(Multi_Linked_List list_benua, adr_benua b, adr_negara n);
void insert_relation(Multi_Linked_List &list_benua, adr_benua &b, adr_negara &n);
void delete_first_negara(Multi_Linked_List &list_benua, adr_benua b, adr_negara n);
void delete_relation(Multi_Linked_List &list_benua, adr_benua b, adr_negara n);
void delete_last_negara(Multi_Linked_List &list_benua, adr_benua &b, adr_negara &n);
void delete_first_benua(Multi_Linked_List &list_benua, adr_benua &b);
void delete_last_benua(Multi_Linked_List &list_benua, adr_benua &b);
void delete_negara_of_x(Multi_Linked_List &list_benua, adr_benua &b, adr_negara &n, string nama_benua, string nama_negara);

#endif // TUBES_H_INCLUDED
