/**
 *    author:  md olik ahmed
 *    created: 27.05.2025
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(m) for(int i=0; i<(m); i++)
#define fro(m) for(int i=1; i<(m); i++)
#define frj(m) for(int j=0; j<(m); j++)
#define frr(n) for(int i=(n); i>=0; i--)
#define pb push_back
#define pf push_front
#define nl '\n'
#define nll cout << '\n'
#define mod 1000000007
#define inf (1LL<<60)
#define inff (1<<30)-1
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
 int main()
 {
     int t,n;
     cin>>t;
     for(int i=0;i<t;i++)
     {
         cin>>n;
         string s;
         cin>>s;
         if(n==2)
          {
             if(s[0]=='A')
             {
                 cout<<"Alice"<<endl;
             }
             else{
                cout<<"Bob"<<endl;
             }
             continue;
           }

          if(s[n-1]==s[0])
             {
                 if(s[0]=='A')
                 {
                     cout<<"Alice"<<endl;
                 }
                 else{
                    cout<<"Bob"<<endl;
                 }
             }

          else
          {
              if(s[n-1]=='B')
              {
                  int b=0;
                  for(int i=0;i<n;i++)
                  {
                      if(s[i]=='B')
                      {
                          b=1;

                      }
                  }
                  if(b)
                  {
                      cout<<"Bob"<<endl;
                  }
                  else{
                    cout<<"Alice"<<endl;
                  }
              }

            else if(s[n-1]==s[n-2]&& s[n-1]=='A')
                 {
                     cout<<"Alice"<<endl;
                 }
                 else
                 {
                   cout<<"Bob"<<endl;
                 }
              }

         }
     }

