#include <iostream>
#include <vector>
using namespace std;

struct Poly
{
	float a; // 系数
	int n; // 指数
};

int main()
{
	int k1,k2,n,maxpos = 0;
    float a;
	vector<struct Poly> v;
	struct Poly new_poly[1001] = {0,0};
	cin >> k1;
	for(int i = 0; i < k1; i++)
	{
		cin >> n >> a;
		new_poly[n].a += a;
		new_poly[n].n = n;
		if(maxpos < n)
			maxpos = n;
	}
	cin >> k2;
	for(int i = 0; i < k2; i++)
	{
        cin >> n >> a;
        new_poly[n].a += a;
        new_poly[n].n = n;
        if(maxpos < n)
            maxpos = n;
	}
	for(int i = maxpos; i >= 0; i--)
	{
		if(new_poly[i].a != 0)
		{
			v.push_back(new_poly[i]);
		}
	}
	if(v.empty())
    {
        printf("%d\n",int(v.size()));
    }
    else
    {
        printf("%d ",int(v.size()));
        for(int i = 0; i < int(v.size()); i++)
        {
            if( i != int(v.size()) - 1)
            {
                printf("%d %.1f ",v[i].n,v[i].a);
            }
            else
            {
                printf("%d %.1f\n",v[i].n,v[i].a);
            }
        }
    }

	return 0;
}


