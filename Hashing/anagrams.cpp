vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    
    map <string,vector <int>> mp;
    
    mp.clear();
    string res;
    res.clear();
    
    for(int i=0;i<A.size();i++)
    {
        res = A[i];
        sort(res.begin(),res.end());
        mp[res].push_back(i);
    }
    
    int row = mp.size();
    
    vector <vector <int>> v(row);
    int j=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        for(int i=0;i<(it->second).size();i++)
            v[j].push_back((it->second)[i]+1);
            //cout<<(it->second)[i]+1<<" ";
        
        j++;
       // cout<<endl;
    }
    
    return v;
}
