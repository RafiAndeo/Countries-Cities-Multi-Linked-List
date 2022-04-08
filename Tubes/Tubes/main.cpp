#include "Tubes.h"

using namespace std;

int main()
{
    Multi_Linked_List list_benua;
    adr_benua b;
    adr_negara n;
    benua p;
    negara q;

    create_list(list_benua);

    //pengisian benua dunia
    //benua Asia
    p.nama_benua = "Asia";
    p.jumlah_negara = 48;
    new_elm_benua(p, b);
    insert_last_benua(list_benua, b);

    //pengisian negara dunia
    //negara di benua Asia
    q.nama_negara = "Indonesia";
    q.jumlah_kota = 34;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Vietnam";
    q.jumlah_kota = 58;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Jepang";
    q.jumlah_kota = 47;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Thailand";
    q.jumlah_kota = 76;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Korea Selatan";
    q.jumlah_kota = 9;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Filipina";
    q.jumlah_kota = 80;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Kamboja";
    q.jumlah_kota = 25;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Malaysia";
    q.jumlah_kota = 15;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Cina";
    q.jumlah_kota = 22;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Laos";
    q.jumlah_kota = 16;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    //benua Afrika
    p.nama_benua = "Afrika";
    p.jumlah_negara = 54;
    new_elm_benua(p, b);
    insert_first_benua(list_benua, b);

    //pengisian negara dunia
    //negara di benua Afrika
    q.nama_negara = "Libya";
    q.jumlah_kota = 100;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Mesir";
    q.jumlah_kota = 44;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Chad";
    q.jumlah_kota = 14;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Gabon";
    q.jumlah_kota = 51;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Malawi";
    q.jumlah_kota = 59;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Angola";
    q.jumlah_kota = 18;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Zimbabwe";
    q.jumlah_kota = 8;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Mali";
    q.jumlah_kota = 54;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Nigeria";
    q.jumlah_kota = 167;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Togo";
    q.jumlah_kota = 15;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    //benua Australia dan Oseania
    p.nama_benua = "Australia dan Oseania";
    p.jumlah_negara = 14;
    new_elm_benua(p, b);
    insert_After_benua(list_benua, b);

    //pengisian negara dunia
    //negara di benua Australia dan Oseania
    q.nama_negara = "Selandia Baru";
    q.jumlah_kota = 33;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Fiji";
    q.jumlah_kota = 332;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Vanuatu";
    q.jumlah_kota = 18;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Mikronesia";
    q.jumlah_kota = 4;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Kiribati";
    q.jumlah_kota = 20;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Nauru";
    q.jumlah_kota = 1;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Palau";
    q.jumlah_kota = 5;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Tonga";
    q.jumlah_kota = 4;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Kepulauan Marshall";
    q.jumlah_kota = 2;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Tuvalu";
    q.jumlah_kota = 9;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    //benua Antartika
    p.nama_benua = "Antartika";
    p.jumlah_negara = 0;
    new_elm_benua(p, b);
    insert_first_benua(list_benua, b);

    //pengisian negara dunia
    //negara di benua Antartika
    q.nama_negara = "Tidak ada";
    q.jumlah_kota = 0;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    //benua Amerika Utara
    p.nama_benua = "Amerika Utara";
    p.jumlah_negara = 22;
    new_elm_benua(p, b);
    insert_last_benua(list_benua, b);

    //pengisian negara dunia
    //negara di benua Amerika Utara
    q.nama_negara = "Kanada";
    q.jumlah_kota = 11;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Meksiko";
    q.jumlah_kota = 31;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Amerika Serikat";
    q.jumlah_kota = 50;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Haiti";
    q.jumlah_kota = 10;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Republik Dominika";
    q.jumlah_kota = 37;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Jamaika";
    q.jumlah_kota = 5;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Saint Lucia";
    q.jumlah_kota = 17;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Belize";
    q.jumlah_kota = 6;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Nikaragua";
    q.jumlah_kota = 7;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);


    q.nama_negara = "Panama";
    q.jumlah_kota = 180;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    //benua Amerika Selatan
    p.nama_benua = "Amerika Selatan";
    p.jumlah_negara = 15;
    new_elm_benua(p, b);
    insert_last_benua(list_benua, b);

    //pengisian negara dunia
    //negara di benua Amerika Selatan

    q.nama_negara = "Guadeloupe";
    q.jumlah_kota = 32;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Venezuela";
    q.jumlah_kota = 335;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Kolombia";
    q.jumlah_kota = 18;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Guyana";
    q.jumlah_kota = 46;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Suriname";
    q.jumlah_kota = 42;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Brazil";
    q.jumlah_kota = 309;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Peru";
    q.jumlah_kota = 180;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Bolivia";
    q.jumlah_kota = 10;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Chili";
    q.jumlah_kota = 220;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Argentina";
    q.jumlah_kota = 23;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    //benua Eropa
    p.nama_benua = "Eropa";
    p.jumlah_negara = 45;
    new_elm_benua(p, b);
    insert_first_benua(list_benua, b);

    //pengisian negara dunia
    //negara di benua Eropa
    q.nama_negara = "Perancis";
    q.jumlah_kota = 60;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Belanda";
    q.jumlah_kota = 115;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Austria";
    q.jumlah_kota = 68;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Swiss";
    q.jumlah_kota = 94;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Rusia";
    q.jumlah_kota = 37;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Polandia";
    q.jumlah_kota = 16;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Italia";
    q.jumlah_kota = 149;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Spanyol";
    q.jumlah_kota = 10;
    new_elm_negara(q, n);
    insert_new_negara(list_benua, b, n);

    q.nama_negara = "Finlandia";
    q.jumlah_kota = 60;
    new_elm_negara(q, n);
    insert_relation(list_benua, b, n);

    show_data_benua(list_benua);

}
