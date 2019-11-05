vector<int> Solution::flip(string A) {
   int diff =0;
   int l = 0;
   int max_diff = INT_MIN;
   int r = 0;
   int left =0;
   int flag = 0;
   for(int i=0;i<A.length();i++)
   {
        if(A[i]=='0')
            diff++;
        else if(A[i]=='1')
            diff--;
            
        if(diff<=0)
        {
            diff = 0;
            l=i+1;
        }
        else if(diff>max_diff)
        {
            max_diff = diff;
            r = i;
            left = l;
            flag =1;
        }
            
   }
   
   vector <int> res;
   if(flag==1)
   {
        res.push_back(left+1);
        res.push_back(r+1);
   }
   return res;
   
}
