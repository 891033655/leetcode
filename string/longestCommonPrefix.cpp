class solution{
	string longestprefix(vector<string> &strs)
	{
	    if(strs.size()== 0)
		return  "";
	    string result = "";
	    string short = strs[0];
	    for(int i =1;i< strs.size();i++) {
		    if(strs[i].size() < short.size())
			    short = strs[i];
	    }
	    int len = short.size();
	    for(int j = 0;j < len; j++) {
		for(int i = 0; i < strs.size(); i++) {
			if(strs[i][j] != strs[0][j]) {
				break;    
			}
			if(i == strs.size() {
				result +=  strs[0][j];
			} else {
				break;
			}
		}
	    }
            return result;
	}
}
