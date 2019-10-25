int Solution::atoi(const string A) {
    if(isalpha(A[0]) || (isalpha(A[1]) && !isdigit(A[0])))
        return 0;
        
    
    
    if(!isdigit(A[0]) && A[1]==' ')
        return 0;
    
    int len = 0;
    int j = 0;
    while(!isdigit(A[j])){
        j++;
        len++;
    }
    
    //cout<<A[j]<<" ";
     
    for(int i=j;i<A.length() && isdigit(A[i]);i++)
        len++;
        
    //cout<<len<<" ";
        
    int num = 0;
    for(int i=j;i<len;i++){
        if(num>(INT_MAX-(A[i]-'0'))/10){
        
            if(A[0]!='-')
                return INT_MAX;
            else
                return INT_MIN;
        }
        num = num*10 + (A[i]-'0');
        
    }
        
    
    if(A[0]=='-')    
        return -num;
    else
        return num;
        
        
    //this part is fastest solution......using stringstream
    // stringstream ss(A);
    
    // long long int ll;
    
    // ss>>ll;
    
    // if(ll>INT_MAX)
    //     return INT_MAX;
    // else if(ll<INT_MIN)
    //     return INT_MIN;
    // else
    //     return ll;
        
}
