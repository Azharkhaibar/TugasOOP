// #include <iostream>
// #include <vector>

// using namespace std;

// struct buku {
// int id;
// string judul;

// };


// void namaBuku(){
//   vector<buku> bukuku = {
//   {1,"Matematika"},
//   {2,"Logika Informatika"},
//   {3,"Anatomi Fisiologi"}
//   };

//   for(const buku& b : bukuku){
//     cout << "id buku : " << b.id << "nama nya : " << b.judul << endl;
//     }
  
// }
// int main(){
//   namaBuku();
//   return 0;
  
// 

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct peliharaan {
    string namahewan;
    int jml_hewan;
    int pilkode;
};

class piaraan {
public:
    void hewan(vector<peliharaan>& Hewan) {
        peliharaan dataPelihara;
        cout << "nama hewan : ";
        cin >> dataPelihara.namahewan;
        cout << "jumlah hewan : ";
        cin >> dataPelihara.jml_hewan;
        Hewan.push_back(dataPelihara);

        for (const peliharaan& o : Hewan) {
            cout << "nama hewan : " << o.namahewan << endl;
            cout << "jumlah hewan : " << o.jml_hewan << endl;
        }
    }

    void tambahan(vector<peliharaan>& Hewan) {
        if (Hewan.back().jml_hewan >= 10 && Hewan.back().jml_hewan <= 20) {
            srand(static_cast<unsigned int>(time(0)));
            Hewan.back().jml_hewan += rand() % 20 + 1;
            cout << "jumlah hewan bertambah : " << Hewan.back().jml_hewan << endl;
        } else {
            cout << "jumlah hewan tidak bertambah" << endl;
        }
    }
};

class piaraan2 : public piaraan {
public:
    void suntik(vector<peliharaan>& Hewan) {
        peliharaan kode;
        if (Hewan.back().namahewan == "kucing" || Hewan.back().namahewan == "anjing" || Hewan.back().namahewan == "burung") {
            cout << "Anda di beri beberapa Pilihan : " << endl;
            cout << "[1] Suntik hewan" << endl;
            cout << "[2] Tidak Suntik Hewan" << endl;
            cout << "pilih kode : ";
            cin >> kode.pilkode;
            switch (kode.pilkode) {
                case 1:
                    cout << "oohh tidak " << Hewan.back().jml_hewan << " Tersuntik" << endl;
                    break;
                case 2:
                    srand(static_cast<unsigned int>(time(0)));
                    Hewan.back().jml_hewan -= rand() % 20 + 1;
                  cout << "hewan berkurang menjadi " << Hewan.back().jml_hewan<< endl;
                    break;
                default:
                    cout << Hewan.back().namahewan << " anda mati" << endl;
                    break;
            }
        } else {
            cout << " anda tidak diperbolehkan menyuntik hewan ini " << endl;
        }
    }
};

int main() {
    piaraan2 hewani;
    vector<peliharaan> Hewan;
    hewani.hewan(Hewan);
    hewani.tambahan(Hewan);
    hewani.suntik(Hewan);
    hewani.hewan(Hewan);

    return 0;
}
