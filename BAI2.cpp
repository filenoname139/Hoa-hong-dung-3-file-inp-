#include <bits/stdc++.h>
using namespace std;
struct hocsinh{
    string ten;
    int diem;
};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<hocsinh> dshoathom;
	freopen("To1.inp","r",stdin);
	int n1,n2,n3;
	string s;
	cin >> n1;
	cin.ignore(1);
	while(n1--){
		getline(cin,s);
		hocsinh hs;
		hs.ten=s.substr(0,s.find('-'));
		hs.diem=stoi(s.substr(s.find('-')+1));
		dshoathom.push_back(hs);
	}
	//Doc file to 2
	freopen("To2.inp","r",stdin);
	cin >> n2;
	cin.ignore(1);
	while(n2--){
		getline(cin,s);
		hocsinh hs;
		hs.ten=s.substr(0,s.find('-'));
		hs.diem=stoi(s.substr(s.find('-')+1));
		dshoathom.push_back(hs);
	}
	//Doc file to 3
	freopen("To3.inp","r",stdin);
	cin >> n3;
	cin.ignore(1);
	while(n3--){
		getline(cin,s);
		hocsinh hs;
		hs.ten=s.substr(0,s.find('-'));
		hs.diem=stoi(s.substr(s.find('-')+1));
		dshoathom.push_back(hs);
	}
	/* for(auto hs:dshoathom){ */
	/* 	cout << hs.ten <<" " << hs.diem << endl; */
	/* } */
    freopen("BAOCAO.out","w",stdout);
    int n8=0, n9=0, n10=0;
    string ten8="", ten9="", ten10="";
    for(auto x:dshoathom){
        if(x.diem==8){
            n8++;
            ten8+=x.ten+'-';
        }else if(x.diem==9){
            n9++;
            ten9+=x.ten+'-';
        }else{
            n10++;
            ten10+=x.ten+'-';
        }
    }
    cout << n8 << " " << n9 << " " << n10 << endl;
    ten8.pop_back();
    ten9.pop_back();
    ten10.pop_back();
    cout << ten8 << endl;
    cout << ten9 << endl;
    cout << ten10 << endl;
    return 0;
}
