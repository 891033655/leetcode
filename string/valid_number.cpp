class solution{
	bool isnumber(const char *s)
	{
		int state = 1;
		bool isnumber = false;
		while(true) {
		    if(state == 1) {
			while(*s ==  ' ')
			    s++;
			if(*s == '+'|| *s == '-')
				s++;
			if(*s <= '9' && *s >= '0') {
				while( *s <= '9' && *s >= '0')
			        	s++;
			    }
				isnumber = true;
				if(*s == '.') {
					state = 2;
					s++;
					continue;
				} else {
					state = 3;
					s++;
					continue;
				}
				while(*s == ' ')
				    s++;
				return (isnumber && *s == 0);

			} else if {
				if(*s <= '9' && *s >= '0'){
				    while(*s <= '9' && *s >= '0')
					    s++;
				    isnumber = true;
				    if(*s == 'e') {
					s++;
					state = 3;
					continue;
				    }
				}


























			
                                                     
		
	}
}
