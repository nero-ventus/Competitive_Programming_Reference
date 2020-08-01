#define Dt int //Data type int long long int string ...
#define T vector<Dt>;

vector<T> permutations(T v) {
	vector<T> ans;
	sort(v.begin(), v.end());
	do ans.push_back(v);
	while (next_permutation(v.begin(), v.end()));
	return ans;
}
