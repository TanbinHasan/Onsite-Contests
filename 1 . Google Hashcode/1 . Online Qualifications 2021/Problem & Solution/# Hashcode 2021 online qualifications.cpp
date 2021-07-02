#include <bits/stdc++.h>

#define DURATION_OF_GREENLIGHT 1
#define ll long long
#define lp(a , b) for(a = 0; a < b; ++a)
#define lp1(a , b) for(a = 1; a <= b; ++a)

using namespace std;

map<string, int> sLen, sEnd;

struct Street
{
    int B, E, L;
    string name;
};

struct Vehicle
{
    int P, mnDur = 0;
    Street path[10000];
};

bool cmp(Vehicle a, Vehicle b)
{
    return a.mnDur < b.mnDur;
}

ll D, I, S, V, F, i, j, mInd;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> D >> I >> S >> V >> F;
    int Iused[I+3];
    Street street[S];
    lp(i, S)
    {
        cin >> street[i].B >> street[i].E;
        cin >> street[i].name;
        cin >> street[i].L;
        sLen[street[i].name] = street[i].L;
        sEnd[street[i].name] = street[i].E;
        Iused[street[i].B] = Iused[street[i].E] = 1;
    }
    int cntI = 0;
    lp(i, I)
    {
        if(Iused[i])
        {
            cntI++;
        }
    }
    Vehicle car[V];
    lp(i, V)
    {
        cin >> car[i].P;
        lp(j, car[i].P)
        {
            cin >> car[i].path[j].name;
            car[i].mnDur += sLen[car[i].path[j].name];
        }
    }
    sort(car, car+V, cmp);
    cout << cntI << "\n";
    lp(i, I)
    {
        Iused[i] = 0;
    }
    lp(i, V)
    {
        lp(j, car[i].P)
        {
            if(!Iused[sEnd[car[i].path[j].name]])
            {
                cout << sEnd[car[i].path[j].name] << "\n";
                cout << "1\n";
                cout << car[i].path[j].name << " " << DURATION_OF_GREENLIGHT << "\n";
                Iused[sEnd[car[i].path[j].name]] = 1;
            }
        }
    }
    return 0;
}
