#include <iostream>
#include <vector>
using namespace std;

struct Poly
{
    double a; // 系数
    int n; // 指数
};

int main()
{
    int k1, k2, maxpos = 0;
    vector<struct Poly> v;
    struct Poly new_poly[2050] = {0.0, 0}, poly[25] = {0.0, 0};
    cin >> k1;
    for (int i = 0; i < k1; i++)
    {
        cin >> poly[i].n >> poly[i].a;
    }
    cin >> k2;
    for (int i = 10; i < 10 + k2; i++)
    {
        cin >> poly[i].n >> poly[i].a;
        for (int j = 0; j < k1; j++)
        {
            new_poly[poly[j].n + poly[i].n].a += poly[j].a * poly[i].a;
            new_poly[poly[j].n + poly[i].n].n = poly[j].n + poly[i].n;
            if (maxpos < (poly[j].n + poly[i].n))
                maxpos = poly[j].n + poly[i].n;
        }
    }
    for (int i = maxpos; i >= 0; i--)
    {
        if (new_poly[i].a != 0)
        {
            v.push_back(new_poly[i]);
        }
    }
    if (v.empty())
    {
        printf("%d\n", int(v.size()));
    }
    else
    {
        printf("%d ", int(v.size()));
        for (int i = 0; i < int(v.size()); i++)
        {
            if (i != int(v.size()) - 1)
            {
                printf("%d %.1f ", v[i].n, v[i].a);
            }
            else
            {
                printf("%d %.1f\n", v[i].n, v[i].a);
            }
        }
    }

    return 0;
}
