#include "Tubes.h"

void create_list(Multi_Linked_List &list_benua){ //benar
    first(list_benua) = nil;
}

void new_elm_benua(benua info, adr_benua &b){ //benar
    b = new elm_benua;
    next(b) = nil;
    next_negara(b) = nil;
    info(b).nama_benua = info.nama_benua;
    info(b).jumlah_negara = info.jumlah_negara;
}

void new_elm_negara(negara info, adr_negara &n){ //benar
    n = new elm_negara;
    next(n) = nil;
    info(n).nama_negara = info.nama_negara;
    info(n).jumlah_kota = info.jumlah_kota;
}

void show_data_benua(Multi_Linked_List list_benua){ //benar
    adr_negara n;
    adr_benua b;
    b = first(list_benua);
    while (b != nil){
        cout << "[Benua: " << info(b).nama_benua << " dengan" << " ";
        cout << "Jumlah negara: " << info(b).jumlah_negara << "]" << endl;
        cout << endl;
        n = next_negara(b);
        while (n != nil){
            cout << "[Negara: " << info(n).nama_negara << " dengan" << " ";
            cout << "Jumlah kota: " << info(n).jumlah_kota << "]" << endl;
            n = next(n);
            cout << endl;
        }
        cout << endl;
        b = next(b);
    }
}

void delete_last_benua(Multi_Linked_List &list_benua, adr_benua &b){ //benar
    if(first(list_benua) == nil){
        b = nil;
    }else if(next(first(list_benua)) == nil){
        b = first(list_benua);
        first(list_benua) = nil;
    }else{
        adr_benua q = first(list_benua);
        b = first(list_benua);
        while (next(b) != nil){
            q = b;
            b = next(b);
        }
        next(q) = nil;
    }
}

void delete_first_benua(Multi_Linked_List &list_benua, adr_benua &b){ //benar
    if(first(list_benua) == nil){
        b = nil;
    }else if(next(first(list_benua)) == nil){
        b = first(list_benua);
        first(list_benua) = nil;
    }else{
        b = first(list_benua);
        first(list_benua) = next(b);
        next(b) = nil;
    }
}

void insert_first_benua(Multi_Linked_List &list_benua, adr_benua b){ //benar
    if (first(list_benua) == nil){
        first(list_benua) = b;
    }else{
        next(b) = first(list_benua);
        first(list_benua) = b;
    }
}

void insert_After_benua(Multi_Linked_List &list_benua, adr_benua b){ //benar
    adr_benua q;
    if (first(list_benua) == nil){
        first(list_benua) = b;
    }else{
        q = first(list_benua);
        next(b) = nil;
        next(b) = next(q);
        next(q) = b;
    }
}

void insert_last_benua(Multi_Linked_List &list_benua, adr_benua b){ //benar
    if(first(list_benua) == nil){
        first(list_benua) = b;
    }else{
        adr_benua p = first(list_benua);
        while (next(p) != nil){
            p = next(p);
        }
        next(p) = b;
    }
}

void insert_new_negara(Multi_Linked_List &list_benua, adr_benua b, adr_negara n){ //benar
    adr_negara q;
    if(next_negara(b) == nil){
        next_negara(b) = n;
    }else{
        q = next_negara(b);
        while(next(q) != nil){
            q = next(q);
        }
        next(q) = n;
    }
}

bool search_benua(Multi_Linked_List list_benua, string nama_benua){ //benar
    adr_benua p = first(list_benua);
    while (p != nil){
        if (info(p).nama_benua == nama_benua){
            return true;
        }
        p = next(p);
    }
    return false;
}

bool search_negara_of_x(Multi_Linked_List list_benua, string nama_negara, string nama_benua){ //benar
    adr_benua p = first(list_benua);
    while (p != nil){
        if (info(p).nama_benua == nama_benua){
            adr_negara n = next_negara(p);
            while (n != nil){
                if (info(n).nama_negara == nama_negara){
                    return true;
                }
                n = next(n);
            }
        }
        p = next(p);
    }
    return false;
}

void show_data_negara_of_x(Multi_Linked_List list_benua, string nama_benua){ //benar
    adr_negara n;
    adr_benua b;
    b = first(list_benua);
    while (b != nil){
        if (info(b).nama_benua == nama_benua){
            n = next_negara(b);
            while (n != nil){
                cout << "[Negara: " << info(n).nama_negara << " dengan" << " ";
                cout << "Jumlah kota: " << info(n).jumlah_kota << "]" << endl;
                n = next(n);
                cout << endl;
            }
        }
        b = next(b);
    }
}

int count_jumlah_negara(Multi_Linked_List list_benua, adr_benua b, adr_negara n){ //benar
    int i;
    b = first(list_benua);
    while (b != nil){
        n = next_negara(b);
        while (n != nil){
            i = i + 1;
            n = next(n);
        }
        b = next(b);
    }
    return i;
}

int sum_jumlah_kota(Multi_Linked_List list_benua, adr_benua b, adr_negara n){ //benar
    int sum;
    b = first(list_benua);
    while (b != nil){
        n = next_negara(b);
        while (n != nil){
            sum = sum + info(n).jumlah_kota;
            n = next(n);
        }
        b = next(b);
    }
    return sum;
}

void insert_relation(Multi_Linked_List &list_benua, adr_benua &b, adr_negara &n){ //benar
    while (b != nil){
        insert_new_negara(list_benua, b, n);
        n = next_negara(b);
        while (n != nil){
            n = next(n);
        }
        b = next(b);
    }
}

void delete_first_negara(Multi_Linked_List &list_benua, adr_benua b, adr_negara n){ //benar
    n = next_negara(b);
    next_negara(b) = next(next_negara(b));
    next(n) = nil;
}

void delete_last_negara(Multi_Linked_List &list_benua, adr_benua &b, adr_negara &n){ //benar
    if(first(list_benua) != nil) {
        adr_negara q = next_negara(b);
        while (next(next(q)) != nil){
            q = next(q);
        }
        n = q;
        next(n) = nil;
    }

}

void delete_after_negara(Multi_Linked_List &list_benua, adr_benua b, adr_negara prec, adr_negara &n){ //benar
    if(first(list_benua) != nil){
        n = next(prec);
        next(prec) = next(n);
        next(n) = nil;
    }
}

void delete_relation(Multi_Linked_List &list_benua, adr_benua b, adr_negara n){ //benar
    b = first(list_benua);
    while (b != nil){
        if (next_negara(b) = n){
            next_negara(b) = nil;
        }
        b = next(b);
    }
}

void delete_negara_of_x(Multi_Linked_List &list_benua, adr_benua &b, adr_negara &n, string nama_benua, string nama_negara){ //benar
    b = first(list_benua);
    while (b != nil){
        if (info(b).nama_benua == nama_benua){
            n = next_negara(b);
            while (n != nil){
                if (info(n).nama_negara == nama_negara){
                    if (n == next_negara(b)){
                        delete_first_negara(list_benua, b, n);
                        n = next_negara(b);
                    }else if (next(n) == nil){
                        delete_last_negara(list_benua, b, n);
                        n = next_negara(b);
                    }else{
                        delete_after_negara(list_benua, b, n, n);
                        n = next_negara(b);
                    }
                }
                n = next(n);
            }
        }
        b = next(b);
    }
}
