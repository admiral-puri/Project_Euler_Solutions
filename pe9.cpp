    #include <bits/stdc++.h>
    using namespace std;
    #define PB push_back
    #define MP make_pair
    #define F first
    #define S second
    #define MAXI 1000001
    typedef long long ll;
    typedef vector<int> vi;
    typedef pair<int,int>pi; 
    const ll inf = 1e18;
    const int N = 2 * 1e5 + 10;
     
    int main() 
      {
          ios_base::sync_with_stdio(0);
          cin.tie(NULL);
          long t,n,i,j,k,maxi,mini,avg,ans;
          cin>>t;
          while(t--)
          {
              ans=0;
              cin>>n;
              for(i=1;i<n;i++)
                  {
                      j=(n*(n-2*i))/(2*(n-i));
                          k=n-i-j;
                         
                          if(i*i+j*j==k*k)
                          if(i*j*k>ans)
                          ans=i*j*k;
                  }
                  
                  if(ans==0)
                  cout<<"-1"<<endl;
                  else
                   cout<<ans<<endl;
     
          }
          
        
     
        return 0;
      }
