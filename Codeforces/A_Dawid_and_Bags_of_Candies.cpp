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

int main()
{
  int i,a[5];

  for(i = 0; i < 4; i++)
  {
  	cin >> a[i];
  }

 if(a[0]+a[1] == a[2]+a[3])
 {
 	cout << "YES" << endl;
 }
 else if(a[0]+a[2] == a[1]+a[3])
 {
 	cout << "YES" << endl;
 }
 else if(a[0]+a[3] == a[1]+a[2])
 {
 	cout << "YES" << endl;
 }
 else if(a[0]+a[1] == a[2]+a[3])
 {
 	cout << "YES" << endl;
 }
 else if(a[0]+a[1]+a[2] == a[3])
 {
 	cout << "YES" << endl;
 }
 else if(a[0]+a[1]+a[3] == a[2])
 {
 	cout << "YES" << endl;
 }
 else if(a[0]+a[2]+a[3] == a[1])
 {
 	cout << "YES" << endl;
 }
 else if(a[1]+a[2]+a[3] == a[0])
 {
 	cout << "YES" << endl;
 }
 else
 {
 	cout << "NO" << endl;
 }
 
return 0;
}