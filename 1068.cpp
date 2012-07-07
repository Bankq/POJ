#include <iostream>
using namespace std;

int main(){
  int s[50];//s stores parenthesis generated
  int p[25];//p stores input P-sequence
  int w[50];
  bool flag[50];//flag to mark if one parenthesis is matched

  int t;//num of testcase
  cin >> t;
  while(t--){ // for each case
	int loc = 0;//location pointer
	int last = 0;//last input number
	int n;// num of input number
	cin >> n;
	memset(flag,0,sizeof(flag));

	for(int i = 0 ; i < n ; ++i){//for each input
	  cin >> p[i];
	  while(last < p[i]){
		//e.g. last = 0 p[0] = 4
		s[loc++] = 0; // left
		last ++;
	  }
	  s[loc++] = 1;
	}

	for(int i = 0 ;i < loc; ++i){
	  if( s[i] == 1 ){
		// meet a right one
		int count = 1;

		for( int j = i-1; j >= 0; --j){
		  //find match backwards
		  if(s[j] == 0){
			//if met an unmatched left
			if(flag[j]) count++;
			else {
			  cout << count << ' ';
			  flag[j] = true;
			  break;
			}
		  }
		}

	  }
	}
	cout << endl;
  }
}
