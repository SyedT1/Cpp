#include<bits/stdc++.h>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;
int main()
{
    srand(time(0));
    int tto;
    cin >> tto;
    // Opening a new text file to produce random values using output file stream
    ofstream file("input.txt");
    // Opens file
    if (!file.is_open())
    {
        cout << "File couldn't be opened \n";
    }
    else
    {
        for (int i = 1; i <= tto; i++)
        {
            //Taking the random values into the text file from 1 to tto
            file << 1 + rand() % (tto + 1) - 1 << '\n';
        }
        // Closing file
        file.close();
        // Reading input from file previously created
        ifstream file;
        file.open("input.txt");
        int pl, *p = new int[tto], k = 0, even = 0;
        while (file >> pl)
        {
            p[k++] = pl;
            if (pl % 2 == 0)
            {
                even++;
            }
        }
        //Closing file
        file.close();
        // Placing even numbers in the first half
        for (int i = 0; i < even;)
        {
            for (int j = i; j < tto; j++)
            {
                if (p[j] % 2 == 0)
                {
                    swap(p[i], p[j]);
                    i++;
                    break;
                }
            }
        }
        // Sorting even numbers in the first half
        for (int i = 0; i < even - 1; i++)
        {
            for (int j = i + 1; j < even; j++)
            {
                if (p[i] > p[j])
                {
                    swap(p[i], p[j]);
                }
            }
        }
        // Sorting odd numbers in the second half
        if (even)
        {
            for (int i = even; i < tto - 1; i++)
            {
                for (int j = i + 1; j < tto; j++)
                {
                    if (p[i] > p[j])
                    {
                        swap(p[i], p[j]);
                    }
                }
            }
        }
        /* Producing the sorted array of the even and odd numbers
      Opening new output text file using output file stream
      */
        ofstream fileo("output.txt");
        if (!fileo.is_open())
        {
            cout << "Cannot open file";
        }
        else
        {
            for (int i = 0; i < tto; i++)
            {
                fileo << p[i] << ' ';
            }
        }
        // Closing the output text file which contains sorted order
        fileo.close();
    }
    return 0;
}
