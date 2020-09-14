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
void Delivered_on_2nd_September(Link *t) {
    int total = 0, i = 0;
    for (Link *another = t; another; another = another->next) {
        if (stoi(&(another->col[4])[8]) == 2) {
            total++;
        }
    }
    string *emails = new string[total];
    //cout << "Total Emails sent on _2nd_September " << total << '\n';
    for (Link *another = t; another; another = another->next) {
        if (stoi(&(another->col[4])[8]) == 2) {
            string lin = another->col[5];
            while (!isspace(lin.back())) {
                lin.pop_back();
            }
            lin.pop_back();
            emails[i++] = lin;
        }
    }
    //Sorting emails according to time
    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {
            if (emails[j] < emails[i]) {
                swap(emails[i], emails[j]);
            }
        }
    }
    for (int i = 0; i < total; i++) {
        cout << emails[i] << '\n';
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
    Delivered_on_2nd_September(start);
    return 0;
}
