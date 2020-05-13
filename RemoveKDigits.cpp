class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length()<=k)
            return "0";
        num += '0';
		vector<char> char_vec; 
		for( int i=0; i<num.size(); i++ ){
			while( !char_vec.empty() && num[i] < char_vec.back() && k ){
				k--;
				char_vec.pop_back();
			}
			char_vec.push_back( num[i] );
		}
		string ans;
		for( int i=0; i<char_vec.size()-1; i++ ){
			if( !ans.empty() || char_vec[i]!='0' )
				ans += char_vec[i];
		}
		return ans.empty() ? "0" : ans;
    }
};
