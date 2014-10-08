class solution{
	bool ismaching(const char *s,const char *p) {
		if(s == NULL || p == NULl)
			return false;
		if(*p == '\0')
			return *s == '\0';
		if(*(p+1) == '*') {
			while(*s != '\0' &&(*s == *p || *p == '.') ) {
				if(ismatch(s, p+2)) {
					return true;
				}
				s++;
			} 
			return ismatch(s, p+2);
			} else{
				if(s != '\0' && (*s == *p || *p == '.'))
					return ismatch(s+1, p+1);
			}
		return false;

		}
	}

