/*********************************************************************************\
*  _________  _      _  ________  _       _       __       ________               *
* |___   ___|| |    | ||  ______|| |     | |     /  \     |  ____  |              *
*     | |    | |    | || |______ | |_____| |    / /\ \    | |____| |              *
*     | |    | |    | ||______  ||  _____  |   / /__\ \   |  __  __|              *
*     | |    | |____| | ______| || |     | |  / ______ \  | |  \ \                *
*     |_|    |________||________||_|     |_| /_/      \_\ |_|   \_\               *
*  ________       __      ________  _    __       __       ________               *
* |  ______|     /  \    |  ____  || |  / /      /  \     |  ____  |              *
* | |______     / /\ \   | |____| || |_/ /      / /\ \    | |____| |              *
* |______  |   / /__\ \  |  __  __||  __ \     / /__\ \   |  __  __|              *
*  ______| |  / ______ \ | |  \ \  | |  \ \   / ______ \  | |  \ \                *
* |________| /_/      \_\|_|   \_\ |_|   \_\ /_/      \_\ |_|   \_\               *
*                                                                                 *
*                                                                                 *
*   Department of Computer Science & Engineering                                  *
*   Student ID : 18CSE035                                                         *
*   Bangabnadhu Sheikh Mujibur Rahman Science & Technology University,Gopalgonj.  *
*                                                                                 *
\*********************************************************************************/

//Now Write to Code ___________________________

#include<bits/stdc++.h>
using namespace std;

int Palindrome1(string x)
{
    int len,i;

    len = x.size();
    for(i = 0 ; i <= len/2; i++)
    {
        if(x[i] != x[len-i-1])
        {
            return 0;
        }
    }
    return 1;
}

int Palindrome2(string x,string y)
{
    int len,i;

    len = x.size();
    for(i = 0 ; i < len; i++)
    {
        if(x[i] != y[len-i-1])
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    int n,m,i,j,length = 0,cnt=0;

    cin >> n >> m;
    string str[5001];
    
    for(i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(1 == Palindrome2(str[i],str[j]))
            {
                length = length + 2*m;
                //cout << length << endl;
            }         
        }
        if(1 == Palindrome1(str[i]) && cnt == 0)
        {
            length = length + m;
            cnt++;
            //cout << length << endl;
        }
    }


    int new_length = length/m,ct=0;
    string new_str[new_length+1];
    int c1=0,c2=new_length-1;
    int mid = c2/2;

    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(1 == Palindrome2(str[i],str[j]))
            {
                 new_str[c1] = str[i];
                 new_str[c2] = str[j];
                 c1++,c2--;
            }         
        }
        if(1 == Palindrome1(str[i]) && ct == 0)
        {
             new_str[(new_length-1)/2] = str[i];
        }
    }

    cout << length << endl;
    for(i = 0; i < new_length; i++)
    {
        cout << new_str[i];
    }

    cout << endl;


    return 0;
}