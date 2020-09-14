#include<bits/stdc++.h>
#include<fstream>
using namespace std;
struct Link {
    string *col = new string[7];
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
void date_and_time(Link *&k, string l) {
    string d;
    int i = 0;
    for (; !isspace(l[i]); i++) {
        d += l[i];
    }
    l = &l[i + 1];
    k->col[k->index] = d;
    k->index = k->index + 1;
    k->col[k->index] = l;
}
void read_separately(Link *&k, string l) {
    string store;
    int shuru = 0;
    for (char c : l) {
        shuru++;
        if (c == ',') {
            if (k->index == 6) {
                k->col[k->index] = store;
                k->col[k->index] = k->col[k->index] + &l[shuru];
                k->index = k->index + 1;
                return;
            }
            else if (k->index == 4) {
                date_and_time(k, store);
            } else {
                k->col[k->index] = store;
            }
            store.clear();
            k->index = k->index + 1;
            continue;
        }
        store = store + c;
    }
    if (store.size() <= 2) {
        return;
    }
    k->col[k->index] = store;
    k->index = k->index + 1;
    // cout<<store<<'\n';
}
void No_Bounce(Link *p) {
    int total = 0;
    for (; p; p = p->next) {
        if (p->index < 7) {
            total++;
        }
    }
    cout << "No bounce = " << total << '\n';
}
int main() {
    freopen("see.txt", "w", stdout);
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
    No_Bounce(start);
    return 0;
}
