#include <iostream>
#include <string>
using namespace std;

/*
tobin{
string t;
while{
turn to binary
}
for(){
reverse order
}
call other function here?
}

todec{
int n = returned value;
for(){
turn back to decimal
}
return n;
}

main{
int n = first input, k = second;
for{
to get the base number
}
string t = call functions
int a = call function #2
output a
}
*/

string tobin(int a){
  string str = "";
  while(a!=0){
    str += a%2+'0';
    a/=2;
  }
  cout<<str<<endl;
  int h = str.length();
  for(int i = 0; i<h/2; i++){
    swap(str[i], str[h-i-1]);
    //123
    //123 to 321
  }
  return str;
  // string h;
  // for(int i = 0, j = str.length(); i<=str.length(); i++, j--){
  //   h[i] = str[j];
  // }
  // cout<<h<<endl;
  // return h;
}

int todec(string a){
  int num = 0;
  for(int i = a.length()-1; i>=0; i--){
    num = num*2+(a[i]-'0');
  }
  return num;
}

int main() {
  int n, k;
  cin>>n>>k;
  int temp = n;
  for(int i = k-1; i>0; i--){
    n = n*temp;
  }
  cout<<n<<" "<<k<<endl;
  string b = tobin(n);
  int t = todec(b);
  cout<<t;
}