int dfs(int len,int &max_len,string &curr,int curr_level){
        if(curr=="") return -1;
        while(curr.length()){
            string curr_s="";
            int i=0;
            while(i<curr.length() && curr[i]!='\n'){
                curr_s+=curr[i];
                ++i;
            }
            int curr_len=curr_s.length();
            if(curr_s.find('.')!=string::npos){
                max_len=max(max_len,len+curr_len);
            }
            ++i;
            int check_level=0;
            while(i<curr.length() && curr[i]=='\t'){
                ++i;
                ++check_level;
            }
            if(i>=curr.length()){
                curr="";
                return -1;
            }
            curr=curr.substr(curr_len+check_level+1);
            if(check_level>curr_level){
                int check_rest=dfs(len+curr_len+1,max_len,curr,check_level);
                if(check_rest<curr_level) return check_rest;
            }
            else if(check_level<curr_level) return check_level;
        }
        return -1;
    }

    int lengthLongestPath(string input) {
        int max_len=0;
        dfs(0,max_len,input,0);
        return max_len;
    }
