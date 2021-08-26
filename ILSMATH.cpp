#include<bits/stdc++.h>
using namespace std; 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> res;
    double sum=0;
    for(int i=1; ceil(sum)<=n; i++){
    	sum+=log10(i);
    	if(ceil(sum)==n) res.push_back(i);
	}
	if(res.empty()) cout << "NO";
	else{
		cout <<res.size()<<"\n";
		for (int x=0; x< res.size();x++) cout << res.at(x) << "\n";
	}
	return 0;
}


