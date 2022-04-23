#include <iostream>
#include <algorithm>
using namespace std;

#define N 21

void section_swap(int arr[], int a, int b){
	
	while(true){
		swap(arr[a],arr[b]);
		
		if(b-a==1||b-a==0)
			break;
		a++;
		b--;
	}
}

int main(int argc, char**argv) {
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int arr[N];
	int start, end;
	
	for(int i=0; i<N; i++){
		arr[i] = i;
	}
	
	for(int i=0; i<10; i++){
		cin >> start >> end;
	
		section_swap(arr, start, end);
	}
	
	for(int i=1; i<N; i++){
		cout << arr[i] <<" ";
	}
	
	
	return 0;
}