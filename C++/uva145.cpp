#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

vector<int> time(int a, int b, int c, int d);

int main(void)
{
    //read();
    char c;

    while(cin >> c){
        if(c == '#')
            break;
        string s;
        int sh, sm, eh, em;
        cin >> s >> sh >> sm >> eh >> em;

        vector<int> v(3);
        v = time(sh, sm, eh, em);
        double cost = 0.0;
        switch(c)
        {
            case 'A':
                cost = v[0] * 0.10 + v[1] * 0.06 + v[2] * 0.02;
                break;
            case 'B':
                cost = v[0] * 0.25 + v[1] * 0.15 + v[2] * 0.05;
                break;
            case 'C':
                cost = v[0] * 0.53 + v[1] * 0.33 + v[2] * 0.13;
                break;
            case 'D':
                cost = v[0] * 0.87 + v[1] * 0.47 + v[2] * 0.17;
                break;
            case 'E':
                cost = v[0] * 1.44 + v[1] * 0.80 + v[2] * 0.30;
                break;
        }
        //cout << cost << endl;
        cout << setw(10) << s << setw(6) << v[0] << setw(6) << v[1] << setw(6) << v[2] << setw(3) << c << setw(8) << fixed << setprecision(2) << cost << endl;
    }

    return 0;
}

vector<int> time(int a, int b, int c, int d)
{
    vector<int> v(3, 0);
    int s = a * 60 + b;
    int e = c * 60 + d;
    int limit[] = {8*60, 18*60, 22*60, 24*60};

    if(s < e){
        for(int i = s; i < e; i++){
            if(i >= limit[0] && i < limit[1])
                v[0]++;
            if(i >= limit[1] && i < limit[2])
                v[1]++;
            if(i < limit[0] || (i >= limit[2] && i < limit[3]))
                v[2]++;
        }
    }
    else{
        for(int i = s; i < 24 * 60; i++){
            if(i >= limit[0] && i < limit[1])
                v[0]++;
            if(i >= limit[1] && i < limit[2])
                v[1]++;
            if(i < limit[0] || (i >= limit[2] && i < limit[3]))
                v[2]++;

        }
        for(int i = 0; i < e; i++){
            if(i >= limit[0] && i < limit[1])
                v[0]++;
            if(i >= limit[1] && i < limit[2])
                v[1]++;
            if(i < limit[0] || (i >= limit[2] && i < limit[3]))
                v[2]++;
        }
    }

    return v;
}
