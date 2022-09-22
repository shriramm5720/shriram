class Solution {
    public static String reverseWords(String s) {
        String[] str=s.split(" ");
	   String finalresult="";
	   for(int i=0;i<str.length;i++){
	   	String result="";
	   	for(int j=0;j<str[i].length();j++){
	   		result+=str[i].charAt(str[i].length()-j-1);
	   	}
	   	result+=" ";
	   	finalresult+=result;
	   }
        return finalresult.trim();
    
    }
    public static void main(String args[])
    {
        String str="the compliler";
        String str1=reverseWords(str);
        System.out.println(str1);
    }
}
