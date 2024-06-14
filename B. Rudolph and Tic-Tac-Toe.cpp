#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <fstream>
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define sortx(X) sort(X.begin(),X.end());
#define el "\n"
#define yes cout<<"YES"<<el;
#define no cout<<"NO"<<el;
#define imp cout<<"-1"<<el;
#define y_n if(cond){yes}else{no}
#define MW_HY ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;
// ----------------------------Functions---------------------------- //
ll string_to_num(char c, string word){
  ll val = 0;
  if (c == 'x')
  {
    for (ll i = 0; i < word.size(); i++)
    {
      val *= 10;
      val += word[i]-48;
    }
  }
  else
  {
    val += c-48;
  }
  return val;
}
ld avg(ll size){
  ld val;
  ld sum = 0;
  for (ll i = 0; i < size; i++)
  {
    cin >> val;
    sum += val;
  }
  ld res = sum/size;
  return res;
}
string num_to_string(ll val){
  string word = "";
  while (val)
  {
    ll x = val%10;
    word = (char)(x+48) + word;
    val /= 10;
  }
  return word;
}
string binary_code(ll x){
  string word = "";
  while (x)
  {
    if (x % 2)
    {
      word = '1' + word;
    }
    else
    {
      word = '0' + word;
    }
    x /= 2;
  }
  return word;
}
bool is_prime(ll x){
  if (x == 2)
  {
    return true;
  }
  if (x < 2 || x % 2 == 0)
  {
    return false;
  }
  for (ll i = 3; i <= sqrtl(x); i+=2)
  {
    if (x % i == 0)
    {
      return false;
    }
  }
  return true;
}
bool is_palindrom(string word){
  ll start = 0, end = word.size()-1;
  while (start <= end)
  {
    if (word[start] != word[end])
    {
      return false;
    }
    start++, end--;
  }
  return true;
}
void swap(int x, int y){
  int temp = x;
  x = y;
  y = temp;
}
// ----------------------------------------------------------------- //

void solution(){
  string st1, st2, st3;
  cin >> st1 >> st2 >> st3;
  char c;
  if (st1[0] == st1[1] && st1[1] == st1[2] && st1[0] != '.')
  {
    c = st1[0];
    cout << c << el;
  }
  else if (st2[0] == st2[1] && st2[1] == st2[2] && st2[0] != '.')
  {
    c = st2[0];
    cout << c << el;
  }
  else if (st3[0] == st3[1] && st3[1] == st3[2] && st3[0] != '.')
  {
    c = st3[0];
    cout << c << el;
  }
  else if (st1[0] == st3[0] && st3[0] == st2[0] && st1[0] != '.')
  {
    c = st1[0];
    cout << c << el;
  }
  else if (st1[1] == st3[1] && st3[1] == st2[1] && st1[1] != '.')
  {
    c = st1[1];
    cout << c << el;
  }
  else if (st1[2] == st3[2] && st3[2] == st2[2] && st1[2] != '.')
  {
    c = st1[2];
    cout << c << el;
  }
  else if (st1[0] == st3[2] && st3[2] == st2[1] && st1[0] != '.')
  {
    c = st1[0];
    cout << c << el;
  }
  else if (st1[2] == st3[0] && st3[0] == st2[1] && st1[2] != '.')
  {
    c = st1[2];
    cout << c << el;
  }
  else
  {
    cout << "DRAW" << el;
  }
}

int main(){ MW_HY
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int ntimes = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}