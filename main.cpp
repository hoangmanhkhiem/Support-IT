#include <bits/stdc++.h>

using namespace std;


int main(){
    
    int n;
    map<string, int> mp;
    map<string, int> :: iterator it;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n*(n-1)/2; i++){
        string str;
        //cin.clear();
        
        getline(cin, str); 
        int size_str = str.length();
        for (int j = 0; j < size_str; j++){
            if(isdigit(str[j])){
                if (str[j] > str[j + 4]){
                    mp[str.substr(0, j - 1)] += 3;
                }
                else if (str[j] == str[j + 4]){
                    mp[str.substr(0, j - 1)] ++;
                    mp[str.substr(j + 6, size_str - j - 6)] ++;
                }
                else mp[str.substr(j + 6, size_str - j - 6)] += 3; 
                
                break;
            }
        } 
    }
 
    for(it = mp.begin();it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    } 
    
    return 0;
}