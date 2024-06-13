#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   
   if (cnt == M){
      for (int i = 0; i < M; ++i) cout << vec[i];
      cout << " ";
   }
   else if (vec.empty()){
      for (int i = 1; i <= N; ++i){
         vec.push_back(i);
         func(++cnt);
         vec.pop_back();
         cnt--;
      }
   } else {
      for (int i = vec[cnt-1]+1; i <= N; ++i){
         vec.push_back(i);
         func(++cnt);
         vec.pop_back();
         cnt--;
      }
   }

}

int main() {
   cin >> N >> M;
   func(0);
}
