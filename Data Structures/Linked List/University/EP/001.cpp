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
void Status_check(Link *t) {
    string **m = new string *[10];
    for (int i = 0; i < 10; i++) {
        m[i] = new string[2];
    }
    int mcount[10] = {};
    string st[10] = {"SMTP API Error", "Queued", "Spam Complaint", "Undeliverable", "Hard Bounce", "Delivered", "Spam Notification", "ISP Block", "Soft Bounce", "Processed"};
    for (int i = 0; i < 10; i++) {
        for (Link *ts = t; ts; ts = ts->next) {
            if (st[i] == ts->col[1]) {
                mcount[i]++;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        m[i][0] = st[i];
        m[i][1] = to_string(mcount[i]);
    }
    for (int i = 0; i < 10; i++) {
        cout << m[i][0] << " " << m[i][1] << '\n';
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
    Status_check(start);
    return 0;
}
