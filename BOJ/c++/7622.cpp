﻿//  Copyright © 2021 안주형. All rights reserved.
// 
//  https://www.acmicpc.net/problem/7622
//  BOJ7622 이중 우선순위 큐
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		multiset<int>set;	//set은 중복허용이 안되지만 multiset은 가능. 
		int N; cin >> N;
		for (int i = 0; i < N; i++) {	//큐 원소 삽입
			char a; int b; cin >> a >> b;
			if (a == 'I') set.insert(b);
			else {
				if (set.empty()) continue;
				if (b == 1) set.erase(--set.end());	//D 1일떄				
				else set.erase(set.begin()); //D -1 일때	
			}
		}

			if (set.empty()) cout << "EMPTY" << "\n";
			else cout << *(--set.end()) << ' ' << *set.begin() << "\n";
	}
}