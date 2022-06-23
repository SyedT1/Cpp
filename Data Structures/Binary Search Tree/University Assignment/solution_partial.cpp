#include <iostream>
using namespace std;
struct myset
{
   int data;
   myset *left = nullptr, *right = nullptr;
};
void insert(myset *&a, int v)
{
   if (a == nullptr)
   {
      a = new myset{v, nullptr, nullptr};
      return;
   }
   if (v < a->data)
   {
      insert(a->left, v);
   }
   else
   {
      insert(a->right, v);
   }
}
bool checkifpresent(myset *a, int v)
{
   if (!a)
   {
      return false;
   }
   else if (a->data == v)
   {
      return true;
   }
   else if (a->data < v)
   {
      return checkifpresent(a->right, v);
   }
   else
   {
      return checkifpresent(a->left, v);
   }
}
void formstr(myset *r, string &res)
{
   if (r == nullptr)
   {
      return;
   }
   formstr(r->left, res);
   res += to_string(r->data);
   formstr(r->right, res);
}
string formstr(string res, myset *r)
{
   formstr(r, res);
   return res;
}
int main()
{
   while (true)
   {
      string s;
      getline(cin, s);
      int separator = 0;
      for (int i = 0; i < s.length(); i++)
      {
         if (s[i] == ' ')
         {
            separator = i + 1;
            break;
         }
      }
      if (separator == 0)
      {
         break;
      }
      myset *hc = nullptr;
      string str1 = s;
      str1[separator - 1] = '\0';
      str1 = &str1[0];
      string str2 = s;
      str2 = &str2[separator + 2];
      char op = s[separator];
      if (op == 'U')
      {
         if (str1 == "empty" || str2 == "empty")
         {
            if (str1 != "empty")
            {
               for (char c : str1)
               {
                  if (!checkifpresent(hc, int(c - '0')))
                  {
                     insert(hc, int(c - '0'));
                  }
               }
            }
            if (str2 != "empty")
            {
               for (char c : str2)
               {
                  if (!checkifpresent(hc, int(c - '0')))
                  {
                     insert(hc, int(c - '0'));
                  }
               }
            }
         }
         else
         {
            for (char c : str1)
            {
               if (!checkifpresent(hc, int(c - '0')))
               {
                  insert(hc, int(c - '0'));
               }
            }
            for (char c : str2)
            {
               if (!checkifpresent(hc, int(c - '0')))
               {
                  insert(hc, int(c - '0'));
               }
            }
         }
         string res_str = formstr("", hc);
         cout << (res_str.length() != 0 ? res_str : "empty") << endl;
      }
      else
      {
         string common_str;
         myset *cmnstr = nullptr;
         if (str1 == "empty" || str2 == "empty")
         {
            if (str1 != "empty")
            {
               for (char c : str1)
               {
                  if (!checkifpresent(hc, int(c - '0')))
                  {
                     insert(hc, int(c - '0'));
                  }
               }
            }
            if (str2 != "empty")
            {
               for (char c : str2)
               {
                  if (checkifpresent(hc, int(c - '0')) && !checkifpresent(cmnstr, int(c - '0')))
                  {
                     common_str += char(c);
                     insert(cmnstr, int(c - '0'));
                  }
               }
            }
         }
         else
         {
            for (char c : str1)
            {
               if (!checkifpresent(hc, int(c - '0')))
               {
                  insert(hc, int(c - '0'));
               }
            }
            for (char c : str2)
            {
               if (checkifpresent(hc, int(c - '0')) && !checkifpresent(cmnstr, int(c - '0')))
               {
                  common_str += char(c);
                  insert(cmnstr, int(c - '0'));
               }
            }
         }
         cout << (common_str.length() != 0 ? common_str : "empty") << endl;
      }
   }
}
