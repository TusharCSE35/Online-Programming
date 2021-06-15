#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j, k, x, c = 0, z = 0, f = INT_MIN, l = INT_MAX,y;
        cin >> n >> k;
        string s;
        cin >> s;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                y=abs(f-i)-1;
                if (y >= k)
                {
                    z = 0;
                    for (j = i + 1; j < n; j++)
                    {
                        if (s[j] == '1')
                        {
                            l = j;
                            break;
                          }//else
                        // {
                        //     z++;
                        //     if(z>=k)
                        //     {
                        //         i=(j+1);
                        //         l=j+1;
                        //         break;
                        //     }
                        // }
                    }
                    y=abs(l-i)-1;
                    if (y>= k)
                    {
                        c++;
                        s[i] = '1';
                        // i = l + 1;
                        f = i;
                    }
                }

            } else
            {
                f = i;
            }
        }
        cout << c << endl;

    }


}