#include<bits/stdc++.h>
#include<fstream>
using namespace std;
struct Link {
    string col[6];
    int index = 0;
    Link *next = nullptr;
};
void modify(string &p) {
cleanup:
    for (int i = 0; i < p.size(); i++) {
        if (p[i] == p[i + 1] && i < p.size() - 1 && p[i] == ',') {
            p.erase(p.begin() + i);
            goto cleanup;
        }
    }
}
void read_separately(Link *&k, string l) {
    string store;
    int shuru = 0;
    for (char c : l) {
        shuru++;
        if (c == ',') {
            if (k->index == 5) {
                k->col[k->index] = store;
                k->col[k->index] = k->col[k->index] + &l[shuru];
                k->index = k->index + 1;
                return;
            }
            k->col[k->index] = store;
            store.clear();
            k->index = k->index + 1;
            continue;
        }
        store = store + c;
    }
    k->col[k->index] = store;
    k->index = k->index + 1;
    // cout<<store<<'\n';
}
int main() {
    freopen("output.txt", "w", stdout);
    Link *h = new Link, *start;
    start = h;
    fstream file;
    string line;
    int s = 0, p = -1;
    file.open("project1.csv", ios::in);
    while (getline(file, line)) {
        if (!++p || line.size() <= 2) {
            continue;
        }
        if (s) {
            h->next = new Link;
            h = h->next;
        }
        modify(line);
        read_separately(h, line);
        s++;
    }
    file.close();
    for (; start; start = start->next) {
        for (int i = 0; i < start->index; i++) {
            cout << start->col[i];
        }
        cout << '\n';
    }
    return 0;
}
