public String longestCommonPrefix(String[] strs) {
	if(strs==null || strs.length==0) return "";
	String lcprefix = strs[0];
	String temp = null;
	for(int i=1; i< strs.length; i++) {
		temp = strs[i];
		int j = 0;
		for(j=0; j<temp.length()&&j<lcprefix.length();j++) {
			if(temp.charAt(j) != lcprefix.charAt(j)) {
				break;
			}
		}
		lcprefix = temp.substring(0, j);
		if(j==0) return "";
	}
	return lcprefix;
}