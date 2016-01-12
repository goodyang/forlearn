public class Solution {
    public int romanToInt(String s) {
        int result = 0;
        Map<String, Integer> dic = new HashMap<String, Integer>();
        dic.put("M", 1000);
        dic.put("D", 500);
        dic.put("C", 100);
        dic.put("L", 50);
        dic.put("X", 10);
        dic.put("V", 5);
        dic.put("I", 1);
        
        int temp = 0;
        for(int i=0; i<s.length(); i++) {
        	temp = dic.get(String.valueOf(s.charAt(i)));
        	if(i<(s.length()-1)&& dic.get(String.valueOf(s.charAt(i+1)))>temp){
        		i++;
        		temp = dic.get(String.valueOf(s.charAt(i)))-temp;
        	}
        	result += temp;
        }        
        return result;
    }
}