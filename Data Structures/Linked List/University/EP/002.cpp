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
    k->col[k->index] = store;
    k->index = k->index + 1;
    // cout<<store<<'\n';
}
void Unique_elements(Link *r) {
    int cap = 0, capsize = 0;
    for (Link *q = r; q; q = q->next) {
        string s = q->col[2];
        if (s.size()) {
            capsize++;
        }
    }
    string *domain = new string[capsize];
    for (Link *q = r; q; q = q->next) {
        string s = q->col[2], ls;
        bool done = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '@') {
                done = true;
                continue;
            }
            if (done) {
                if (s[i] == '.') {
                    goto show;
                }
                ls += s[i];
            }
        }
        show:
        if (s.size()) {
            domain[cap++] = ls;
        }
    }
    for (int i = 0; i < capsize - 1; i++) {
        for (int j = i + 1; j < capsize; j++) {
            if (domain[j] > domain[i]) {
                swap(domain[i], domain[j]);
            }
        }
    }
    for (int i = 0; i < capsize; i++) {
        while (domain[i] == domain[i + 1] && i < capsize - 1) {
            i++;
        }
        cout << domain[i] << '\n';
    }

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
    Unique_elements(start);
    return 0;
}
