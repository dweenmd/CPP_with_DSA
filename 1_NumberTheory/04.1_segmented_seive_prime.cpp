//https://www.youtube.com/watch?v=Y80xuQFFX_Q&list=PL0ARkByihQfQt3B_ZTjuWAe5tgl8ohK8R&index=5

#include<bits/stdc++.h>
using namespace std;
const int MX = 32000;
vector < int > prime;
 
bool ar[MX]; /// false  
void Sieve()
{
    ar[1]=true;
    for(int i = 4; i <= MX; i+=2)
        ar[i]=true;   /// true = not prime
 
    for (int i = 3; i*i <= MX; i+=2)  {
        if (ar[i] == false) {           /// false = prime
            for (int j = i * i; j <= MX; j += i ) {
                ar[j] = true;  
            }
        }
    }
    prime.push_back(2);
    for(int i=3;i<MX;i+=2){
        if(ar[i]==false) prime.push_back(i);
    }
}
 
 
void segSieve( int l, int r)
{
    bool ar[r-l+1];
    for(int i=0; i<r-l+1; i++)
        ar[i] = true;
    if(l == 1) ar[0] = false ;
    for(int i=0; prime[i]*prime[i]<=r; i++){
        int C_Prime= prime[i];
        int base = (l/C_Prime)*C_Prime;
        if(base < l) base += C_Prime; 
    for(int j=base; j<=r; j+=C_Prime){
        ar[j-l]= false; 
    }
    if(base == C_Prime) ar[base-l] = true;
  }
  for(int i=0;i<r-l+1; i++)
  {
    if(ar[i]) cout<< l+i << " ";
  }
}
 
 
int main()
{
    Sieve();
    int l,r;
    cin>>l>>r;
    segSieve(l,r);
 
    return 0;
}