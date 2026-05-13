class Solution {
    // Folosim un unordered_map pentru a stoca frecvențele
    unordered_map<int, int> frecv;
    // Vectorul auxiliar w pentru metoda ta de partitionare
    int w[100002]; 

public:
    void quicksort(vector<int>& v, int st, int dr) {
        if (st < dr) {
            int i = st, j = dr, k;
            int mij = st + (dr - st) / 2;
            int pivot = v[mij];

            for (k = st; k <= dr; k++) {
                // Sortăm descrescător după frecvență
                if (frecv[v[k]] > frecv[pivot]) {
                    w[i++] = v[k];
                }
                else if (frecv[v[k]] < frecv[pivot]) {
                    w[j--] = v[k];
                }
                // Dacă frecvențele sunt egale, decidem ordinea după valoare
                else {
                    if (v[k] > pivot) w[i++] = v[k];
                    else if (v[k] < pivot) w[j--] = v[k];
                }
            }

            // Umplem zona de mijloc cu elementele egale cu pivotul
            for (k = i; k <= j; k++) {
                w[k] = pivot;
            }

            int poz = (i + j) / 2;

            // Copiem înapoi în vectorul original v
            for (int x = st; x <= dr; x++) {
                v[x] = w[x];
            }

            quicksort(v, st, poz);
            quicksort(v, poz + 1, dr);
        }
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        frecv.clear();
        for (int x : nums) {
            frecv[x]++;
        }

        // Extragem valorile unice pentru a le sorta
        vector<int> unice;
        for (auto const& [val, count] : frecv) {
            unice.push_back(val);
        }

        // Aplicăm quicksort-ul tău pe vectorul de valori unice
        quicksort(unice, 0, unice.size() - 1);

        // Returnăm primele k elemente din vectorul sortat
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(unice[i]);
        }

        return result;
    }
};