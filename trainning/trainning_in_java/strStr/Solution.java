class Solution{
	
	public int strStr(String haystack, String needle){
		
		if (needle.isEmpty()) return 0;

		int nlen = needle.length();

		for (int i = 0; i <= haystack.len() - nlen; i++)
		{
			String substring = haystack.substring(i, i + nlen);
			if (substring.equals(needle)){
				return i;
			}
		}

		return -1;
	}
}
