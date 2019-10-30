vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    
    int n= A.size();
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    
    priority_queue <pair<int,pair<int,int>>> pq;
    
    pair <int,int> pp = make_pair(n-1,n-1);
    
    pair <int,pair<int,int>> pp1 = make_pair(A[n-1]+B[n-1],pp);
    
    pq.push(pp1);
    
    set <pair<int,int>> us;
    
    us.insert(make_pair(n-1,n-1));
    
    vector <int> res;
    while(n--)
    {
        pair <int,pair<int,int>> temp = pq.top();
        pq.pop();
        
        int sum = temp.first;
        
        res.push_back(sum);
        
        int i = temp.second.first;
        int j = temp.second.second;
        
        pp = make_pair(i-1,j);
        
        if(us.find(pp)==us.end())
        {
            pp1 = make_pair(A[i-1]+B[j],pp);
        
            pq.push(pp1);
            
            us.insert(pp);
        }
        pp = make_pair(i,j-1);
        
        if(us.find(pp)==us.end())
        {
            pp1 = make_pair(A[i]+B[j-1],pp);
        
            pq.push(pp1);
            
            us.insert(pp);
        }
        
    }
    
    return res;
}
