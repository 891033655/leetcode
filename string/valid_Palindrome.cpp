class solution{
	isPalindrome(stirng s) {
		string t="";
		for(int i=0;i<s.length();i++) {
			if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9'||s[i]>='A'&&s[i]<='Z') {
				if(s[i]>='A'&&s[i]<='Z') {
					t +=(s[i]-'A'+'a');

				} else {
					t += s[i];
				}
			}
	 }       	
			if(t == "")
			return true;
			for(int i = 0;i<t.length() / 2;i++)
			{
				if(t[i]!=t[t.length()-i-1]) {
					return false;
				}
			}

			return true;
			
	}
}
