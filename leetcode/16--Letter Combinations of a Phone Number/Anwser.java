public static List<String> letterCombinations(String digits) {
	List<String> result = new ArrayList<String>();
	char[] two = {'a', 'b', 'c'};
	char[] three = {'d', 'e', 'f'};
	char[] four = {'g', 'h', 'i'};
	char[] five = {'j', 'k', 'l'};
	char[] six = {'m', 'n', 'o'};
	char[] seven = {'p', 'q', 'r', 's'};
	char[] eight = {'t', 'u', 'v'};
	char[] nine = {'w', 'x', 'y', 'z'};
	
	Map<Integer, char[]> cMap = new HashMap<Integer, char[]>();
	cMap.put(Integer.valueOf('2'), two);
	cMap.put(Integer.valueOf('3'), three);
	cMap.put(Integer.valueOf('4'), four);
	cMap.put(Integer.valueOf('5'), five);
	cMap.put(Integer.valueOf('6'), six);
	cMap.put(Integer.valueOf('7'), seven);
	cMap.put(Integer.valueOf('8'), eight);
	cMap.put(Integer.valueOf('9'), nine);
	
	if(digits.length() == 0) return result;
	
	List<String> list1 = new ArrayList<String>();
	for(char c : cMap.get(Integer.valueOf(digits.charAt(0)))) {
		list1.add(String.valueOf(c));
	}
	
	if(digits.length() == 1) return list1;
	
	List<String> tempList = null;
	for(int i=1; i<digits.length(); i++) {
		char[] chars = cMap.get(Integer.valueOf(digits.charAt(i)));
		
		tempList = new ArrayList<String>();
		for(String s : list1) {
			for(char thisch : chars) {
				tempList.add(s+thisch);
			}
		}
		list1 = tempList;
	}
	result = list1;
	return result;
 }