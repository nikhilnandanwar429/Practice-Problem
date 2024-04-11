#include<bits/stdc++.h>
using namespace std;

int main(){
    //create 
    unordered_map<string , int> m;

    //insertion

    //1
    pair<string , int> p = make_pair("babbar" , 3);
    m.insert(p);

    //2
    pair<string , int> pair2("love" , 2);
    m.insert(pair2);

    //3
    m["mera"] = 2;
    m["mera"] = 3;

    //search
    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;

    //cout << m.at("unknown") << endl;
    cout << m["unknown"] << endl;

    //size
    cout << m.size() << endl;

    //check presence
    cout << "m.count(love) -> " << m.count("love") << endl;

    //erase
    m.erase("love");
    cout << m.size() <<endl;

    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }
    
    //iterator
    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}
